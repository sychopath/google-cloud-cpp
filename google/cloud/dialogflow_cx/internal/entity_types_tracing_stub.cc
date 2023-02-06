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
// source: google/cloud/dialogflow/cx/v3/entity_type.proto

#include "google/cloud/dialogflow_cx/internal/entity_types_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EntityTypesTracingStub::EntityTypesTracingStub(
    std::shared_ptr<EntityTypesStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListEntityTypesResponse>
EntityTypesTracingStub::ListEntityTypes(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListEntityTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.EntityTypes", "ListEntityTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEntityTypes(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesTracingStub::GetEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.EntityTypes", "GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetEntityType(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesTracingStub::CreateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.EntityTypes", "CreateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateEntityType(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::EntityType>
EntityTypesTracingStub::UpdateEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.EntityTypes", "UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateEntityType(context, request));
}

Status EntityTypesTracingStub::DeleteEntityType(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.EntityTypes", "DeleteEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteEntityType(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
