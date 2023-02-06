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
// source: grafeas/v1/grafeas.proto

#include "google/cloud/containeranalysis/internal/grafeas_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace containeranalysis_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GrafeasTracingStub::GrafeasTracingStub(std::shared_ptr<GrafeasStub> child)
    : child_(std::move(child)) {}

StatusOr<grafeas::v1::Occurrence> GrafeasTracingStub::GetOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::GetOccurrenceRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "GetOccurrence");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetOccurrence(context, request));
}

StatusOr<grafeas::v1::ListOccurrencesResponse>
GrafeasTracingStub::ListOccurrences(
    grpc::ClientContext& context,
    grafeas::v1::ListOccurrencesRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "ListOccurrences");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListOccurrences(context, request));
}

Status GrafeasTracingStub::DeleteOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::DeleteOccurrenceRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "DeleteOccurrence");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteOccurrence(context, request));
}

StatusOr<grafeas::v1::Occurrence> GrafeasTracingStub::CreateOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::CreateOccurrenceRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "CreateOccurrence");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateOccurrence(context, request));
}

StatusOr<grafeas::v1::BatchCreateOccurrencesResponse>
GrafeasTracingStub::BatchCreateOccurrences(
    grpc::ClientContext& context,
    grafeas::v1::BatchCreateOccurrencesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("grafeas.v1.Grafeas", "BatchCreateOccurrences");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->BatchCreateOccurrences(context, request));
}

StatusOr<grafeas::v1::Occurrence> GrafeasTracingStub::UpdateOccurrence(
    grpc::ClientContext& context,
    grafeas::v1::UpdateOccurrenceRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "UpdateOccurrence");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateOccurrence(context, request));
}

StatusOr<grafeas::v1::Note> GrafeasTracingStub::GetOccurrenceNote(
    grpc::ClientContext& context,
    grafeas::v1::GetOccurrenceNoteRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "GetOccurrenceNote");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetOccurrenceNote(context, request));
}

StatusOr<grafeas::v1::Note> GrafeasTracingStub::GetNote(
    grpc::ClientContext& context, grafeas::v1::GetNoteRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "GetNote");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetNote(context, request));
}

StatusOr<grafeas::v1::ListNotesResponse> GrafeasTracingStub::ListNotes(
    grpc::ClientContext& context,
    grafeas::v1::ListNotesRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "ListNotes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->ListNotes(context, request));
}

Status GrafeasTracingStub::DeleteNote(
    grpc::ClientContext& context,
    grafeas::v1::DeleteNoteRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "DeleteNote");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteNote(context, request));
}

StatusOr<grafeas::v1::Note> GrafeasTracingStub::CreateNote(
    grpc::ClientContext& context,
    grafeas::v1::CreateNoteRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "CreateNote");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateNote(context, request));
}

StatusOr<grafeas::v1::BatchCreateNotesResponse>
GrafeasTracingStub::BatchCreateNotes(
    grpc::ClientContext& context,
    grafeas::v1::BatchCreateNotesRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "BatchCreateNotes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->BatchCreateNotes(context, request));
}

StatusOr<grafeas::v1::Note> GrafeasTracingStub::UpdateNote(
    grpc::ClientContext& context,
    grafeas::v1::UpdateNoteRequest const& request) {
  auto span = internal::MakeSpanGrpc("grafeas.v1.Grafeas", "UpdateNote");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateNote(context, request));
}

StatusOr<grafeas::v1::ListNoteOccurrencesResponse>
GrafeasTracingStub::ListNoteOccurrences(
    grpc::ClientContext& context,
    grafeas::v1::ListNoteOccurrencesRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("grafeas.v1.Grafeas", "ListNoteOccurrences");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListNoteOccurrences(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_internal
}  // namespace cloud
}  // namespace google
