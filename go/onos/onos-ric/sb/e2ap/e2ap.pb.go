// Code generated by protoc-gen-gogo. DO NOT EDIT.
// source: onos/onos-ric/sb/e2ap/e2ap.proto

package e2ap

import (
	context "context"
	fmt "fmt"
	proto "github.com/gogo/protobuf/proto"
	grpc "google.golang.org/grpc"
	codes "google.golang.org/grpc/codes"
	status "google.golang.org/grpc/status"
	io "io"
	math "math"
	math_bits "math/bits"
	e2sm "onos/onos-ric/sb/e2sm"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.GoGoProtoPackageIsVersion3 // please upgrade the proto package

type RicSubscriptionRequest struct {
	Hdr *e2sm.RicSubscriptionHeader  `protobuf:"bytes,1,opt,name=hdr,proto3" json:"hdr,omitempty"`
	Msg *e2sm.RicSubscriptionMessage `protobuf:"bytes,2,opt,name=msg,proto3" json:"msg,omitempty"`
}

func (m *RicSubscriptionRequest) Reset()         { *m = RicSubscriptionRequest{} }
func (m *RicSubscriptionRequest) String() string { return proto.CompactTextString(m) }
func (*RicSubscriptionRequest) ProtoMessage()    {}
func (*RicSubscriptionRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_6bab3b186ad13e1b, []int{0}
}
func (m *RicSubscriptionRequest) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *RicSubscriptionRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_RicSubscriptionRequest.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *RicSubscriptionRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RicSubscriptionRequest.Merge(m, src)
}
func (m *RicSubscriptionRequest) XXX_Size() int {
	return m.Size()
}
func (m *RicSubscriptionRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_RicSubscriptionRequest.DiscardUnknown(m)
}

var xxx_messageInfo_RicSubscriptionRequest proto.InternalMessageInfo

func (m *RicSubscriptionRequest) GetHdr() *e2sm.RicSubscriptionHeader {
	if m != nil {
		return m.Hdr
	}
	return nil
}

func (m *RicSubscriptionRequest) GetMsg() *e2sm.RicSubscriptionMessage {
	if m != nil {
		return m.Msg
	}
	return nil
}

type RicSubscriptionResponse struct {
}

func (m *RicSubscriptionResponse) Reset()         { *m = RicSubscriptionResponse{} }
func (m *RicSubscriptionResponse) String() string { return proto.CompactTextString(m) }
func (*RicSubscriptionResponse) ProtoMessage()    {}
func (*RicSubscriptionResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_6bab3b186ad13e1b, []int{1}
}
func (m *RicSubscriptionResponse) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *RicSubscriptionResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_RicSubscriptionResponse.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *RicSubscriptionResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RicSubscriptionResponse.Merge(m, src)
}
func (m *RicSubscriptionResponse) XXX_Size() int {
	return m.Size()
}
func (m *RicSubscriptionResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_RicSubscriptionResponse.DiscardUnknown(m)
}

var xxx_messageInfo_RicSubscriptionResponse proto.InternalMessageInfo

type RicIndication struct {
	Hdr *e2sm.RicIndicationHeader  `protobuf:"bytes,1,opt,name=hdr,proto3" json:"hdr,omitempty"`
	Msg *e2sm.RicIndicationMessage `protobuf:"bytes,2,opt,name=msg,proto3" json:"msg,omitempty"`
}

func (m *RicIndication) Reset()         { *m = RicIndication{} }
func (m *RicIndication) String() string { return proto.CompactTextString(m) }
func (*RicIndication) ProtoMessage()    {}
func (*RicIndication) Descriptor() ([]byte, []int) {
	return fileDescriptor_6bab3b186ad13e1b, []int{2}
}
func (m *RicIndication) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *RicIndication) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_RicIndication.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *RicIndication) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RicIndication.Merge(m, src)
}
func (m *RicIndication) XXX_Size() int {
	return m.Size()
}
func (m *RicIndication) XXX_DiscardUnknown() {
	xxx_messageInfo_RicIndication.DiscardUnknown(m)
}

