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
// source: google/cloud/managedidentities/v1/managed_identities_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_INTERNAL_MANAGED_IDENTITIES_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_INTERNAL_MANAGED_IDENTITIES_TRACING_STUB_H

#include "google/cloud/managedidentities/internal/managed_identities_stub.h"
#include "google/cloud/version.h"

namespace google {
namespace cloud {
namespace managedidentities_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ManagedIdentitiesServiceTracingStub
    : public ManagedIdentitiesServiceStub {
 public:
  ~ManagedIdentitiesServiceTracingStub() override = default;

  explicit ManagedIdentitiesServiceTracingStub(
      std::shared_ptr<ManagedIdentitiesServiceStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateMicrosoftAdDomain(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::
          CreateMicrosoftAdDomainRequest const& request) override;

  StatusOr<google::cloud::managedidentities::v1::ResetAdminPasswordResponse>
  ResetAdminPassword(
      grpc::ClientContext& context,
      google::cloud::managedidentities::v1::ResetAdminPasswordRequest const&
          request) override;

  StatusOr<google::cloud::managedidentities::v1::ListDomainsResponse>
  ListDomains(grpc::ClientContext& context,
              google::cloud::managedidentities::v1::ListDomainsRequest const&
                  request) override;

  StatusOr<google::cloud::managedidentities::v1::Domain> GetDomain(
      grpc::ClientContext& context,
      google::cloud::managedidentities::v1::GetDomainRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateDomain(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::UpdateDomainRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteDomain(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::DeleteDomainRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncAttachTrust(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::AttachTrustRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncReconfigureTrust(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::ReconfigureTrustRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDetachTrust(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::DetachTrustRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncValidateTrust(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::cloud::managedidentities::v1::ValidateTrustRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::unique_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ManagedIdentitiesServiceStub> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace managedidentities_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_MANAGEDIDENTITIES_INTERNAL_MANAGED_IDENTITIES_TRACING_STUB_H
