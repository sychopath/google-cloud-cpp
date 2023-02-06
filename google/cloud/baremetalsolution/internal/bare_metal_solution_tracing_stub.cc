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
// source: google/cloud/baremetalsolution/v2/baremetalsolution.proto

#include "google/cloud/baremetalsolution/internal/bare_metal_solution_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace baremetalsolution_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

BareMetalSolutionTracingStub::BareMetalSolutionTracingStub(
    std::shared_ptr<BareMetalSolutionStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::baremetalsolution::v2::ListInstancesResponse>
BareMetalSolutionTracingStub::ListInstances(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListInstancesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "ListInstances");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListInstances(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::Instance>
BareMetalSolutionTracingStub::GetInstance(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetInstanceRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "GetInstance");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetInstance(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncUpdateInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateInstanceRequest const&
        request) {
  return child_->AsyncUpdateInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncResetInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::ResetInstanceRequest const& request) {
  return child_->AsyncResetInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncStartInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::StartInstanceRequest const& request) {
  return child_->AsyncStartInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncStopInstance(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::StopInstanceRequest const& request) {
  return child_->AsyncStopInstance(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncDetachLun(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::DetachLunRequest const& request) {
  return child_->AsyncDetachLun(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListVolumesResponse>
BareMetalSolutionTracingStub::ListVolumes(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListVolumesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "ListVolumes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListVolumes(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::Volume>
BareMetalSolutionTracingStub::GetVolume(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetVolumeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "GetVolume");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetVolume(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncUpdateVolume(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateVolumeRequest const& request) {
  return child_->AsyncUpdateVolume(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncResizeVolume(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::ResizeVolumeRequest const& request) {
  return child_->AsyncResizeVolume(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworksResponse>
BareMetalSolutionTracingStub::ListNetworks(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworksRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "ListNetworks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNetworks(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::ListNetworkUsageResponse>
BareMetalSolutionTracingStub::ListNetworkUsage(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNetworkUsageRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution",
      "ListNetworkUsage");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNetworkUsage(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::Network>
BareMetalSolutionTracingStub::GetNetwork(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "GetNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetNetwork(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncUpdateNetwork(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateNetworkRequest const& request) {
  return child_->AsyncUpdateNetwork(cq, std::move(context), request);
}

StatusOr<google::cloud::baremetalsolution::v2::Lun>
BareMetalSolutionTracingStub::GetLun(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetLunRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "GetLun");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetLun(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::ListLunsResponse>
BareMetalSolutionTracingStub::ListLuns(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListLunsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "ListLuns");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListLuns(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::NfsShare>
BareMetalSolutionTracingStub::GetNfsShare(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::GetNfsShareRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "GetNfsShare");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetNfsShare(context, request));
}

StatusOr<google::cloud::baremetalsolution::v2::ListNfsSharesResponse>
BareMetalSolutionTracingStub::ListNfsShares(
    grpc::ClientContext& context,
    google::cloud::baremetalsolution::v2::ListNfsSharesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.baremetalsolution.v2.BareMetalSolution", "ListNfsShares");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNfsShares(context, request));
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncUpdateNfsShare(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::baremetalsolution::v2::UpdateNfsShareRequest const&
        request) {
  return child_->AsyncUpdateNfsShare(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
BareMetalSolutionTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> BareMetalSolutionTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace baremetalsolution_internal
}  // namespace cloud
}  // namespace google
