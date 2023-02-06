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
// source: google/cloud/connectors/v1/connectors_service.proto

#include "google/cloud/connectors/internal/connectors_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace connectors_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConnectorsTracingStub::ConnectorsTracingStub(
    std::shared_ptr<ConnectorsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::connectors::v1::ListConnectionsResponse>
ConnectorsTracingStub::ListConnections(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "ListConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListConnections(context, request));
}

StatusOr<google::cloud::connectors::v1::Connection>
ConnectorsTracingStub::GetConnection(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "GetConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetConnection(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsTracingStub::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::CreateConnectionRequest const& request) {
  return child_->AsyncCreateConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsTracingStub::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::UpdateConnectionRequest const& request) {
  return child_->AsyncUpdateConnection(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsTracingStub::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::connectors::v1::DeleteConnectionRequest const& request) {
  return child_->AsyncDeleteConnection(cq, std::move(context), request);
}

StatusOr<google::cloud::connectors::v1::ListProvidersResponse>
ConnectorsTracingStub::ListProviders(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListProvidersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "ListProviders");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProviders(context, request));
}

StatusOr<google::cloud::connectors::v1::Provider>
ConnectorsTracingStub::GetProvider(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetProviderRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "GetProvider");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProvider(context, request));
}

StatusOr<google::cloud::connectors::v1::ListConnectorsResponse>
ConnectorsTracingStub::ListConnectors(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectorsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "ListConnectors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListConnectors(context, request));
}

StatusOr<google::cloud::connectors::v1::Connector>
ConnectorsTracingStub::GetConnector(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "GetConnector");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetConnector(context, request));
}

StatusOr<google::cloud::connectors::v1::ListConnectorVersionsResponse>
ConnectorsTracingStub::ListConnectorVersions(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListConnectorVersionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "ListConnectorVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListConnectorVersions(context, request));
}

StatusOr<google::cloud::connectors::v1::ConnectorVersion>
ConnectorsTracingStub::GetConnectorVersion(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectorVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "GetConnectorVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetConnectorVersion(context, request));
}

StatusOr<google::cloud::connectors::v1::ConnectionSchemaMetadata>
ConnectorsTracingStub::GetConnectionSchemaMetadata(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetConnectionSchemaMetadataRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "GetConnectionSchemaMetadata");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->GetConnectionSchemaMetadata(context, request));
}

StatusOr<google::cloud::connectors::v1::ListRuntimeEntitySchemasResponse>
ConnectorsTracingStub::ListRuntimeEntitySchemas(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListRuntimeEntitySchemasRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "ListRuntimeEntitySchemas");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListRuntimeEntitySchemas(context, request));
}

StatusOr<google::cloud::connectors::v1::ListRuntimeActionSchemasResponse>
ConnectorsTracingStub::ListRuntimeActionSchemas(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::ListRuntimeActionSchemasRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "ListRuntimeActionSchemas");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListRuntimeActionSchemas(context, request));
}

StatusOr<google::cloud::connectors::v1::RuntimeConfig>
ConnectorsTracingStub::GetRuntimeConfig(
    grpc::ClientContext& context,
    google::cloud::connectors::v1::GetRuntimeConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.connectors.v1.Connectors",
                                     "GetRuntimeConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetRuntimeConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ConnectorsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ConnectorsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace connectors_internal
}  // namespace cloud
}  // namespace google
