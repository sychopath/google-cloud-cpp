// Copyright 2022 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/pubsublite/v1/publisher.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_PUBLISHER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_PUBLISHER_TRACING_STUB_H

#include "google/cloud/pubsublite/internal/publisher_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PublisherServiceTracingStub : public PublisherServiceStub {
 public:
  ~PublisherServiceTracingStub() override = default;

  explicit PublisherServiceTracingStub(
      std::shared_ptr<PublisherServiceStub> child);

  std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
      google::cloud::pubsublite::v1::PublishRequest,
      google::cloud::pubsublite::v1::PublishResponse>>
  AsyncPublish(google::cloud::CompletionQueue const& cq,
               std::unique_ptr<grpc::ClientContext> context) override;

 private:
  std::shared_ptr<PublisherServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUBLITE_INTERNAL_PUBLISHER_TRACING_STUB_H
