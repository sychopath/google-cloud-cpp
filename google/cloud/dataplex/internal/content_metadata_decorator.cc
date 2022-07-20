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
// source: google/cloud/dataplex/v1/content.proto

#include "google/cloud/dataplex/internal/content_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/content.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dataplex_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ContentServiceMetadata::ContentServiceMetadata(
    std::shared_ptr<ContentServiceStub> child)
    : child_(std::move(child)),
      api_client_header_(
          google::cloud::internal::ApiClientHeader("generator")) {}

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceMetadata::CreateContent(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::CreateContentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->CreateContent(context, request);
}

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceMetadata::UpdateContent(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::UpdateContentRequest const& request) {
  SetMetadata(context, "content.name=" + request.content().name());
  return child_->UpdateContent(context, request);
}

Status ContentServiceMetadata::DeleteContent(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::DeleteContentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->DeleteContent(context, request);
}

StatusOr<google::cloud::dataplex::v1::Content>
ContentServiceMetadata::GetContent(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::GetContentRequest const& request) {
  SetMetadata(context, "name=" + request.name());
  return child_->GetContent(context, request);
}

StatusOr<google::iam::v1::Policy> ContentServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->GetIamPolicy(context, request);
}

StatusOr<google::iam::v1::Policy> ContentServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->SetIamPolicy(context, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ContentServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(context, "resource=" + request.resource());
  return child_->TestIamPermissions(context, request);
}

StatusOr<google::cloud::dataplex::v1::ListContentResponse>
ContentServiceMetadata::ListContent(
    grpc::ClientContext& context,
    google::cloud::dataplex::v1::ListContentRequest const& request) {
  SetMetadata(context, "parent=" + request.parent());
  return child_->ListContent(context, request);
}

void ContentServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                         std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void ContentServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_internal
}  // namespace cloud
}  // namespace google
