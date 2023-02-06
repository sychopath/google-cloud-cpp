// Copyright 2021 Google LLC
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
// source: google/cloud/pubsublite/v1/admin.proto

#include "google/cloud/pubsublite/internal/admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace pubsublite_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AdminServiceTracingStub::AdminServiceTracingStub(
    std::shared_ptr<AdminServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingStub::CreateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "CreateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateTopic(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingStub::GetTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetTopic(context, request));
}

StatusOr<google::cloud::pubsublite::v1::TopicPartitions>
AdminServiceTracingStub::GetTopicPartitions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetTopicPartitions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetTopicPartitions(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ListTopicsResponse>
AdminServiceTracingStub::ListTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListTopics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTopics(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Topic>
AdminServiceTracingStub::UpdateTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "UpdateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateTopic(context, request));
}

Status AdminServiceTracingStub::DeleteTopic(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "DeleteTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteTopic(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ListTopicSubscriptionsResponse>
AdminServiceTracingStub::ListTopicSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListTopicSubscriptionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListTopicSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListTopicSubscriptions(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingStub::CreateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "CreateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateSubscription(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingStub::GetSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetSubscription(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ListSubscriptionsResponse>
AdminServiceTracingStub::ListSubscriptions(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListSubscriptionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListSubscriptions(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Subscription>
AdminServiceTracingStub::UpdateSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "UpdateSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateSubscription(context, request));
}

Status AdminServiceTracingStub::DeleteSubscription(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "DeleteSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteSubscription(context, request));
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceTracingStub::AsyncSeekSubscription(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::SeekSubscriptionRequest const& request) {
  return child_->AsyncSeekSubscription(cq, std::move(context), request);
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingStub::CreateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::CreateReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "CreateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateReservation(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingStub::GetReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::GetReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "GetReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetReservation(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ListReservationsResponse>
AdminServiceTracingStub::ListReservations(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListReservations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListReservations(context, request));
}

StatusOr<google::cloud::pubsublite::v1::Reservation>
AdminServiceTracingStub::UpdateReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::UpdateReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "UpdateReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateReservation(context, request));
}

Status AdminServiceTracingStub::DeleteReservation(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::DeleteReservationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "DeleteReservation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteReservation(context, request));
}

StatusOr<google::cloud::pubsublite::v1::ListReservationTopicsResponse>
AdminServiceTracingStub::ListReservationTopics(
    grpc::ClientContext& context,
    google::cloud::pubsublite::v1::ListReservationTopicsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.pubsublite.v1.AdminService",
                                     "ListReservationTopics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListReservationTopics(context, request));
}

future<StatusOr<google::cloud::pubsublite::v1::TopicPartitions>>
AdminServiceTracingStub::AsyncGetTopicPartitions(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::pubsublite::v1::GetTopicPartitionsRequest const& request) {
  return child_->AsyncGetTopicPartitions(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
AdminServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> AdminServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsublite_internal
}  // namespace cloud
}  // namespace google
