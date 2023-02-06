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
// source: google/cloud/iap/v1/service.proto

#include "google/cloud/iap/internal/identity_aware_proxy_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace iap_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

IdentityAwareProxyAdminServiceTracingStub::
    IdentityAwareProxyAdminServiceTracingStub(
        std::shared_ptr<IdentityAwareProxyAdminServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, request));
}

StatusOr<google::iam::v1::Policy>
IdentityAwareProxyAdminServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
IdentityAwareProxyAdminServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->TestIamPermissions(context, request));
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceTracingStub::GetIapSettings(
    grpc::ClientContext& context,
    google::cloud::iap::v1::GetIapSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService", "GetIapSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetIapSettings(context, request));
}

StatusOr<google::cloud::iap::v1::IapSettings>
IdentityAwareProxyAdminServiceTracingStub::UpdateIapSettings(
    grpc::ClientContext& context,
    google::cloud::iap::v1::UpdateIapSettingsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "UpdateIapSettings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateIapSettings(context, request));
}

StatusOr<google::cloud::iap::v1::ListTunnelDestGroupsResponse>
IdentityAwareProxyAdminServiceTracingStub::ListTunnelDestGroups(
    grpc::ClientContext& context,
    google::cloud::iap::v1::ListTunnelDestGroupsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "ListTunnelDestGroups");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTunnelDestGroups(context, request));
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceTracingStub::CreateTunnelDestGroup(
    grpc::ClientContext& context,
    google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "CreateTunnelDestGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTunnelDestGroup(context, request));
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceTracingStub::GetTunnelDestGroup(
    grpc::ClientContext& context,
    google::cloud::iap::v1::GetTunnelDestGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "GetTunnelDestGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetTunnelDestGroup(context, request));
}

Status IdentityAwareProxyAdminServiceTracingStub::DeleteTunnelDestGroup(
    grpc::ClientContext& context,
    google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "DeleteTunnelDestGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTunnelDestGroup(context, request));
}

StatusOr<google::cloud::iap::v1::TunnelDestGroup>
IdentityAwareProxyAdminServiceTracingStub::UpdateTunnelDestGroup(
    grpc::ClientContext& context,
    google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.iap.v1.IdentityAwareProxyAdminService",
      "UpdateTunnelDestGroup");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateTunnelDestGroup(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_internal
}  // namespace cloud
}  // namespace google
