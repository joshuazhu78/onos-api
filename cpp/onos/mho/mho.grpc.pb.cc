// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: onos/mho/mho.proto

#include "onos/mho/mho.pb.h"
#include "onos/mho/mho.grpc.pb.h"

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
namespace mho {

static const char* mho_method_names[] = {
  "/onos.mho.mho/GetMhoParams",
  "/onos.mho.mho/SetMhoParams",
  "/onos.mho.mho/GetUes",
  "/onos.mho.mho/GetCells",
};

std::unique_ptr< mho::Stub> mho::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< mho::Stub> stub(new mho::Stub(channel, options));
  return stub;
}

mho::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetMhoParams_(mho_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetMhoParams_(mho_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetUes_(mho_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCells_(mho_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status mho::Stub::GetMhoParams(::grpc::ClientContext* context, const ::onos::mho::GetMhoParamRequest& request, ::onos::mho::GetMhoParamResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::onos::mho::GetMhoParamRequest, ::onos::mho::GetMhoParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetMhoParams_, context, request, response);
}

void mho::Stub::async::GetMhoParams(::grpc::ClientContext* context, const ::onos::mho::GetMhoParamRequest* request, ::onos::mho::GetMhoParamResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::onos::mho::GetMhoParamRequest, ::onos::mho::GetMhoParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMhoParams_, context, request, response, std::move(f));
}

void mho::Stub::async::GetMhoParams(::grpc::ClientContext* context, const ::onos::mho::GetMhoParamRequest* request, ::onos::mho::GetMhoParamResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetMhoParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::GetMhoParamResponse>* mho::Stub::PrepareAsyncGetMhoParamsRaw(::grpc::ClientContext* context, const ::onos::mho::GetMhoParamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::onos::mho::GetMhoParamResponse, ::onos::mho::GetMhoParamRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetMhoParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::GetMhoParamResponse>* mho::Stub::AsyncGetMhoParamsRaw(::grpc::ClientContext* context, const ::onos::mho::GetMhoParamRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetMhoParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status mho::Stub::SetMhoParams(::grpc::ClientContext* context, const ::onos::mho::SetMhoParamRequest& request, ::onos::mho::SetMhoParamResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::onos::mho::SetMhoParamRequest, ::onos::mho::SetMhoParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetMhoParams_, context, request, response);
}

void mho::Stub::async::SetMhoParams(::grpc::ClientContext* context, const ::onos::mho::SetMhoParamRequest* request, ::onos::mho::SetMhoParamResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::onos::mho::SetMhoParamRequest, ::onos::mho::SetMhoParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetMhoParams_, context, request, response, std::move(f));
}

void mho::Stub::async::SetMhoParams(::grpc::ClientContext* context, const ::onos::mho::SetMhoParamRequest* request, ::onos::mho::SetMhoParamResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetMhoParams_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::SetMhoParamResponse>* mho::Stub::PrepareAsyncSetMhoParamsRaw(::grpc::ClientContext* context, const ::onos::mho::SetMhoParamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::onos::mho::SetMhoParamResponse, ::onos::mho::SetMhoParamRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetMhoParams_, context, request);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::SetMhoParamResponse>* mho::Stub::AsyncSetMhoParamsRaw(::grpc::ClientContext* context, const ::onos::mho::SetMhoParamRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetMhoParamsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status mho::Stub::GetUes(::grpc::ClientContext* context, const ::onos::mho::GetRequest& request, ::onos::mho::UeList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::onos::mho::GetRequest, ::onos::mho::UeList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetUes_, context, request, response);
}

void mho::Stub::async::GetUes(::grpc::ClientContext* context, const ::onos::mho::GetRequest* request, ::onos::mho::UeList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::onos::mho::GetRequest, ::onos::mho::UeList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetUes_, context, request, response, std::move(f));
}

void mho::Stub::async::GetUes(::grpc::ClientContext* context, const ::onos::mho::GetRequest* request, ::onos::mho::UeList* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetUes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::UeList>* mho::Stub::PrepareAsyncGetUesRaw(::grpc::ClientContext* context, const ::onos::mho::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::onos::mho::UeList, ::onos::mho::GetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetUes_, context, request);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::UeList>* mho::Stub::AsyncGetUesRaw(::grpc::ClientContext* context, const ::onos::mho::GetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetUesRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status mho::Stub::GetCells(::grpc::ClientContext* context, const ::onos::mho::GetRequest& request, ::onos::mho::CellList* response) {
  return ::grpc::internal::BlockingUnaryCall< ::onos::mho::GetRequest, ::onos::mho::CellList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetCells_, context, request, response);
}

void mho::Stub::async::GetCells(::grpc::ClientContext* context, const ::onos::mho::GetRequest* request, ::onos::mho::CellList* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::onos::mho::GetRequest, ::onos::mho::CellList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetCells_, context, request, response, std::move(f));
}

void mho::Stub::async::GetCells(::grpc::ClientContext* context, const ::onos::mho::GetRequest* request, ::onos::mho::CellList* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetCells_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::CellList>* mho::Stub::PrepareAsyncGetCellsRaw(::grpc::ClientContext* context, const ::onos::mho::GetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::onos::mho::CellList, ::onos::mho::GetRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetCells_, context, request);
}

::grpc::ClientAsyncResponseReader< ::onos::mho::CellList>* mho::Stub::AsyncGetCellsRaw(::grpc::ClientContext* context, const ::onos::mho::GetRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetCellsRaw(context, request, cq);
  result->StartCall();
  return result;
}

mho::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      mho_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< mho::Service, ::onos::mho::GetMhoParamRequest, ::onos::mho::GetMhoParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](mho::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::mho::GetMhoParamRequest* req,
             ::onos::mho::GetMhoParamResponse* resp) {
               return service->GetMhoParams(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      mho_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< mho::Service, ::onos::mho::SetMhoParamRequest, ::onos::mho::SetMhoParamResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](mho::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::mho::SetMhoParamRequest* req,
             ::onos::mho::SetMhoParamResponse* resp) {
               return service->SetMhoParams(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      mho_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< mho::Service, ::onos::mho::GetRequest, ::onos::mho::UeList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](mho::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::mho::GetRequest* req,
             ::onos::mho::UeList* resp) {
               return service->GetUes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      mho_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< mho::Service, ::onos::mho::GetRequest, ::onos::mho::CellList, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](mho::Service* service,
             ::grpc::ServerContext* ctx,
             const ::onos::mho::GetRequest* req,
             ::onos::mho::CellList* resp) {
               return service->GetCells(ctx, req, resp);
             }, this)));
}

mho::Service::~Service() {
}

::grpc::Status mho::Service::GetMhoParams(::grpc::ServerContext* context, const ::onos::mho::GetMhoParamRequest* request, ::onos::mho::GetMhoParamResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status mho::Service::SetMhoParams(::grpc::ServerContext* context, const ::onos::mho::SetMhoParamRequest* request, ::onos::mho::SetMhoParamResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status mho::Service::GetUes(::grpc::ServerContext* context, const ::onos::mho::GetRequest* request, ::onos::mho::UeList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status mho::Service::GetCells(::grpc::ServerContext* context, const ::onos::mho::GetRequest* request, ::onos::mho::CellList* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace onos
}  // namespace mho