var xxx_messageInfo_RicIndication proto.InternalMessageInfo

func (m *RicIndication) GetHdr() *e2sm.RicIndicationHeader {
	if m != nil {
		return m.Hdr
	}
	return nil
}

func (m *RicIndication) GetMsg() *e2sm.RicIndicationMessage {
	if m != nil {
		return m.Msg
	}
	return nil
}

type RicControlRequest struct {
	Hdr *e2sm.RicControlHeader  `protobuf:"bytes,1,opt,name=hdr,proto3" json:"hdr,omitempty"`
	Msg *e2sm.RicControlMessage `protobuf:"bytes,2,opt,name=msg,proto3" json:"msg,omitempty"`
}

func (m *RicControlRequest) Reset()         { *m = RicControlRequest{} }
func (m *RicControlRequest) String() string { return proto.CompactTextString(m) }
func (*RicControlRequest) ProtoMessage()    {}
func (*RicControlRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_6bab3b186ad13e1b, []int{3}
}
func (m *RicControlRequest) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *RicControlRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_RicControlRequest.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *RicControlRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_RicControlRequest.Merge(m, src)
}
func (m *RicControlRequest) XXX_Size() int {
	return m.Size()
}
func (m *RicControlRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_RicControlRequest.DiscardUnknown(m)
}

var xxx_messageInfo_RicControlRequest proto.InternalMessageInfo

func (m *RicControlRequest) GetHdr() *e2sm.RicControlHeader {
	if m != nil {
		return m.Hdr
	}
	return nil
}

func (m *RicControlRequest) GetMsg() *e2sm.RicControlMessage {
	if m != nil {
		return m.Msg
	}
	return nil
}

func init() {
	proto.RegisterType((*RicSubscriptionRequest)(nil), "interface.e2ap.RicSubscriptionRequest")
	proto.RegisterType((*RicSubscriptionResponse)(nil), "interface.e2ap.RicSubscriptionResponse")
	proto.RegisterType((*RicIndication)(nil), "interface.e2ap.RicIndication")
	proto.RegisterType((*RicControlRequest)(nil), "interface.e2ap.RicControlRequest")
}

func init() { proto.RegisterFile("onos/onos-ric/sb/e2ap/e2ap.proto", fileDescriptor_6bab3b186ad13e1b) }

