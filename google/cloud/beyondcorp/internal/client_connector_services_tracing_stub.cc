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
// source:
// google/cloud/beyondcorp/clientconnectorservices/v1/client_connector_services_service.proto

#include "google/cloud/beyondcorp/internal/client_connector_services_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace beyondcorp_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ClientConnectorServicesServiceTracingStub::
    ClientConnectorServicesServiceTracingStub(
        std::shared_ptr<ClientConnectorServicesServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ListClientConnectorServicesResponse>
ClientConnectorServicesServiceTracingStub::ListClientConnectorServices(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        ListClientConnectorServicesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.clientconnectorservices.v1."
      "ClientConnectorServicesService",
      "ListClientConnectorServices");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span, child_->ListClientConnectorServices(context, request));
}

StatusOr<google::cloud::beyondcorp::clientconnectorservices::v1::
             ClientConnectorService>
ClientConnectorServicesServiceTracingStub::GetClientConnectorService(
    grpc::ClientContext& context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        GetClientConnectorServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.beyondcorp.clientconnectorservices.v1."
      "ClientConnectorServicesService",
      "GetClientConnectorService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetClientConnectorService(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceTracingStub::AsyncCreateClientConnectorService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        CreateClientConnectorServiceRequest const& request) {
  return child_->AsyncCreateClientConnectorService(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceTracingStub::AsyncUpdateClientConnectorService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        UpdateClientConnectorServiceRequest const& request) {
  return child_->AsyncUpdateClientConnectorService(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceTracingStub::AsyncDeleteClientConnectorService(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::beyondcorp::clientconnectorservices::v1::
        DeleteClientConnectorServiceRequest const& request) {
  return child_->AsyncDeleteClientConnectorService(cq, std::move(context),
                                                   request);
}

future<StatusOr<google::longrunning::Operation>>
ClientConnectorServicesServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ClientConnectorServicesServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_internal
}  // namespace cloud
}  // namespace google
