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
// source: google/cloud/resourcemanager/v3/organizations.proto

#include "google/cloud/resourcemanager/internal/organizations_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

OrganizationsTracingStub::OrganizationsTracingStub(
    std::shared_ptr<OrganizationsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::resourcemanager::v3::Organization>
OrganizationsTracingStub::GetOrganization(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::GetOrganizationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.Organizations", "GetOrganization");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetOrganization(context, request));
}

StatusOr<google::cloud::resourcemanager::v3::SearchOrganizationsResponse>
OrganizationsTracingStub::SearchOrganizations(
    grpc::ClientContext& context,
    google::cloud::resourcemanager::v3::SearchOrganizationsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.Organizations", "SearchOrganizations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SearchOrganizations(context, request));
}

StatusOr<google::iam::v1::Policy> OrganizationsTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.Organizations", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy> OrganizationsTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.Organizations", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
OrganizationsTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.resourcemanager.v3.Organizations", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google
