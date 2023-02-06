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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/internal/document_processor_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace documentai_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentProcessorServiceTracingStub::DocumentProcessorServiceTracingStub(
    std::shared_ptr<DocumentProcessorServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceTracingStub::ProcessDocument(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ProcessRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService", "ProcessDocument");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ProcessDocument(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncBatchProcessDocuments(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  return child_->AsyncBatchProcessDocuments(cq, std::move(context), request);
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceTracingStub::FetchProcessorTypes(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService",
      "FetchProcessorTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->FetchProcessorTypes(context, request));
}

StatusOr<google::cloud::documentai::v1::ListProcessorTypesResponse>
DocumentProcessorServiceTracingStub::ListProcessorTypes(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ListProcessorTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService",
      "ListProcessorTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProcessorTypes(context, request));
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceTracingStub::GetProcessorType(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService",
      "GetProcessorType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProcessorType(context, request));
}

StatusOr<google::cloud::documentai::v1::ListProcessorsResponse>
DocumentProcessorServiceTracingStub::ListProcessors(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ListProcessorsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService", "ListProcessors");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProcessors(context, request));
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingStub::GetProcessor(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService", "GetProcessor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProcessor(context, request));
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceTracingStub::GetProcessorVersion(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService",
      "GetProcessorVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProcessorVersion(context, request));
}

StatusOr<google::cloud::documentai::v1::ListProcessorVersionsResponse>
DocumentProcessorServiceTracingStub::ListProcessorVersions(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::ListProcessorVersionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService",
      "ListProcessorVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProcessorVersions(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncDeleteProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  return child_->AsyncDeleteProcessorVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncDeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  return child_->AsyncDeployProcessorVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncUndeployProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  return child_->AsyncUndeployProcessorVersion(cq, std::move(context), request);
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingStub::CreateProcessor(
    grpc::ClientContext& context,
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.documentai.v1.DocumentProcessorService", "CreateProcessor");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateProcessor(context, request));
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncDeleteProcessor(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  return child_->AsyncDeleteProcessor(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncEnableProcessor(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  return child_->AsyncEnableProcessor(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncDisableProcessor(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  return child_->AsyncDisableProcessor(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncSetDefaultProcessorVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  return child_->AsyncSetDefaultProcessorVersion(cq, std::move(context),
                                                 request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncReviewDocument(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  return child_->AsyncReviewDocument(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
DocumentProcessorServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> DocumentProcessorServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_internal
}  // namespace cloud
}  // namespace google
