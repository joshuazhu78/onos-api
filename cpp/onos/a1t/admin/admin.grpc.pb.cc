// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: onos/a1t/admin/admin.proto

#include "onos/a1t/admin/admin.pb.h"
#include "onos/a1t/admin/admin.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace onos {
namespace a1t {
namespace admin {

static const char* A1TAdminService_method_names[] = {
  "/onos.a1t.admin.A1TAdminService/GetXAppConnections",
  "/onos.a1t.admin.A1TAdminService/GetPolicyTypeObject",
  "/onos.a1t.admin.A1TAdminService/GetPolicyObject",
  "/onos.a1t.admin.A1TAdminService/GetPolicyObjectStatus",
};

std::unique_ptr< A1TAdminService::Stub> A1TAdminService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< A1TAdminService::Stub> stub(new A1TAdminService::Stub(channel, options));
  return stub;
}

A1TAdminService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetXAppConnections_(A1TAdminService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetPolicyTypeObject_(A1TAdminService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetPolicyObject_(A1TAdminService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetPolicyObjectStatus_(A1TAdminService_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::onos::a1t::admin::GetXAppConnectionResponse>* A1TAdminService::Stub::GetXAppConnectionsRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetXAppConnectionsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::onos::a1t::admin::GetXAppConnectionResponse>::Create(channel_.get(), rpcmethod_GetXAppConnections_, context, request);
}

void A1TAdminService::Stub::async::GetXAppConnections(::grpc::ClientContext* context, const ::onos::a1t::admin::GetXAppConnectionsRequest* request, ::grpc::ClientReadReactor< ::onos::a1t::admin::GetXAppConnectionResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::onos::a1t::admin::GetXAppConnectionResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetXAppConnections_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetXAppConnectionResponse>* A1TAdminService::Stub::AsyncGetXAppConnectionsRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetXAppConnectionsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetXAppConnectionResponse>::Create(channel_.get(), cq, rpcmethod_GetXAppConnections_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetXAppConnectionResponse>* A1TAdminService::Stub::PrepareAsyncGetXAppConnectionsRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetXAppConnectionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetXAppConnectionResponse>::Create(channel_.get(), cq, rpcmethod_GetXAppConnections_, context, request, false, nullptr);
}

::grpc::ClientReader< ::onos::a1t::admin::GetPolicyTypeObjectResponse>* A1TAdminService::Stub::GetPolicyTypeObjectRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyTypeObjectRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::onos::a1t::admin::GetPolicyTypeObjectResponse>::Create(channel_.get(), rpcmethod_GetPolicyTypeObject_, context, request);
}

void A1TAdminService::Stub::async::GetPolicyTypeObject(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyTypeObjectRequest* request, ::grpc::ClientReadReactor< ::onos::a1t::admin::GetPolicyTypeObjectResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::onos::a1t::admin::GetPolicyTypeObjectResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetPolicyTypeObject_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetPolicyTypeObjectResponse>* A1TAdminService::Stub::AsyncGetPolicyTypeObjectRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyTypeObjectRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetPolicyTypeObjectResponse>::Create(channel_.get(), cq, rpcmethod_GetPolicyTypeObject_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetPolicyTypeObjectResponse>* A1TAdminService::Stub::PrepareAsyncGetPolicyTypeObjectRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyTypeObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetPolicyTypeObjectResponse>::Create(channel_.get(), cq, rpcmethod_GetPolicyTypeObject_, context, request, false, nullptr);
}

::grpc::ClientReader< ::onos::a1t::admin::GetPolicyObjectResponse>* A1TAdminService::Stub::GetPolicyObjectRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::onos::a1t::admin::GetPolicyObjectResponse>::Create(channel_.get(), rpcmethod_GetPolicyObject_, context, request);
}

void A1TAdminService::Stub::async::GetPolicyObject(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectRequest* request, ::grpc::ClientReadReactor< ::onos::a1t::admin::GetPolicyObjectResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::onos::a1t::admin::GetPolicyObjectResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetPolicyObject_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetPolicyObjectResponse>* A1TAdminService::Stub::AsyncGetPolicyObjectRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetPolicyObjectResponse>::Create(channel_.get(), cq, rpcmethod_GetPolicyObject_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetPolicyObjectResponse>* A1TAdminService::Stub::PrepareAsyncGetPolicyObjectRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetPolicyObjectResponse>::Create(channel_.get(), cq, rpcmethod_GetPolicyObject_, context, request, false, nullptr);
}

::grpc::ClientReader< ::onos::a1t::admin::GetPolicyObjectStatusResponse>* A1TAdminService::Stub::GetPolicyObjectStatusRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectStatusRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::onos::a1t::admin::GetPolicyObjectStatusResponse>::Create(channel_.get(), rpcmethod_GetPolicyObjectStatus_, context, request);
}

void A1TAdminService::Stub::async::GetPolicyObjectStatus(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectStatusRequest* request, ::grpc::ClientReadReactor< ::onos::a1t::admin::GetPolicyObjectStatusResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::onos::a1t::admin::GetPolicyObjectStatusResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_GetPolicyObjectStatus_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetPolicyObjectStatusResponse>* A1TAdminService::Stub::AsyncGetPolicyObjectStatusRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectStatusRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetPolicyObjectStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetPolicyObjectStatus_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::onos::a1t::admin::GetPolicyObjectStatusResponse>* A1TAdminService::Stub::PrepareAsyncGetPolicyObjectStatusRaw(::grpc::ClientContext* context, const ::onos::a1t::admin::GetPolicyObjectStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::onos::a1t::admin::GetPolicyObjectStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetPolicyObjectStatus_, context, request, false, nullptr);
}

A1TAdminService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      A1TAdminService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< A1TAdminService::Service, ::onos::a1t::admin::GetXAppConnectionsRequest, ::onos::a1t::admin::GetXAppConnectionResponse>(
          [](A1TAdminService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::a1t::admin::GetXAppConnectionsRequest* req,
             ::grpc::ServerWriter<::onos::a1t::admin::GetXAppConnectionResponse>* writer) {
               return service->GetXAppConnections(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      A1TAdminService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< A1TAdminService::Service, ::onos::a1t::admin::GetPolicyTypeObjectRequest, ::onos::a1t::admin::GetPolicyTypeObjectResponse>(
          [](A1TAdminService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::a1t::admin::GetPolicyTypeObjectRequest* req,
             ::grpc::ServerWriter<::onos::a1t::admin::GetPolicyTypeObjectResponse>* writer) {
               return service->GetPolicyTypeObject(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      A1TAdminService_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< A1TAdminService::Service, ::onos::a1t::admin::GetPolicyObjectRequest, ::onos::a1t::admin::GetPolicyObjectResponse>(
          [](A1TAdminService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::a1t::admin::GetPolicyObjectRequest* req,
             ::grpc::ServerWriter<::onos::a1t::admin::GetPolicyObjectResponse>* writer) {
               return service->GetPolicyObject(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      A1TAdminService_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< A1TAdminService::Service, ::onos::a1t::admin::GetPolicyObjectStatusRequest, ::onos::a1t::admin::GetPolicyObjectStatusResponse>(
          [](A1TAdminService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::a1t::admin::GetPolicyObjectStatusRequest* req,
             ::grpc::ServerWriter<::onos::a1t::admin::GetPolicyObjectStatusResponse>* writer) {
               return service->GetPolicyObjectStatus(ctx, req, writer);
             }, this)));
}

A1TAdminService::Service::~Service() {
}

::grpc::Status A1TAdminService::Service::GetXAppConnections(::grpc::ServerContext* context, const ::onos::a1t::admin::GetXAppConnectionsRequest* request, ::grpc::ServerWriter< ::onos::a1t::admin::GetXAppConnectionResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status A1TAdminService::Service::GetPolicyTypeObject(::grpc::ServerContext* context, const ::onos::a1t::admin::GetPolicyTypeObjectRequest* request, ::grpc::ServerWriter< ::onos::a1t::admin::GetPolicyTypeObjectResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status A1TAdminService::Service::GetPolicyObject(::grpc::ServerContext* context, const ::onos::a1t::admin::GetPolicyObjectRequest* request, ::grpc::ServerWriter< ::onos::a1t::admin::GetPolicyObjectResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status A1TAdminService::Service::GetPolicyObjectStatus(::grpc::ServerContext* context, const ::onos::a1t::admin::GetPolicyObjectStatusRequest* request, ::grpc::ServerWriter< ::onos::a1t::admin::GetPolicyObjectStatusResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace onos
}  // namespace a1t
}  // namespace admin

