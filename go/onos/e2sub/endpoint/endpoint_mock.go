// Code generated by MockGen. DO NOT EDIT.
// Source: go/onos/e2sub/endpoint/endpoint.pb.go

// Package endpoint is a generated GoMock package.
package endpoint

import (
	context "context"
	reflect "reflect"

	gomock "github.com/golang/mock/gomock"
	grpc "google.golang.org/grpc"
	metadata "google.golang.org/grpc/metadata"
)

// MockE2RegistryServiceClient is a mock of E2RegistryServiceClient interface.
type MockE2RegistryServiceClient struct {
	ctrl     *gomock.Controller
	recorder *MockE2RegistryServiceClientMockRecorder
}

// MockE2RegistryServiceClientMockRecorder is the mock recorder for MockE2RegistryServiceClient.
type MockE2RegistryServiceClientMockRecorder struct {
	mock *MockE2RegistryServiceClient
}

// NewMockE2RegistryServiceClient creates a new mock instance.
func NewMockE2RegistryServiceClient(ctrl *gomock.Controller) *MockE2RegistryServiceClient {
	mock := &MockE2RegistryServiceClient{ctrl: ctrl}
	mock.recorder = &MockE2RegistryServiceClientMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use.
func (m *MockE2RegistryServiceClient) EXPECT() *MockE2RegistryServiceClientMockRecorder {
	return m.recorder
}

// AddTermination mocks base method.
func (m *MockE2RegistryServiceClient) AddTermination(ctx context.Context, in *AddTerminationRequest, opts ...grpc.CallOption) (*AddTerminationResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "AddTermination", varargs...)
	ret0, _ := ret[0].(*AddTerminationResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// AddTermination indicates an expected call of AddTermination.
func (mr *MockE2RegistryServiceClientMockRecorder) AddTermination(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "AddTermination", reflect.TypeOf((*MockE2RegistryServiceClient)(nil).AddTermination), varargs...)
}

// GetTermination mocks base method.
func (m *MockE2RegistryServiceClient) GetTermination(ctx context.Context, in *GetTerminationRequest, opts ...grpc.CallOption) (*GetTerminationResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "GetTermination", varargs...)
	ret0, _ := ret[0].(*GetTerminationResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// GetTermination indicates an expected call of GetTermination.
func (mr *MockE2RegistryServiceClientMockRecorder) GetTermination(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "GetTermination", reflect.TypeOf((*MockE2RegistryServiceClient)(nil).GetTermination), varargs...)
}

// RemoveTermination mocks base method.
func (m *MockE2RegistryServiceClient) RemoveTermination(ctx context.Context, in *RemoveTerminationRequest, opts ...grpc.CallOption) (*RemoveTerminationResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "RemoveTermination", varargs...)
	ret0, _ := ret[0].(*RemoveTerminationResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// RemoveTermination indicates an expected call of RemoveTermination.
func (mr *MockE2RegistryServiceClientMockRecorder) RemoveTermination(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "RemoveTermination", reflect.TypeOf((*MockE2RegistryServiceClient)(nil).RemoveTermination), varargs...)
}

// ListTerminations mocks base method.
func (m *MockE2RegistryServiceClient) ListTerminations(ctx context.Context, in *ListTerminationsRequest, opts ...grpc.CallOption) (*ListTerminationsResponse, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "ListTerminations", varargs...)
	ret0, _ := ret[0].(*ListTerminationsResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// ListTerminations indicates an expected call of ListTerminations.
func (mr *MockE2RegistryServiceClientMockRecorder) ListTerminations(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "ListTerminations", reflect.TypeOf((*MockE2RegistryServiceClient)(nil).ListTerminations), varargs...)
}

// WatchTerminations mocks base method.
func (m *MockE2RegistryServiceClient) WatchTerminations(ctx context.Context, in *WatchTerminationsRequest, opts ...grpc.CallOption) (E2RegistryService_WatchTerminationsClient, error) {
	m.ctrl.T.Helper()
	varargs := []interface{}{ctx, in}
	for _, a := range opts {
		varargs = append(varargs, a)
	}
	ret := m.ctrl.Call(m, "WatchTerminations", varargs...)
	ret0, _ := ret[0].(E2RegistryService_WatchTerminationsClient)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// WatchTerminations indicates an expected call of WatchTerminations.
func (mr *MockE2RegistryServiceClientMockRecorder) WatchTerminations(ctx, in interface{}, opts ...interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	varargs := append([]interface{}{ctx, in}, opts...)
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "WatchTerminations", reflect.TypeOf((*MockE2RegistryServiceClient)(nil).WatchTerminations), varargs...)
}

// MockE2RegistryService_WatchTerminationsClient is a mock of E2RegistryService_WatchTerminationsClient interface.
type MockE2RegistryService_WatchTerminationsClient struct {
	ctrl     *gomock.Controller
	recorder *MockE2RegistryService_WatchTerminationsClientMockRecorder
}

// MockE2RegistryService_WatchTerminationsClientMockRecorder is the mock recorder for MockE2RegistryService_WatchTerminationsClient.
type MockE2RegistryService_WatchTerminationsClientMockRecorder struct {
	mock *MockE2RegistryService_WatchTerminationsClient
}

// NewMockE2RegistryService_WatchTerminationsClient creates a new mock instance.
func NewMockE2RegistryService_WatchTerminationsClient(ctrl *gomock.Controller) *MockE2RegistryService_WatchTerminationsClient {
	mock := &MockE2RegistryService_WatchTerminationsClient{ctrl: ctrl}
	mock.recorder = &MockE2RegistryService_WatchTerminationsClientMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use.
func (m *MockE2RegistryService_WatchTerminationsClient) EXPECT() *MockE2RegistryService_WatchTerminationsClientMockRecorder {
	return m.recorder
}

// Recv mocks base method.
func (m *MockE2RegistryService_WatchTerminationsClient) Recv() (*WatchTerminationsResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "Recv")
	ret0, _ := ret[0].(*WatchTerminationsResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// Recv indicates an expected call of Recv.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) Recv() *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Recv", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).Recv))
}

// Header mocks base method.
func (m *MockE2RegistryService_WatchTerminationsClient) Header() (metadata.MD, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "Header")
	ret0, _ := ret[0].(metadata.MD)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// Header indicates an expected call of Header.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) Header() *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Header", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).Header))
}

// Trailer mocks base method.
func (m *MockE2RegistryService_WatchTerminationsClient) Trailer() metadata.MD {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "Trailer")
	ret0, _ := ret[0].(metadata.MD)
	return ret0
}

