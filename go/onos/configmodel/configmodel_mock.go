// Code generated by MockGen. DO NOT EDIT.
// Source: go/onos/configmodel/registry.pb.go

// Package configmodel is a generated GoMock package.
package configmodel

import (
	context "context"
	reflect "reflect"

	gomock "github.com/golang/mock/gomock"
	grpc "google.golang.org/grpc"
)

// MockConfigModelRegistryServiceClient is a mock of ConfigModelRegistryServiceClient interface.
type MockConfigModelRegistryServiceClient struct {
	ctrl     *gomock.Controller
	recorder *MockConfigModelRegistryServiceClientMockRecorder
}

// MockConfigModelRegistryServiceClientMockRecorder is the mock recorder for MockConfigModelRegistryServiceClient.
type MockConfigModelRegistryServiceClientMockRecorder struct {
	mock *MockConfigModelRegistryServiceClient
}

// NewMockConfigModelRegistryServiceClient creates a new mock instance.
func NewMockConfigModelRegistryServiceClient(ctrl *gomock.Controller) *MockConfigModelRegistryServiceClient {
	mock := &MockConfigModelRegistryServiceClient{ctrl: ctrl}
	mock.recorder = &MockConfigModelRegistryServiceClientMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use.
func (m *MockConfigModelRegistryServiceClient) EXPECT() *MockConfigModelRegistryServiceClientMockRecorder {
	return m.recorder
}

// GetModel mocks base method.
func (m *MockConfigModelRegistryServiceClient) GetModel(ctx context.Context, in *GetModelRequest, opts ...grpc.CallOption) (*GetModelResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "GetModel", varargs...)
	ret0, _ := ret[0].(*GetModelResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// GetModel indicates an expected call of GetModel.
func (mr *MockConfigModelRegistryServiceClientMockRecorder) GetModel(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "GetModel", reflect.TypeOf((*MockConfigModelRegistryServiceClient)(nil).GetModel), varargs...)
}

// ListModels mocks base method.
func (m *MockConfigModelRegistryServiceClient) ListModels(ctx context.Context, in *ListModelsRequest, opts ...grpc.CallOption) (*ListModelsResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "ListModels", varargs...)
	ret0, _ := ret[0].(*ListModelsResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// ListModels indicates an expected call of ListModels.
func (mr *MockConfigModelRegistryServiceClientMockRecorder) ListModels(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "ListModels", reflect.TypeOf((*MockConfigModelRegistryServiceClient)(nil).ListModels), varargs...)
}

// PushModel mocks base method.
func (m *MockConfigModelRegistryServiceClient) PushModel(ctx context.Context, in *PushModelRequest, opts ...grpc.CallOption) (*PushModelResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "PushModel", varargs...)
	ret0, _ := ret[0].(*PushModelResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// PushModel indicates an expected call of PushModel.
func (mr *MockConfigModelRegistryServiceClientMockRecorder) PushModel(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "PushModel", reflect.TypeOf((*MockConfigModelRegistryServiceClient)(nil).PushModel), varargs...)
}

// DeleteModel mocks base method.
func (m *MockConfigModelRegistryServiceClient) DeleteModel(ctx context.Context, in *DeleteModelRequest, opts ...grpc.CallOption) (*DeleteModelResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "DeleteModel", varargs...)
	ret0, _ := ret[0].(*DeleteModelResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// DeleteModel indicates an expected call of DeleteModel.
func (mr *MockConfigModelRegistryServiceClientMockRecorder) DeleteModel(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "DeleteModel", reflect.TypeOf((*MockConfigModelRegistryServiceClient)(nil).DeleteModel), varargs...)
}

// MockConfigModelRegistryServiceServer is a mock of ConfigModelRegistryServiceServer interface.
type MockConfigModelRegistryServiceServer struct {
	ctrl     *gomock.Controller
	recorder *MockConfigModelRegistryServiceServerMockRecorder
}

// MockConfigModelRegistryServiceServerMockRecorder is the mock recorder for MockConfigModelRegistryServiceServer.
type MockConfigModelRegistryServiceServerMockRecorder struct {
	mock *MockConfigModelRegistryServiceServer
}

// NewMockConfigModelRegistryServiceServer creates a new mock instance.
func NewMockConfigModelRegistryServiceServer(ctrl *gomock.Controller) *MockConfigModelRegistryServiceServer {
	mock := &MockConfigModelRegistryServiceServer{ctrl: ctrl}
	mock.recorder = &MockConfigModelRegistryServiceServerMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use.
func (m *MockConfigModelRegistryServiceServer) EXPECT() *MockConfigModelRegistryServiceServerMockRecorder {
	return m.recorder
}

// GetModel mocks base method.
func (m *MockConfigModelRegistryServiceServer) GetModel(arg0 context.Context, arg1 *GetModelRequest) (*GetModelResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "GetModel", arg0, arg1)
	ret0, _ := ret[0].(*GetModelResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// GetModel indicates an expected call of GetModel.
func (mr *MockConfigModelRegistryServiceServerMockRecorder) GetModel(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "GetModel", reflect.TypeOf((*MockConfigModelRegistryServiceServer)(nil).GetModel), arg0, arg1)
}

// ListModels mocks base method.
func (m *MockConfigModelRegistryServiceServer) ListModels(arg0 context.Context, arg1 *ListModelsRequest) (*ListModelsResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "ListModels", arg0, arg1)
	ret0, _ := ret[0].(*ListModelsResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// ListModels indicates an expected call of ListModels.
func (mr *MockConfigModelRegistryServiceServerMockRecorder) ListModels(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "ListModels", reflect.TypeOf((*MockConfigModelRegistryServiceServer)(nil).ListModels), arg0, arg1)
}

// PushModel mocks base method.
func (m *MockConfigModelRegistryServiceServer) PushModel(arg0 context.Context, arg1 *PushModelRequest) (*PushModelResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "PushModel", arg0, arg1)
	ret0, _ := ret[0].(*PushModelResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// PushModel indicates an expected call of PushModel.
func (mr *MockConfigModelRegistryServiceServerMockRecorder) PushModel(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "PushModel", reflect.TypeOf((*MockConfigModelRegistryServiceServer)(nil).PushModel), arg0, arg1)
}

// DeleteModel mocks base method.
func (m *MockConfigModelRegistryServiceServer) DeleteModel(arg0 context.Context, arg1 *DeleteModelRequest) (*DeleteModelResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "DeleteModel", arg0, arg1)
	ret0, _ := ret[0].(*DeleteModelResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// DeleteModel indicates an expected call of DeleteModel.
func (mr *MockConfigModelRegistryServiceServerMockRecorder) DeleteModel(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "DeleteModel", reflect.TypeOf((*MockConfigModelRegistryServiceServer)(nil).DeleteModel), arg0, arg1)
}