var fileDescriptor_6bab3b186ad13e1b = []byte{
	// 336 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x84, 0x92, 0xbb, 0x4e, 0xc3, 0x30,
	0x14, 0x86, 0x63, 0x8a, 0x40, 0x32, 0x17, 0x09, 0x0f, 0x50, 0x2a, 0x61, 0xb5, 0xe1, 0xd6, 0x85,
	0x14, 0xa5, 0xe2, 0xb2, 0x02, 0x42, 0x82, 0x01, 0x09, 0xcc, 0x13, 0x38, 0xae, 0x69, 0x2d, 0x51,
	0x3b, 0xd8, 0xe9, 0x86, 0x78, 0x01, 0x16, 0x1e, 0x88, 0x07, 0x60, 0xec, 0xc8, 0x88, 0xda, 0x17,
	0x41, 0x0e, 0x45, 0x71, 0xc0, 0xd0, 0xe5, 0x0c, 0xc9, 0xff, 0x9d, 0xf3, 0xe9, 0x4f, 0x60, 0x5d,
	0x49, 0x65, 0x5a, 0x76, 0xec, 0x69, 0xc1, 0x5a, 0x26, 0x69, 0xf1, 0x98, 0xa6, 0xf9, 0x88, 0x52,
	0xad, 0x32, 0x85, 0x96, 0x85, 0xcc, 0xb8, 0xbe, 0xa3, 0x8c, 0x47, 0xf6, 0x69, 0xcd, 0x47, 0x98,
	0x7e, 0x3e, 0xbe, 0x88, 0xf0, 0x19, 0xc0, 0x55, 0x22, 0xd8, 0xed, 0x20, 0x31, 0x4c, 0x8b, 0x34,
	0x13, 0x4a, 0x12, 0xfe, 0x30, 0xe0, 0x26, 0x43, 0x47, 0xb0, 0xd2, 0xeb, 0xe8, 0x2a, 0xa8, 0x83,
	0xe6, 0x42, 0xbc, 0x1d, 0xb9, 0xab, 0x4d, 0x3f, 0xfa, 0x01, 0x5d, 0x70, 0xda, 0xe1, 0x9a, 0x58,
	0x02, 0x1d, 0xc3, 0x4a, 0xdf, 0x74, 0xab, 0x33, 0x39, 0xb8, 0x33, 0x05, 0xbc, 0xe2, 0xc6, 0xd0,
	0x2e, 0x27, 0x16, 0x09, 0xd7, 0xe1, 0xda, 0x2f, 0x19, 0x93, 0x2a, 0x69, 0x78, 0xf8, 0x04, 0x97,
	0x88, 0x60, 0x97, 0xb2, 0x23, 0x18, 0xb5, 0x2f, 0xd0, 0x81, 0xab, 0xb7, 0xe9, 0xb9, 0x52, 0x64,
	0x5d, 0xb9, 0x43, 0x57, 0x6e, 0xeb, 0x5f, 0xac, 0xa4, 0xf6, 0x08, 0x57, 0x88, 0x60, 0x67, 0x4a,
	0x66, 0x5a, 0xdd, 0x7f, 0x57, 0x14, 0xbb, 0x0e, 0x75, 0xcf, 0xb2, 0x49, 0xde, 0x15, 0x68, 0xbb,
	0x02, 0x8d, 0xbf, 0x19, 0xf7, 0x7a, 0xfc, 0x0a, 0xe0, 0xec, 0x79, 0x7c, 0x72, 0x8d, 0x28, 0x5c,
	0x2c, 0x1a, 0x4a, 0x38, 0x2a, 0xd7, 0x4b, 0xd3, 0xc8, 0xff, 0x31, 0x6b, 0xbb, 0x53, 0x73, 0x93,
	0x9e, 0x03, 0x74, 0x03, 0xe7, 0xad, 0x45, 0x8f, 0x4a, 0xd4, 0xf0, 0x50, 0xe5, 0x0a, 0x6a, 0x1b,
	0x9e, 0x48, 0x51, 0x61, 0x18, 0x34, 0xc1, 0x3e, 0x38, 0xad, 0xbe, 0x8d, 0x30, 0x18, 0x8e, 0x30,
	0xf8, 0x18, 0x61, 0xf0, 0x32, 0xc6, 0xc1, 0x70, 0x8c, 0x83, 0xf7, 0x31, 0x0e, 0x92, 0xb9, 0xfc,
	0x37, 0x6c, 0x7f, 0x06, 0x00, 0x00, 0xff, 0xff, 0x48, 0x6b, 0x7d, 0xab, 0xdc, 0x02, 0x00, 0x00,
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// E2APClient is the client API for E2AP service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type E2APClient interface {
	// RicSubscribe is a unary service for the RIC to subscribe to events/reports from E2 Node
	RicSubscribe(ctx context.Context, in *RicSubscriptionRequest, opts ...grpc.CallOption) (*RicSubscriptionResponse, error)
	// RicChan is a bi-directonal stream for all E2AP Control
	// and E2AP Indication messaging between RIC and E2-Node
	RicChan(ctx context.Context, opts ...grpc.CallOption) (E2AP_RicChanClient, error)
}

type e2APClient struct {
	cc *grpc.ClientConn
}

func NewE2APClient(cc *grpc.ClientConn) E2APClient {
	return &e2APClient{cc}
}