// Trailer indicates an expected call of Trailer.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) Trailer() *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Trailer", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).Trailer))
}

// CloseSend mocks base method.
func (m *MockE2RegistryService_WatchTerminationsClient) CloseSend() error {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "CloseSend")
	ret0, _ := ret[0].(error)
	return ret0
}

// CloseSend indicates an expected call of CloseSend.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) CloseSend() *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "CloseSend", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).CloseSend))
}

// Context mocks base method.
func (m *MockE2RegistryService_WatchTerminationsClient) Context() context.Context {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "Context")
	ret0, _ := ret[0].(context.Context)
	return ret0
}

// Context indicates an expected call of Context.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) Context() *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Context", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).Context))
}

// SendMsg mocks base method.
func (m_2 *MockE2RegistryService_WatchTerminationsClient) SendMsg(m interface{}) error {
	m_2.ctrl.T.Helper()
	ret := m_2.ctrl.Call(m_2, "SendMsg", m)
	ret0, _ := ret[0].(error)
	return ret0
}

// SendMsg indicates an expected call of SendMsg.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) SendMsg(m interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "SendMsg", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).SendMsg), m)
}

// RecvMsg mocks base method.
func (m_2 *MockE2RegistryService_WatchTerminationsClient) RecvMsg(m interface{}) error {
	m_2.ctrl.T.Helper()
	ret := m_2.ctrl.Call(m_2, "RecvMsg", m)
	ret0, _ := ret[0].(error)
	return ret0
}

// RecvMsg indicates an expected call of RecvMsg.
func (mr *MockE2RegistryService_WatchTerminationsClientMockRecorder) RecvMsg(m interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "RecvMsg", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsClient)(nil).RecvMsg), m)
}

