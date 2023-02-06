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
// source: google/cloud/gaming/v1/realms_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_REALMS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_REALMS_TRACING_STUB_H

#include "google/cloud/gameservices/internal/realms_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class RealmsServiceTracingStub : public RealmsServiceStub {
 public:
  ~RealmsServiceTracingStub() override = default;

  explicit RealmsServiceTracingStub(std::shared_ptr<RealmsServiceStub> child);

  StatusOr<google::cloud::gaming::v1::ListRealmsResponse> ListRealms(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::ListRealmsRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::Realm> GetRealm(
      grpc::ClientContext& context,
      google::cloud::gaming::v1::GetRealmRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateRealm(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::CreateRealmRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteRealm(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::DeleteRealmRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateRealm(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::gaming::v1::UpdateRealmRequest const& request) override;

  StatusOr<google::cloud::gaming::v1::PreviewRealmUpdateResponse>
  PreviewRealmUpdate(grpc::ClientContext& context,
                     google::cloud::gaming::v1::PreviewRealmUpdateRequest const&
                         request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<RealmsServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_GAMESERVICES_INTERNAL_REALMS_TRACING_STUB_H
