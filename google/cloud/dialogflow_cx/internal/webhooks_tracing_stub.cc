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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#include "google/cloud/dialogflow_cx/internal/webhooks_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

WebhooksTracingStub::WebhooksTracingStub(std::shared_ptr<WebhooksStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListWebhooksResponse>
WebhooksTracingStub::ListWebhooks(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::ListWebhooksRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Webhooks",
                                     "ListWebhooks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListWebhooks(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingStub::GetWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Webhooks",
                                     "GetWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetWebhook(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingStub::CreateWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Webhooks",
                                     "CreateWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateWebhook(context, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksTracingStub::UpdateWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Webhooks",
                                     "UpdateWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateWebhook(context, request));
}

Status WebhooksTracingStub::DeleteWebhook(
    grpc::ClientContext& context,
    google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Webhooks",
                                     "DeleteWebhook");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteWebhook(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
