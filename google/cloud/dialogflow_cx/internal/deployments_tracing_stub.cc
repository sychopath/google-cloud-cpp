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
// source: google/cloud/dialogflow/cx/v3/deployment.proto

#include "google/cloud/dialogflow_cx/internal/deployments_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DeploymentsTracingStub::DeploymentsTracingStub(
    std::shared_ptr<DeploymentsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListDeploymentsResponse>
DeploymentsTracingStub::ListDeployments(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListDeploymentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Deployments", "ListDeployments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListDeployments(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Deployment>
DeploymentsTracingStub::GetDeployment(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetDeploymentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Deployments", "GetDeployment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetDeployment(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
