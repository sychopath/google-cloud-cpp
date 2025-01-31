# ~~~
# Copyright 2023 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

if (APPLE OR WIN32)
    message(STATUS "The docfx directory is only used and tested on Linux")
    return()
endif ()
if (NOT GOOGLE_CLOUD_CPP_ENABLE_CXX_EXCEPTIONS)
    message(STATUS "The docfx directory requires C++ exceptions")
    return()
endif ()

find_package(pugixml CONFIG REQUIRED)
find_package(yaml-cpp CONFIG REQUIRED)

include(EnableWerror)

add_library(
    docfx # cmake-format: sort
    config.h
    doxygen2markdown.cc
    doxygen2markdown.h
    doxygen2toc.cc
    doxygen2toc.h
    doxygen_pages.cc
    doxygen_pages.h
    parse_arguments.cc
    parse_arguments.h
    toc_entry.cc
    toc_entry.h)
google_cloud_cpp_add_common_options(docfx)
target_include_directories(docfx PUBLIC "${PROJECT_SOURCE_DIR}")
target_compile_features(docfx PUBLIC cxx_std_17)
target_link_libraries(docfx PUBLIC pugixml::pugixml yaml-cpp)

# To avoid maintaining the list of files for the library, export them to a .bzl
# file.
include(CreateBazelConfig)
create_bazel_config(docfx YEAR "2023")

add_executable(doxygen2docfx doxygen2docfx.cc)
target_link_libraries(doxygen2docfx PUBLIC docfx)

include(CTest)
include(FindGMockWithTargets)

if (NOT BUILD_TESTING)
    return()
endif ()

set(unit_tests
    # cmake-format: sort
    doxygen2markdown_test.cc doxygen2toc_test.cc doxygen_pages_test.cc
    parse_arguments_test.cc)

# Export the list of unit tests to a .bzl file so we do not need to maintain the
# list in two places.
export_list_to_bazel("unit_tests.bzl" "unit_tests" YEAR "2023")

foreach (fname IN LISTS unit_tests)
    google_cloud_cpp_add_executable(target "docfx" "${fname}")
    target_link_libraries(${target} PRIVATE docfx GTest::gmock_main
                                            GTest::gmock GTest::gtest)
    google_cloud_cpp_add_common_options(${target})

    add_test(NAME ${target} COMMAND ${target})
endforeach ()
