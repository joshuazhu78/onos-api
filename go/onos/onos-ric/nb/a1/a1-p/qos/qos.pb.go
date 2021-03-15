// Code generated by protoc-gen-gogo. DO NOT EDIT.
// source: onos/onos-ric/nb/a1/a1-p/qos/qos.proto

package qos

import (
	fmt "fmt"
	proto "github.com/gogo/protobuf/proto"
	io "io"
	math "math"
	math_bits "math/bits"
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

// QosObjectives attributes related to QoS
type QosObjectives struct {
	// Guaranteed flow bit rate
	Gfbr int32 `protobuf:"varint,1,opt,name=gfbr,proto3" json:"gfbr,omitempty"`
	// Maximum flow bit rate
	Mfbr int32 `protobuf:"varint,2,opt,name=mfbr,proto3" json:"mfbr,omitempty"`
	// Priority level
	PriorityLevel int32 `protobuf:"varint,3,opt,name=priority_level,json=priorityLevel,proto3" json:"priority_level,omitempty"`
	// Packet delay budget
	Pdb int32 `protobuf:"varint,4,opt,name=pdb,proto3" json:"pdb,omitempty"`
}

func (m *QosObjectives) Reset()         { *m = QosObjectives{} }
func (m *QosObjectives) String() string { return proto.CompactTextString(m) }
func (*QosObjectives) ProtoMessage()    {}
func (*QosObjectives) Descriptor() ([]byte, []int) {
	return fileDescriptor_9bf6319f1052f45d, []int{0}
}
func (m *QosObjectives) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *QosObjectives) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_QosObjectives.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *QosObjectives) XXX_Merge(src proto.Message) {
	xxx_messageInfo_QosObjectives.Merge(m, src)
}
func (m *QosObjectives) XXX_Size() int {
	return m.Size()
}
func (m *QosObjectives) XXX_DiscardUnknown() {
	xxx_messageInfo_QosObjectives.DiscardUnknown(m)
}

var xxx_messageInfo_QosObjectives proto.InternalMessageInfo

func (m *QosObjectives) GetGfbr() int32 {
	if m != nil {
		return m.Gfbr
	}
	return 0
}

func (m *QosObjectives) GetMfbr() int32 {
	if m != nil {
		return m.Mfbr
	}
	return 0
}

func (m *QosObjectives) GetPriorityLevel() int32 {
	if m != nil {
		return m.PriorityLevel
	}
	return 0
}

func (m *QosObjectives) GetPdb() int32 {
	if m != nil {
		return m.Pdb
	}
	return 0
}

func init() {
	proto.RegisterType((*QosObjectives)(nil), "a1.qos.QosObjectives")
}

func init() {
	proto.RegisterFile("onos/onos-ric/nb/a1/a1-p/qos/qos.proto", fileDescriptor_9bf6319f1052f45d)
}

var fileDescriptor_9bf6319f1052f45d = []byte{
	// 183 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0xe2, 0x52, 0xcb, 0xcf, 0xcb, 0x2f,
	0xd6, 0x07, 0x11, 0xba, 0x45, 0x99, 0xc9, 0xfa, 0x79, 0x49, 0xfa, 0x89, 0x86, 0xfa, 0x89, 0x86,
	0xba, 0x05, 0xfa, 0x85, 0xf9, 0xc5, 0x20, 0xac, 0x57, 0x50, 0x94, 0x5f, 0x92, 0x2f, 0xc4, 0x96,
	0x68, 0xa8, 0x57, 0x98, 0x5f, 0xac, 0x54, 0xc0, 0xc5, 0x1b, 0x98, 0x5f, 0xec, 0x9f, 0x94, 0x95,
	0x9a, 0x5c, 0x92, 0x59, 0x96, 0x5a, 0x2c, 0x24, 0xc4, 0xc5, 0x92, 0x9e, 0x96, 0x54, 0x24, 0xc1,
	0xa8, 0xc0, 0xa8, 0xc1, 0x1a, 0x04, 0x66, 0x83, 0xc4, 0x72, 0x41, 0x62, 0x4c, 0x10, 0x31, 0x10,
	0x5b, 0x48, 0x95, 0x8b, 0xaf, 0xa0, 0x28, 0x33, 0xbf, 0x28, 0xb3, 0xa4, 0x32, 0x3e, 0x27, 0xb5,
	0x2c, 0x35, 0x47, 0x82, 0x19, 0x2c, 0xcb, 0x0b, 0x13, 0xf5, 0x01, 0x09, 0x0a, 0x09, 0x70, 0x31,
	0x17, 0xa4, 0x24, 0x49, 0xb0, 0x80, 0xe5, 0x40, 0x4c, 0x27, 0x89, 0x13, 0x8f, 0xe4, 0x18, 0x2f,
	0x3c, 0x92, 0x63, 0x7c, 0xf0, 0x48, 0x8e, 0x71, 0xc2, 0x63, 0x39, 0x86, 0x0b, 0x8f, 0xe5, 0x18,
	0x6e, 0x3c, 0x96, 0x63, 0x48, 0x62, 0x03, 0x3b, 0xcd, 0x18, 0x10, 0x00, 0x00, 0xff, 0xff, 0xb1,
	0x3b, 0xd8, 0x8a, 0xc4, 0x00, 0x00, 0x00,
}

