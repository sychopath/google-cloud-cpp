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
// source: google/spanner/admin/instance/v1/spanner_instance_admin.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_REST_CONNECTION_IMPL_H

#include "google/cloud/spanner/admin/instance_admin_connection.h"
#include "google/cloud/spanner/admin/instance_admin_connection_idempotency_policy.h"
#include "google/cloud/spanner/admin/instance_admin_options.h"
#include "google/cloud/spanner/admin/internal/instance_admin_rest_stub.h"
#include "google/cloud/spanner/admin/internal/instance_admin_retry_traits.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class InstanceAdminRestConnectionImpl
    : public spanner_admin::InstanceAdminConnection {
 public:
  ~InstanceAdminRestConnectionImpl() override = default;

  InstanceAdminRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<spanner_admin_internal::InstanceAdminRestStub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::spanner::admin::instance::v1::InstanceConfig>
  ListInstanceConfigs(
      google::spanner::admin::instance::v1::ListInstanceConfigsRequest request)
      override;

  StatusOr<google::spanner::admin::instance::v1::InstanceConfig>
  GetInstanceConfig(
      google::spanner::admin::instance::v1::GetInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  CreateInstanceConfig(
      google::spanner::admin::instance::v1::CreateInstanceConfigRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::InstanceConfig>>
  UpdateInstanceConfig(
      google::spanner::admin::instance::v1::UpdateInstanceConfigRequest const&
          request) override;

  Status DeleteInstanceConfig(
      google::spanner::admin::instance::v1::DeleteInstanceConfigRequest const&
          request) override;

  StreamRange<google::longrunning::Operation> ListInstanceConfigOperations(
      google::spanner::admin::instance::v1::ListInstanceConfigOperationsRequest
          request) override;

  StreamRange<google::spanner::admin::instance::v1::Instance> ListInstances(
      google::spanner::admin::instance::v1::ListInstancesRequest request)
      override;

  StatusOr<google::spanner::admin::instance::v1::Instance> GetInstance(
      google::spanner::admin::instance::v1::GetInstanceRequest const& request)
      override;

  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  CreateInstance(
      google::spanner::admin::instance::v1::CreateInstanceRequest const&
          request) override;

  future<StatusOr<google::spanner::admin::instance::v1::Instance>>
  UpdateInstance(
      google::spanner::admin::instance::v1::UpdateInstanceRequest const&
          request) override;

  Status DeleteInstance(
      google::spanner::admin::instance::v1::DeleteInstanceRequest const&
          request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override;

 private:
  std::unique_ptr<spanner_admin::InstanceAdminRetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<spanner_admin::InstanceAdminRetryPolicyOption>()) {
      return options.get<spanner_admin::InstanceAdminRetryPolicyOption>()
          ->clone();
    }
    return options_.get<spanner_admin::InstanceAdminRetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<spanner_admin::InstanceAdminBackoffPolicyOption>()) {
      return options.get<spanner_admin::InstanceAdminBackoffPolicyOption>()
          ->clone();
    }
    return options_.get<spanner_admin::InstanceAdminBackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<spanner_admin::InstanceAdminConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            spanner_admin::InstanceAdminConnectionIdempotencyPolicyOption>()) {
      return options
          .get<spanner_admin::InstanceAdminConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<spanner_admin::InstanceAdminConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<spanner_admin::InstanceAdminPollingPolicyOption>()) {
      return options.get<spanner_admin::InstanceAdminPollingPolicyOption>()
          ->clone();
    }
    return options_.get<spanner_admin::InstanceAdminPollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<spanner_admin_internal::InstanceAdminRestStub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SPANNER_ADMIN_INTERNAL_INSTANCE_ADMIN_REST_CONNECTION_IMPL_H
