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
// source: google/cloud/retail/v2/product_service.proto

#include "google/cloud/retail/internal/product_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include "google/cloud/options.h"

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ProductServiceTracingStub::ProductServiceTracingStub(
    std::shared_ptr<ProductServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingStub::CreateProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::CreateProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ProductService",
                                     "CreateProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateProduct(context, request));
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingStub::GetProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ProductService",
                                     "GetProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetProduct(context, request));
}

StatusOr<google::cloud::retail::v2::ListProductsResponse>
ProductServiceTracingStub::ListProducts(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListProductsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ProductService",
                                     "ListProducts");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListProducts(context, request));
}

StatusOr<google::cloud::retail::v2::Product>
ProductServiceTracingStub::UpdateProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ProductService",
                                     "UpdateProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateProduct(context, request));
}

Status ProductServiceTracingStub::DeleteProduct(
    grpc::ClientContext& context,
    google::cloud::retail::v2::DeleteProductRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.ProductService",
                                     "DeleteProduct");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteProduct(context, request));
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncImportProducts(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::ImportProductsRequest const& request) {
  return child_->AsyncImportProducts(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncSetInventory(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::SetInventoryRequest const& request) {
  return child_->AsyncSetInventory(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncAddFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::AddFulfillmentPlacesRequest const& request) {
  return child_->AsyncAddFulfillmentPlaces(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncRemoveFulfillmentPlaces(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::RemoveFulfillmentPlacesRequest const& request) {
  return child_->AsyncRemoveFulfillmentPlaces(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncAddLocalInventories(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::AddLocalInventoriesRequest const& request) {
  return child_->AsyncAddLocalInventories(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncRemoveLocalInventories(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::retail::v2::RemoveLocalInventoriesRequest const& request) {
  return child_->AsyncRemoveLocalInventories(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
ProductServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> ProductServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