// MockE2RegistryServiceServer is a mock of E2RegistryServiceServer interface.
type MockE2RegistryServiceServer struct {
	ctrl     *gomock.Controller
	recorder *MockE2RegistryServiceServerMockRecorder
}

// MockE2RegistryServiceServerMockRecorder is the mock recorder for MockE2RegistryServiceServer.
type MockE2RegistryServiceServerMockRecorder struct {
	mock *MockE2RegistryServiceServer
}

// NewMockE2RegistryServiceServer creates a new mock instance.
func NewMockE2RegistryServiceServer(ctrl *gomock.Controller) *MockE2RegistryServiceServer {
	mock := &MockE2RegistryServiceServer{ctrl: ctrl}
	mock.recorder = &MockE2RegistryServiceServerMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use.
func (m *MockE2RegistryServiceServer) EXPECT() *MockE2RegistryServiceServerMockRecorder {
	return m.recorder
}

// AddTermination mocks base method.
func (m *MockE2RegistryServiceServer) AddTermination(arg0 context.Context, arg1 *AddTerminationRequest) (*AddTerminationResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "AddTermination", arg0, arg1)
	ret0, _ := ret[0].(*AddTerminationResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// AddTermination indicates an expected call of AddTermination.
func (mr *MockE2RegistryServiceServerMockRecorder) AddTermination(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "AddTermination", reflect.TypeOf((*MockE2RegistryServiceServer)(nil).AddTermination), arg0, arg1)
}

// GetTermination mocks base method.
func (m *MockE2RegistryServiceServer) GetTermination(arg0 context.Context, arg1 *GetTerminationRequest) (*GetTerminationResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "GetTermination", arg0, arg1)
	ret0, _ := ret[0].(*GetTerminationResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// GetTermination indicates an expected call of GetTermination.
func (mr *MockE2RegistryServiceServerMockRecorder) GetTermination(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "GetTermination", reflect.TypeOf((*MockE2RegistryServiceServer)(nil).GetTermination), arg0, arg1)
}

// RemoveTermination mocks base method.
func (m *MockE2RegistryServiceServer) RemoveTermination(arg0 context.Context, arg1 *RemoveTerminationRequest) (*RemoveTerminationResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "RemoveTermination", arg0, arg1)
	ret0, _ := ret[0].(*RemoveTerminationResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// RemoveTermination indicates an expected call of RemoveTermination.
func (mr *MockE2RegistryServiceServerMockRecorder) RemoveTermination(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "RemoveTermination", reflect.TypeOf((*MockE2RegistryServiceServer)(nil).RemoveTermination), arg0, arg1)
}

// ListTerminations mocks base method.
func (m *MockE2RegistryServiceServer) ListTerminations(arg0 context.Context, arg1 *ListTerminationsRequest) (*ListTerminationsResponse, error) {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "ListTerminations", arg0, arg1)
	ret0, _ := ret[0].(*ListTerminationsResponse)
	ret1, _ := ret[1].(error)
	return ret0, ret1
}

// ListTerminations indicates an expected call of ListTerminations.
func (mr *MockE2RegistryServiceServerMockRecorder) ListTerminations(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "ListTerminations", reflect.TypeOf((*MockE2RegistryServiceServer)(nil).ListTerminations), arg0, arg1)
}

// WatchTerminations mocks base method.
func (m *MockE2RegistryServiceServer) WatchTerminations(arg0 *WatchTerminationsRequest, arg1 E2RegistryService_WatchTerminationsServer) error {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "WatchTerminations", arg0, arg1)
	ret0, _ := ret[0].(error)
	return ret0
}

// WatchTerminations indicates an expected call of WatchTerminations.
func (mr *MockE2RegistryServiceServerMockRecorder) WatchTerminations(arg0, arg1 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "WatchTerminations", reflect.TypeOf((*MockE2RegistryServiceServer)(nil).WatchTerminations), arg0, arg1)
}

// MockE2RegistryService_WatchTerminationsServer is a mock of E2RegistryService_WatchTerminationsServer interface.
type MockE2RegistryService_WatchTerminationsServer struct {
	ctrl     *gomock.Controller
	recorder *MockE2RegistryService_WatchTerminationsServerMockRecorder
}

