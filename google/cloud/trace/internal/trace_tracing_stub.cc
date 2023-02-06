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
// source: google/devtools/cloudtrace/v2/tracing.proto

#include "google/cloud/trace/internal/trace_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace trace_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TraceServiceTracingStub::TraceServiceTracingStub(
    std::shared_ptr<TraceServiceStub> child)
    : child_(std::move(child)) {}

Status TraceServiceTracingStub::BatchWriteSpans(
    grpc::ClientContext& context,
    google::devtools::cloudtrace::v2::BatchWriteSpansRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudtrace.v2.TraceService", "BatchWriteSpans");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->BatchWriteSpans(context, request));
}

StatusOr<google::devtools::cloudtrace::v2::Span>
TraceServiceTracingStub::CreateSpan(
    grpc::ClientContext& context,
    google::devtools::cloudtrace::v2::Span const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudtrace.v2.TraceService", "CreateSpan");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateSpan(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace trace_internal
}  // namespace cloud
}  // namespace google