func (m *QosObjectives) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *QosObjectives) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *QosObjectives) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if m.Pdb != 0 {
		i = encodeVarintQos(dAtA, i, uint64(m.Pdb))
		i--
		dAtA[i] = 0x20
	}
	if m.PriorityLevel != 0 {
		i = encodeVarintQos(dAtA, i, uint64(m.PriorityLevel))
		i--
		dAtA[i] = 0x18
	}
	if m.Mfbr != 0 {
		i = encodeVarintQos(dAtA, i, uint64(m.Mfbr))
		i--
		dAtA[i] = 0x10
	}
	if m.Gfbr != 0 {
		i = encodeVarintQos(dAtA, i, uint64(m.Gfbr))
		i--
		dAtA[i] = 0x8
	}
	return len(dAtA) - i, nil
}

func encodeVarintQos(dAtA []byte, offset int, v uint64) int {
	offset -= sovQos(v)
	base := offset
	for v >= 1<<7 {
		dAtA[offset] = uint8(v&0x7f | 0x80)
		v >>= 7
		offset++
	}
	dAtA[offset] = uint8(v)
	return base
}
func (m *QosObjectives) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	if m.Gfbr != 0 {
		n += 1 + sovQos(uint64(m.Gfbr))
	}
	if m.Mfbr != 0 {
		n += 1 + sovQos(uint64(m.Mfbr))
	}
	if m.PriorityLevel != 0 {
		n += 1 + sovQos(uint64(m.PriorityLevel))
	}
	if m.Pdb != 0 {
		n += 1 + sovQos(uint64(m.Pdb))
	}
	return n
}

func sovQos(x uint64) (n int) {
	return (math_bits.Len64(x|1) + 6) / 7
}
func sozQos(x uint64) (n int) {
	return sovQos(uint64((x << 1) ^ uint64((int64(x) >> 63))))
}
func (m *QosObjectives) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowQos
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
			return fmt.Errorf("proto: QosObjectives: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: QosObjectives: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Gfbr", wireType)
			}
			m.Gfbr = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowQos
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Gfbr |= int32(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		case 2:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Mfbr", wireType)
			}
			m.Mfbr = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowQos
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Mfbr |= int32(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		case 3:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field PriorityLevel", wireType)
			}
			m.PriorityLevel = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowQos
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.PriorityLevel |= int32(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		case 4:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Pdb", wireType)
			}
			m.Pdb = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowQos
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Pdb |= int32(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		default:
			iNdEx = preIndex
			skippy, err := skipQos(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthQos
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthQos
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
func skipQos(dAtA []byte) (n int, err error) {
	l := len(dAtA)
	iNdEx := 0
	depth := 0
	for iNdEx < l {
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return 0, ErrIntOverflowQos
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
					return 0, ErrIntOverflowQos
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
					return 0, ErrIntOverflowQos
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
				return 0, ErrInvalidLengthQos
			}
			iNdEx += length
		case 3:
			depth++
		case 4:
			if depth == 0 {
				return 0, ErrUnexpectedEndOfGroupQos
			}
			depth--
		case 5:
			iNdEx += 4
		default:
			return 0, fmt.Errorf("proto: illegal wireType %d", wireType)
		}
		if iNdEx < 0 {
			return 0, ErrInvalidLengthQos
		}
		if depth == 0 {
			return iNdEx, nil
		}
	}
	return 0, io.ErrUnexpectedEOF
}

var (
	ErrInvalidLengthQos        = fmt.Errorf("proto: negative length found during unmarshaling")
	ErrIntOverflowQos          = fmt.Errorf("proto: integer overflow")
	ErrUnexpectedEndOfGroupQos = fmt.Errorf("proto: unexpected end of group")
)