// MockE2RegistryService_WatchTerminationsServerMockRecorder is the mock recorder for MockE2RegistryService_WatchTerminationsServer.
type MockE2RegistryService_WatchTerminationsServerMockRecorder struct {
	mock *MockE2RegistryService_WatchTerminationsServer
}

// NewMockE2RegistryService_WatchTerminationsServer creates a new mock instance.
func NewMockE2RegistryService_WatchTerminationsServer(ctrl *gomock.Controller) *MockE2RegistryService_WatchTerminationsServer {
	mock := &MockE2RegistryService_WatchTerminationsServer{ctrl: ctrl}
	mock.recorder = &MockE2RegistryService_WatchTerminationsServerMockRecorder{mock}
	return mock
}

// EXPECT returns an object that allows the caller to indicate expected use.
func (m *MockE2RegistryService_WatchTerminationsServer) EXPECT() *MockE2RegistryService_WatchTerminationsServerMockRecorder {
	return m.recorder
}

// Send mocks base method.
func (m *MockE2RegistryService_WatchTerminationsServer) Send(arg0 *WatchTerminationsResponse) error {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "Send", arg0)
	ret0, _ := ret[0].(error)
	return ret0
}

// Send indicates an expected call of Send.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) Send(arg0 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Send", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).Send), arg0)
}

// SetHeader mocks base method.
func (m *MockE2RegistryService_WatchTerminationsServer) SetHeader(arg0 metadata.MD) error {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "SetHeader", arg0)
	ret0, _ := ret[0].(error)
	return ret0
}

// SetHeader indicates an expected call of SetHeader.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) SetHeader(arg0 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "SetHeader", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).SetHeader), arg0)
}

// SendHeader mocks base method.
func (m *MockE2RegistryService_WatchTerminationsServer) SendHeader(arg0 metadata.MD) error {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "SendHeader", arg0)
	ret0, _ := ret[0].(error)
	return ret0
}

// SendHeader indicates an expected call of SendHeader.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) SendHeader(arg0 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "SendHeader", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).SendHeader), arg0)
}

// SetTrailer mocks base method.
func (m *MockE2RegistryService_WatchTerminationsServer) SetTrailer(arg0 metadata.MD) {
	m.ctrl.T.Helper()
	m.ctrl.Call(m, "SetTrailer", arg0)
}

// SetTrailer indicates an expected call of SetTrailer.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) SetTrailer(arg0 interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "SetTrailer", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).SetTrailer), arg0)
}

// Context mocks base method.
func (m *MockE2RegistryService_WatchTerminationsServer) Context() context.Context {
	m.ctrl.T.Helper()
	ret := m.ctrl.Call(m, "Context")
	ret0, _ := ret[0].(context.Context)
	return ret0
}

// Context indicates an expected call of Context.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) Context() *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "Context", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).Context))
}

// SendMsg mocks base method.
func (m_2 *MockE2RegistryService_WatchTerminationsServer) SendMsg(m interface{}) error {
	m_2.ctrl.T.Helper()
	ret := m_2.ctrl.Call(m_2, "SendMsg", m)
	ret0, _ := ret[0].(error)
	return ret0
}

// SendMsg indicates an expected call of SendMsg.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) SendMsg(m interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "SendMsg", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).SendMsg), m)
}

// RecvMsg mocks base method.
func (m_2 *MockE2RegistryService_WatchTerminationsServer) RecvMsg(m interface{}) error {
	m_2.ctrl.T.Helper()
	ret := m_2.ctrl.Call(m_2, "RecvMsg", m)
	ret0, _ := ret[0].(error)
	return ret0
}

// RecvMsg indicates an expected call of RecvMsg.
func (mr *MockE2RegistryService_WatchTerminationsServerMockRecorder) RecvMsg(m interface{}) *gomock.Call {
	mr.mock.ctrl.T.Helper()
	return mr.mock.ctrl.RecordCallWithMethodType(mr.mock, "RecvMsg", reflect.TypeOf((*MockE2RegistryService_WatchTerminationsServer)(nil).RecvMsg), m)
}
