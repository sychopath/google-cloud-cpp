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
// source: google/cloud/speech/v2/cloud_speech.proto

#include "google/cloud/speech/v2/internal/speech_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace speech_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SpeechTracingStub::SpeechTracingStub(std::shared_ptr<SpeechStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncCreateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::CreateRecognizerRequest const& request) {
  return child_->AsyncCreateRecognizer(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::ListRecognizersResponse>
SpeechTracingStub::ListRecognizers(
    grpc::ClientContext& context,
    google::cloud::speech::v2::ListRecognizersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.speech.v2.Speech",
                                     "ListRecognizers");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListRecognizers(context, request));
}

StatusOr<google::cloud::speech::v2::Recognizer>
SpeechTracingStub::GetRecognizer(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetRecognizerRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "GetRecognizer");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetRecognizer(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncUpdateRecognizer(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UpdateRecognizerRequest const& request) {
  return child_->AsyncUpdateRecognizer(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncDeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::DeleteRecognizerRequest const& request) {
  return child_->AsyncDeleteRecognizer(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncUndeleteRecognizer(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UndeleteRecognizerRequest const& request) {
  return child_->AsyncUndeleteRecognizer(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::RecognizeResponse>
SpeechTracingStub::Recognize(
    grpc::ClientContext& context,
    google::cloud::speech::v2::RecognizeRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "Recognize");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->Recognize(context, request));
}

std::unique_ptr<::google::cloud::AsyncStreamingReadWriteRpc<
    google::cloud::speech::v2::StreamingRecognizeRequest,
    google::cloud::speech::v2::StreamingRecognizeResponse>>
SpeechTracingStub::AsyncStreamingRecognize(
    google::cloud::CompletionQueue const& cq,
    std::unique_ptr<grpc::ClientContext> context) {
  return child_->AsyncStreamingRecognize(cq, std::move(context));
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncBatchRecognize(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::BatchRecognizeRequest const& request) {
  return child_->AsyncBatchRecognize(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::Config> SpeechTracingStub::GetConfig(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "GetConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetConfig(context, request));
}

StatusOr<google::cloud::speech::v2::Config> SpeechTracingStub::UpdateConfig(
    grpc::ClientContext& context,
    google::cloud::speech::v2::UpdateConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "UpdateConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateConfig(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncCreateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::CreateCustomClassRequest const& request) {
  return child_->AsyncCreateCustomClass(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::ListCustomClassesResponse>
SpeechTracingStub::ListCustomClasses(
    grpc::ClientContext& context,
    google::cloud::speech::v2::ListCustomClassesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.speech.v2.Speech",
                                     "ListCustomClasses");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListCustomClasses(context, request));
}

StatusOr<google::cloud::speech::v2::CustomClass>
SpeechTracingStub::GetCustomClass(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetCustomClassRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "GetCustomClass");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetCustomClass(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncUpdateCustomClass(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UpdateCustomClassRequest const& request) {
  return child_->AsyncUpdateCustomClass(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncDeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::DeleteCustomClassRequest const& request) {
  return child_->AsyncDeleteCustomClass(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncUndeleteCustomClass(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UndeleteCustomClassRequest const& request) {
  return child_->AsyncUndeleteCustomClass(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncCreatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::CreatePhraseSetRequest const& request) {
  return child_->AsyncCreatePhraseSet(cq, std::move(context), request);
}

StatusOr<google::cloud::speech::v2::ListPhraseSetsResponse>
SpeechTracingStub::ListPhraseSets(
    grpc::ClientContext& context,
    google::cloud::speech::v2::ListPhraseSetsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "ListPhraseSets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListPhraseSets(context, request));
}

StatusOr<google::cloud::speech::v2::PhraseSet> SpeechTracingStub::GetPhraseSet(
    grpc::ClientContext& context,
    google::cloud::speech::v2::GetPhraseSetRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.speech.v2.Speech", "GetPhraseSet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetPhraseSet(context, request));
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncUpdatePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UpdatePhraseSetRequest const& request) {
  return child_->AsyncUpdatePhraseSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncDeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::DeletePhraseSetRequest const& request) {
  return child_->AsyncDeletePhraseSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncUndeletePhraseSet(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::speech::v2::UndeletePhraseSetRequest const& request) {
  return child_->AsyncUndeletePhraseSet(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
SpeechTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> SpeechTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace speech_v2_internal
}  // namespace cloud
}  // namespace google