func (c *e2APClient) RicSubscribe(ctx context.Context, in *RicSubscriptionRequest, opts ...grpc.CallOption) (*RicSubscriptionResponse, error) {
	out := new(RicSubscriptionResponse)
	err := c.cc.Invoke(ctx, "/interface.e2ap.E2AP/RicSubscribe", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *e2APClient) RicChan(ctx context.Context, opts ...grpc.CallOption) (E2AP_RicChanClient, error) {
	stream, err := c.cc.NewStream(ctx, &_E2AP_serviceDesc.Streams[0], "/interface.e2ap.E2AP/RicChan", opts...)
	if err != nil {
		return nil, err
	}
	x := &e2APRicChanClient{stream}
	return x, nil
}

type E2AP_RicChanClient interface {
	Send(*RicControlRequest) error
	Recv() (*RicIndication, error)
	grpc.ClientStream
}

type e2APRicChanClient struct {
	grpc.ClientStream
}

func (x *e2APRicChanClient) Send(m *RicControlRequest) error {
	return x.ClientStream.SendMsg(m)
}

func (x *e2APRicChanClient) Recv() (*RicIndication, error) {
	m := new(RicIndication)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

// E2APServer is the server API for E2AP service.
type E2APServer interface {
	// RicSubscribe is a unary service for the RIC to subscribe to events/reports from E2 Node
	RicSubscribe(context.Context, *RicSubscriptionRequest) (*RicSubscriptionResponse, error)
	// RicChan is a bi-directonal stream for all E2AP Control
	// and E2AP Indication messaging between RIC and E2-Node
	RicChan(E2AP_RicChanServer) error
}

// UnimplementedE2APServer can be embedded to have forward compatible implementations.
type UnimplementedE2APServer struct {
}

func (*UnimplementedE2APServer) RicSubscribe(ctx context.Context, req *RicSubscriptionRequest) (*RicSubscriptionResponse, error) {
	return nil, status.Errorf(codes.Unimplemented, "method RicSubscribe not implemented")
}
func (*UnimplementedE2APServer) RicChan(srv E2AP_RicChanServer) error {
	return status.Errorf(codes.Unimplemented, "method RicChan not implemented")
}

func RegisterE2APServer(s *grpc.Server, srv E2APServer) {
	s.RegisterService(&_E2AP_serviceDesc, srv)
}

func _E2AP_RicSubscribe_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(RicSubscriptionRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(E2APServer).RicSubscribe(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/interface.e2ap.E2AP/RicSubscribe",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(E2APServer).RicSubscribe(ctx, req.(*RicSubscriptionRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _E2AP_RicChan_Handler(srv interface{}, stream grpc.ServerStream) error {
	return srv.(E2APServer).RicChan(&e2APRicChanServer{stream})
}

type E2AP_RicChanServer interface {
	Send(*RicIndication) error
	Recv() (*RicControlRequest, error)
	grpc.ServerStream
}

type e2APRicChanServer struct {
	grpc.ServerStream
}

func (x *e2APRicChanServer) Send(m *RicIndication) error {
	return x.ServerStream.SendMsg(m)
}

func (x *e2APRicChanServer) Recv() (*RicControlRequest, error) {
	m := new(RicControlRequest)
	if err := x.ServerStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

var _E2AP_serviceDesc = grpc.ServiceDesc{
	ServiceName: "interface.e2ap.E2AP",
	HandlerType: (*E2APServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "RicSubscribe",
			Handler:    _E2AP_RicSubscribe_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "RicChan",
			Handler:       _E2AP_RicChan_Handler,
			ServerStreams: true,
			ClientStreams: true,
		},
	},
	Metadata: "onos/onos-ric/sb/e2ap/e2ap.proto",
}

func (m *RicSubscriptionRequest) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *RicSubscriptionRequest) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *RicSubscriptionRequest) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.Msg != nil {
		{
			size, err := m.Msg.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintE2Ap(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0x12
	}
	if m.Hdr != nil {
		{
			size, err := m.Hdr.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintE2Ap(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func (m *RicSubscriptionResponse) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *RicSubscriptionResponse) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *RicSubscriptionResponse) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	return len(dAtA) - i, nil
}

func (m *RicIndication) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *RicIndication) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *RicIndication) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.Msg != nil {
		{
			size, err := m.Msg.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintE2Ap(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0x12
	}
	if m.Hdr != nil {
		{
			size, err := m.Hdr.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintE2Ap(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func (m *RicControlRequest) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *RicControlRequest) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *RicControlRequest) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.Msg != nil {
		{
			size, err := m.Msg.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintE2Ap(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0x12
	}
	if m.Hdr != nil {
		{
			size, err := m.Hdr.MarshalToSizedBuffer(dAtA[:i])
			if err != nil {
				return 0, err
			}
			i -= size
			i = encodeVarintE2Ap(dAtA, i, uint64(size))
		}
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func encodeVarintE2Ap(dAtA []byte, offset int, v uint64) int {
	offset -= sovE2Ap(v)
	base := offset
	for v >= 1<<7 {
		dAtA[offset] = uint8(v&0x7f | 0x80)
		v >>= 7
		offset++
	}
	dAtA[offset] = uint8(v)
	return base
}
func (m *RicSubscriptionRequest) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if m.Hdr != nil {
		l = m.Hdr.Size()
		n += 1 + l + sovE2Ap(uint64(l))
	}
	if m.Msg != nil {
		l = m.Msg.Size()
		n += 1 + l + sovE2Ap(uint64(l))
	}
	return n
}

func (m *RicSubscriptionResponse) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	return n
}

func (m *RicIndication) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if m.Hdr != nil {
		l = m.Hdr.Size()
		n += 1 + l + sovE2Ap(uint64(l))
	}
	if m.Msg != nil {
		l = m.Msg.Size()
		n += 1 + l + sovE2Ap(uint64(l))
	}
	return n
}

func (m *RicControlRequest) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if m.Hdr != nil {
		l = m.Hdr.Size()
		n += 1 + l + sovE2Ap(uint64(l))
	}
	if m.Msg != nil {
		l = m.Msg.Size()
		n += 1 + l + sovE2Ap(uint64(l))
	}
	return n
}

func sovE2Ap(x uint64) (n int) {
	return (math_bits.Len64(x|1) + 6) / 7
}
func sozE2Ap(x uint64) (n int) {
	return sovE2Ap(uint64((x << 1) ^ uint64((int64(x) >> 63))))
}
func (m *RicSubscriptionRequest) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowE2Ap
			}
			if iNdEx >= l {
				return io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= uint64(b&0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		fieldNum := int32(wire >> 3)
		wireType := int(wire & 0x7)
		if wireType == 4 {
			return fmt.Errorf("proto: RicSubscriptionRequest: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: RicSubscriptionRequest: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Hdr", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthE2Ap
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthE2Ap
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Hdr == nil {
				m.Hdr = &e2sm.RicSubscriptionHeader{}
			}
			if err := m.Hdr.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 2:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Msg", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthE2Ap
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthE2Ap
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Msg == nil {
				m.Msg = &e2sm.RicSubscriptionMessage{}
			}
			if err := m.Msg.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		default:
			iNdEx = preIndex
			skippy, err := skipE2Ap(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) > l {
				return io.ErrUnexpectedEOF
			}
			iNdEx += skippy
		}
	}

	if iNdEx > l {
		return io.ErrUnexpectedEOF
	}
	return nil
}
func (m *RicSubscriptionResponse) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowE2Ap
			}
			if iNdEx >= l {
				return io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= uint64(b&0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		fieldNum := int32(wire >> 3)
		wireType := int(wire & 0x7)
		if wireType == 4 {
			return fmt.Errorf("proto: RicSubscriptionResponse: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: RicSubscriptionResponse: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		default:
			iNdEx = preIndex
			skippy, err := skipE2Ap(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) > l {
				return io.ErrUnexpectedEOF
			}
			iNdEx += skippy
		}
	}

	if iNdEx > l {
		return io.ErrUnexpectedEOF
	}
	return nil
}
func (m *RicIndication) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowE2Ap
			}
			if iNdEx >= l {
				return io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= uint64(b&0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		fieldNum := int32(wire >> 3)
		wireType := int(wire & 0x7)
		if wireType == 4 {
			return fmt.Errorf("proto: RicIndication: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: RicIndication: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Hdr", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthE2Ap
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthE2Ap
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Hdr == nil {
				m.Hdr = &e2sm.RicIndicationHeader{}
			}
			if err := m.Hdr.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 2:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Msg", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthE2Ap
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthE2Ap
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Msg == nil {
				m.Msg = &e2sm.RicIndicationMessage{}
			}
			if err := m.Msg.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		default:
			iNdEx = preIndex
			skippy, err := skipE2Ap(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) > l {
				return io.ErrUnexpectedEOF
			}
			iNdEx += skippy
		}
	}

	if iNdEx > l {
		return io.ErrUnexpectedEOF
	}
	return nil
}
func (m *RicControlRequest) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowE2Ap
			}
			if iNdEx >= l {
				return io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= uint64(b&0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		fieldNum := int32(wire >> 3)
		wireType := int(wire & 0x7)
		if wireType == 4 {
			return fmt.Errorf("proto: RicControlRequest: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: RicControlRequest: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Hdr", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthE2Ap
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthE2Ap
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Hdr == nil {
				m.Hdr = &e2sm.RicControlHeader{}
			}
			if err := m.Hdr.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 2:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Msg", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				msglen |= int(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if msglen < 0 {
				return ErrInvalidLengthE2Ap
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthE2Ap
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if m.Msg == nil {
				m.Msg = &e2sm.RicControlMessage{}
			}
			if err := m.Msg.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		default:
			iNdEx = preIndex
			skippy, err := skipE2Ap(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthE2Ap
			}
			if (iNdEx + skippy) > l {
				return io.ErrUnexpectedEOF
			}
			iNdEx += skippy
		}
	}

	if iNdEx > l {
		return io.ErrUnexpectedEOF
	}
	return nil
}
func skipE2Ap(dAtA []byte) (n int, err error) {
	l := len(dAtA)
	iNdEx := 0
	depth := 0
	for iNdEx < l {
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return 0, ErrIntOverflowE2Ap
			}
			if iNdEx >= l {
				return 0, io.ErrUnexpectedEOF
			}
			b := dAtA[iNdEx]
			iNdEx++
			wire |= (uint64(b) & 0x7F) << shift
			if b < 0x80 {
				break
			}
		}
		wireType := int(wire & 0x7)
		switch wireType {
		case 0:
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return 0, ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return 0, io.ErrUnexpectedEOF
				}
				iNdEx++
				if dAtA[iNdEx-1] < 0x80 {
					break
				}
			}
		case 1:
			iNdEx += 8
		case 2:
			var length int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return 0, ErrIntOverflowE2Ap
				}
				if iNdEx >= l {
					return 0, io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				length |= (int(b) & 0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			if length < 0 {
				return 0, ErrInvalidLengthE2Ap
			}
			iNdEx += length
		case 3:
			depth++
		case 4:
			if depth == 0 {
				return 0, ErrUnexpectedEndOfGroupE2Ap
			}
			depth--
		case 5:
			iNdEx += 4
		default:
			return 0, fmt.Errorf("proto: illegal wireType %d", wireType)
		}
		if iNdEx < 0 {
			return 0, ErrInvalidLengthE2Ap
		}
		if depth == 0 {
			return iNdEx, nil
		}
	}
	return 0, io.ErrUnexpectedEOF
}

var (
	ErrInvalidLengthE2Ap        = fmt.Errorf("proto: negative length found during unmarshaling")
	ErrIntOverflowE2Ap          = fmt.Errorf("proto: integer overflow")
	ErrUnexpectedEndOfGroupE2Ap = fmt.Errorf("proto: unexpected end of group")
)
