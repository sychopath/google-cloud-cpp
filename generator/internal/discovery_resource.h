// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_RESOURCE_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_RESOURCE_H

#include "generator/internal/discovery_type_vertex.h"
#include <nlohmann/json.hpp>
#include <string>

namespace google {
namespace cloud {
namespace generator_internal {

class DiscoveryResource {
 public:
  DiscoveryResource() = default;
  DiscoveryResource(std::string name, std::string default_host,
                    std::string base_path, nlohmann::json json);

  nlohmann::json const& json() const { return json_; }

 private:
  std::string name_;
  std::string default_host_;
  std::string base_path_;
  nlohmann::json json_;
};

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_DISCOVERY_RESOURCE_H
