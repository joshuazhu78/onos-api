// Code generated by protoc-gen-gogo. DO NOT EDIT.
// source: onos/onos-config/types/snapshot/network/types.proto

package network

import (
	fmt "fmt"
	_ "github.com/gogo/protobuf/gogoproto"
	proto "github.com/gogo/protobuf/proto"
	_ "github.com/gogo/protobuf/types"
	github_com_gogo_protobuf_types "github.com/gogo/protobuf/types"
	snapshot "gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/snapshot"
	io "io"
	math "math"
	math_bits "math/bits"
	onos_onos_config_types_snapshot_device "onos/onos-config/types/snapshot/device"
	time "time"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf
var _ = time.Kitchen

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.GoGoProtoPackageIsVersion3 // please upgrade the proto package

// NetworkSnapshot is a snapshot of all network changes
type NetworkSnapshot struct {
	// 'id' is the unique snapshot identifier
	ID ID `protobuf:"bytes,1,opt,name=id,proto3,casttype=ID" json:"id,omitempty"`
	// 'index' is a monotonically increasing, globally unique snapshot index
	Index Index `protobuf:"varint,2,opt,name=index,proto3,casttype=Index" json:"index,omitempty"`
	// 'revision' is the request revision number
	Revision Revision `protobuf:"varint,3,opt,name=revision,proto3,casttype=Revision" json:"revision,omitempty"`
	// 'status' is the snapshot status
	Status snapshot.Status `protobuf:"bytes,4,opt,name=status,proto3" json:"status"`
	// 'retention' specifies the duration for which to retain changes
	Retention snapshot.RetentionOptions `protobuf:"bytes,6,opt,name=retention,proto3" json:"retention"`
	// 'created' is the time at which the configuration was created
	Created time.Time `protobuf:"bytes,8,opt,name=created,proto3,stdtime" json:"created"`
	// 'updated' is the time at which the configuration was last updated
	Updated time.Time `protobuf:"bytes,9,opt,name=updated,proto3,stdtime" json:"updated"`
	// 'refs' is a set of references to stored device snapshots
	Refs []*DeviceSnapshotRef `protobuf:"bytes,10,rep,name=refs,proto3" json:"refs,omitempty"`
}

func (m *NetworkSnapshot) Reset()         { *m = NetworkSnapshot{} }
func (m *NetworkSnapshot) String() string { return proto.CompactTextString(m) }
func (*NetworkSnapshot) ProtoMessage()    {}
func (*NetworkSnapshot) Descriptor() ([]byte, []int) {
	return fileDescriptor_ca4697bb89e1e55b, []int{0}
}
func (m *NetworkSnapshot) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *NetworkSnapshot) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_NetworkSnapshot.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *NetworkSnapshot) XXX_Merge(src proto.Message) {
	xxx_messageInfo_NetworkSnapshot.Merge(m, src)
}
func (m *NetworkSnapshot) XXX_Size() int {
	return m.Size()
}
func (m *NetworkSnapshot) XXX_DiscardUnknown() {
	xxx_messageInfo_NetworkSnapshot.DiscardUnknown(m)
}

var xxx_messageInfo_NetworkSnapshot proto.InternalMessageInfo

func (m *NetworkSnapshot) GetID() ID {
	if m != nil {
		return m.ID
	}
	return ""
}

func (m *NetworkSnapshot) GetIndex() Index {
	if m != nil {
		return m.Index
	}
	return 0
}

func (m *NetworkSnapshot) GetRevision() Revision {
	if m != nil {
		return m.Revision
	}
	return 0
}

func (m *NetworkSnapshot) GetStatus() snapshot.Status {
	if m != nil {
		return m.Status
	}
	return snapshot.Status{}
}

func (m *NetworkSnapshot) GetRetention() snapshot.RetentionOptions {
	if m != nil {
		return m.Retention
	}
	return snapshot.RetentionOptions{}
}

func (m *NetworkSnapshot) GetCreated() time.Time {
	if m != nil {
		return m.Created
	}
	return time.Time{}
}

func (m *NetworkSnapshot) GetUpdated() time.Time {
	if m != nil {
		return m.Updated
	}
	return time.Time{}
}

func (m *NetworkSnapshot) GetRefs() []*DeviceSnapshotRef {
	if m != nil {
		return m.Refs
	}
	return nil
}

// DeviceSnapshotRef is a reference to a device snapshot
type DeviceSnapshotRef struct {
	// 'device_snapshot_id' is the unique identifier of the device snapshot
	DeviceSnapshotID onos_onos_config_types_snapshot_device.ID `protobuf:"bytes,1,opt,name=device_snapshot_id,json=deviceSnapshotId,proto3,casttype=onos/onos-config/types/snapshot/device.ID" json:"device_snapshot_id,omitempty"`
}

func (m *DeviceSnapshotRef) Reset()         { *m = DeviceSnapshotRef{} }
func (m *DeviceSnapshotRef) String() string { return proto.CompactTextString(m) }
func (*DeviceSnapshotRef) ProtoMessage()    {}
func (*DeviceSnapshotRef) Descriptor() ([]byte, []int) {
	return fileDescriptor_ca4697bb89e1e55b, []int{1}
}
func (m *DeviceSnapshotRef) XXX_Unmarshal(b []byte) error {
	return m.Unmarshal(b)
}
func (m *DeviceSnapshotRef) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	if deterministic {
		return xxx_messageInfo_DeviceSnapshotRef.Marshal(b, m, deterministic)
	} else {
		b = b[:cap(b)]
		n, err := m.MarshalToSizedBuffer(b)
		if err != nil {
			return nil, err
		}
		return b[:n], nil
	}
}
func (m *DeviceSnapshotRef) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DeviceSnapshotRef.Merge(m, src)
}
func (m *DeviceSnapshotRef) XXX_Size() int {
	return m.Size()
}
func (m *DeviceSnapshotRef) XXX_DiscardUnknown() {
	xxx_messageInfo_DeviceSnapshotRef.DiscardUnknown(m)
}

var xxx_messageInfo_DeviceSnapshotRef proto.InternalMessageInfo

func (m *DeviceSnapshotRef) GetDeviceSnapshotID() onos_onos_config_types_snapshot_device.ID {
	if m != nil {
		return m.DeviceSnapshotID
	}
	return ""
}

func init() {
	proto.RegisterType((*NetworkSnapshot)(nil), "onos.config.snapshot.network.NetworkSnapshot")
	proto.RegisterType((*DeviceSnapshotRef)(nil), "onos.config.snapshot.network.DeviceSnapshotRef")
}

func init() {
	proto.RegisterFile("onos/onos-config/types/snapshot/network/types.proto", fileDescriptor_ca4697bb89e1e55b)
}

var fileDescriptor_ca4697bb89e1e55b = []byte{
	// 430 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x94, 0x92, 0x41, 0x6f, 0xd3, 0x30,
	0x14, 0xc7, 0xeb, 0xb6, 0x2b, 0x8d, 0x37, 0x89, 0x61, 0x71, 0x88, 0xaa, 0x2a, 0x8e, 0x76, 0x40,
	0x41, 0x08, 0x5b, 0xda, 0x6e, 0x1c, 0x90, 0x08, 0xbd, 0x94, 0x03, 0x48, 0x1e, 0xf7, 0x29, 0xab,
	0x9d, 0x60, 0xc1, 0xe2, 0x28, 0x76, 0x07, 0xdc, 0xf9, 0x00, 0xfb, 0x56, 0xec, 0xb8, 0x23, 0xa7,
	0x80, 0xd2, 0x6f, 0xd1, 0x13, 0xb2, 0x13, 0x0f, 0x26, 0x26, 0xa6, 0x5d, 0x9e, 0xac, 0xff, 0xfb,
	0xff, 0x9e, 0xad, 0xff, 0x33, 0x3c, 0x52, 0xa5, 0xd2, 0xd4, 0x96, 0xe7, 0x2b, 0x55, 0xe6, 0xb2,
	0xa0, 0xe6, 0x6b, 0x25, 0x34, 0xd5, 0x65, 0x56, 0xe9, 0x0f, 0xca, 0xd0, 0x52, 0x98, 0xcf, 0xaa,
	0xfe, 0xd8, 0xc9, 0xa4, 0xaa, 0x95, 0x51, 0x68, 0x6e, 0xfd, 0xa4, 0xf3, 0x13, 0xef, 0x24, 0xbd,
	0x73, 0x86, 0x0b, 0xa5, 0x8a, 0x4f, 0x82, 0x3a, 0xef, 0xe9, 0x3a, 0xa7, 0x46, 0x9e, 0x09, 0x6d,
	0xb2, 0xb3, 0xaa, 0xc3, 0x67, 0x8f, 0x0b, 0x55, 0x28, 0x77, 0xa4, 0xf6, 0xd4, 0xab, 0xcf, 0xee,
	0x7a, 0xc9, 0x5f, 0x2f, 0x38, 0xf8, 0x3e, 0x82, 0x0f, 0xdf, 0x76, 0xf7, 0x1d, 0xf7, 0x7d, 0x34,
	0x87, 0x43, 0xc9, 0x43, 0x10, 0x83, 0x24, 0x48, 0xf7, 0xda, 0x06, 0x0f, 0x97, 0x8b, 0xad, 0xab,
	0x6c, 0x28, 0x39, 0xc2, 0x70, 0x47, 0x96, 0x5c, 0x7c, 0x09, 0x87, 0x31, 0x48, 0xc6, 0x69, 0xb0,
	0x6d, 0xf0, 0xce, 0xd2, 0x0a, 0xac, 0xd3, 0x51, 0x02, 0xa7, 0xb5, 0x38, 0x97, 0x5a, 0xaa, 0x32,
	0x1c, 0x39, 0xcf, 0xde, 0xb6, 0xc1, 0x53, 0xd6, 0x6b, 0xec, 0xba, 0x8b, 0x5e, 0xc0, 0x89, 0x36,
	0x99, 0x59, 0xeb, 0x70, 0x1c, 0x83, 0x64, 0xf7, 0x70, 0x4e, 0x6e, 0xcd, 0xe3, 0xd8, 0x79, 0xd2,
	0xf1, 0x65, 0x83, 0x07, 0xac, 0x27, 0xd0, 0x1b, 0x18, 0xd4, 0xc2, 0x88, 0xd2, 0xd8, 0x6b, 0x26,
	0x0e, 0x7f, 0x72, 0x3b, 0xce, 0xbc, 0xed, 0x5d, 0x65, 0xab, 0x1f, 0xf4, 0x07, 0x47, 0x2f, 0xe1,
	0x83, 0x55, 0x2d, 0x32, 0x23, 0x78, 0x38, 0x75, 0x93, 0x66, 0xa4, 0x8b, 0x9e, 0xf8, 0xe8, 0xc9,
	0x7b, 0x1f, 0x7d, 0x3a, 0xb5, 0xf4, 0xc5, 0x4f, 0x0c, 0x98, 0x87, 0x2c, 0xbf, 0xae, 0xb8, 0xe3,
	0x83, 0xfb, 0xf0, 0x3d, 0x84, 0x5e, 0xc3, 0x71, 0x2d, 0x72, 0x1d, 0xc2, 0x78, 0x94, 0xec, 0x1e,
	0x52, 0xf2, 0xbf, 0x5f, 0x41, 0x16, 0xe2, 0x5c, 0xae, 0x84, 0x5f, 0x16, 0x13, 0x39, 0x73, 0xf0,
	0xc1, 0x37, 0x00, 0x1f, 0xfd, 0xd3, 0x43, 0x0a, 0x22, 0xee, 0xc4, 0x13, 0x3f, 0xe8, 0xe4, 0x7a,
	0xb7, 0xaf, 0xda, 0x06, 0xef, 0xdf, 0x44, 0xdc, 0xa6, 0x9f, 0xde, 0xf5, 0x81, 0xba, 0x89, 0x64,
	0xb9, 0x60, 0xfb, 0xfc, 0x26, 0xce, 0xd3, 0xf0, 0xb2, 0x8d, 0xc0, 0x55, 0x1b, 0x81, 0x5f, 0x6d,
	0x04, 0x2e, 0x36, 0xd1, 0xe0, 0x6a, 0x13, 0x0d, 0x7e, 0x6c, 0xa2, 0xc1, 0xe9, 0xc4, 0x85, 0x71,
	0xf4, 0x3b, 0x00, 0x00, 0xff, 0xff, 0x53, 0x25, 0x56, 0x3f, 0x2a, 0x03, 0x00, 0x00,
}

func (m *NetworkSnapshot) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *NetworkSnapshot) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *NetworkSnapshot) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if len(m.Refs) > 0 {
		for iNdEx := len(m.Refs) - 1; iNdEx >= 0; iNdEx-- {
			{
				size, err := m.Refs[iNdEx].MarshalToSizedBuffer(dAtA[:i])
				if err != nil {
					return 0, err
				}
				i -= size
				i = encodeVarintTypes(dAtA, i, uint64(size))
			}
			i--
			dAtA[i] = 0x52
		}
	}
	n1, err1 := github_com_gogo_protobuf_types.StdTimeMarshalTo(m.Updated, dAtA[i-github_com_gogo_protobuf_types.SizeOfStdTime(m.Updated):])
	if err1 != nil {
		return 0, err1
	}
	i -= n1
	i = encodeVarintTypes(dAtA, i, uint64(n1))
	i--
	dAtA[i] = 0x4a
	n2, err2 := github_com_gogo_protobuf_types.StdTimeMarshalTo(m.Created, dAtA[i-github_com_gogo_protobuf_types.SizeOfStdTime(m.Created):])
	if err2 != nil {
		return 0, err2
	}
	i -= n2
	i = encodeVarintTypes(dAtA, i, uint64(n2))
	i--
	dAtA[i] = 0x42
	{
		size, err := m.Retention.MarshalToSizedBuffer(dAtA[:i])
		if err != nil {
			return 0, err
		}
		i -= size
		i = encodeVarintTypes(dAtA, i, uint64(size))
	}
	i--
	dAtA[i] = 0x32
	{
		size, err := m.Status.MarshalToSizedBuffer(dAtA[:i])
		if err != nil {
			return 0, err
		}
		i -= size
		i = encodeVarintTypes(dAtA, i, uint64(size))
	}
	i--
	dAtA[i] = 0x22
	if m.Revision != 0 {
		i = encodeVarintTypes(dAtA, i, uint64(m.Revision))
		i--
		dAtA[i] = 0x18
	}
	if m.Index != 0 {
		i = encodeVarintTypes(dAtA, i, uint64(m.Index))
		i--
		dAtA[i] = 0x10
	}
	if len(m.ID) > 0 {
		i -= len(m.ID)
		copy(dAtA[i:], m.ID)
		i = encodeVarintTypes(dAtA, i, uint64(len(m.ID)))
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func (m *DeviceSnapshotRef) Marshal() (dAtA []byte, err error) {
	size := m.Size()
	dAtA = make([]byte, size)
	n, err := m.MarshalToSizedBuffer(dAtA[:size])
	if err != nil {
		return nil, err
	}
	return dAtA[:n], nil
}

func (m *DeviceSnapshotRef) MarshalTo(dAtA []byte) (int, error) {
	size := m.Size()
	return m.MarshalToSizedBuffer(dAtA[:size])
}

func (m *DeviceSnapshotRef) MarshalToSizedBuffer(dAtA []byte) (int, error) {
	i := len(dAtA)
	_ = i
	var l int
	_ = l
	if len(m.DeviceSnapshotID) > 0 {
		i -= len(m.DeviceSnapshotID)
		copy(dAtA[i:], m.DeviceSnapshotID)
		i = encodeVarintTypes(dAtA, i, uint64(len(m.DeviceSnapshotID)))
		i--
		dAtA[i] = 0xa
	}
	return len(dAtA) - i, nil
}

func encodeVarintTypes(dAtA []byte, offset int, v uint64) int {
	offset -= sovTypes(v)
	base := offset
	for v >= 1<<7 {
		dAtA[offset] = uint8(v&0x7f | 0x80)
		v >>= 7
		offset++
	}
	dAtA[offset] = uint8(v)
	return base
}
func (m *NetworkSnapshot) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	l = len(m.ID)
	if l > 0 {
		n += 1 + l + sovTypes(uint64(l))
	}
	if m.Index != 0 {
		n += 1 + sovTypes(uint64(m.Index))
	}
	if m.Revision != 0 {
		n += 1 + sovTypes(uint64(m.Revision))
	}
	l = m.Status.Size()
	n += 1 + l + sovTypes(uint64(l))
	l = m.Retention.Size()
	n += 1 + l + sovTypes(uint64(l))
	l = github_com_gogo_protobuf_types.SizeOfStdTime(m.Created)
	n += 1 + l + sovTypes(uint64(l))
	l = github_com_gogo_protobuf_types.SizeOfStdTime(m.Updated)
	n += 1 + l + sovTypes(uint64(l))
	if len(m.Refs) > 0 {
		for _, e := range m.Refs {
			l = e.Size()
			n += 1 + l + sovTypes(uint64(l))
		}
	}
	return n
}

func (m *DeviceSnapshotRef) Size() (n int) {
	if m == nil {
		return 0
	}
	var l int
	_ = l
	l = len(m.DeviceSnapshotID)
	if l > 0 {
		n += 1 + l + sovTypes(uint64(l))
	}
	return n
}

func sovTypes(x uint64) (n int) {
	return (math_bits.Len64(x|1) + 6) / 7
}
func sozTypes(x uint64) (n int) {
	return sovTypes(uint64((x << 1) ^ uint64((int64(x) >> 63))))
}
func (m *NetworkSnapshot) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowTypes
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
			return fmt.Errorf("proto: NetworkSnapshot: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: NetworkSnapshot: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field ID", wireType)
			}
			var stringLen uint64
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				stringLen |= uint64(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			intStringLen := int(stringLen)
			if intStringLen < 0 {
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + intStringLen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.ID = ID(dAtA[iNdEx:postIndex])
			iNdEx = postIndex
		case 2:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Index", wireType)
			}
			m.Index = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Index |= Index(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		case 3:
			if wireType != 0 {
				return fmt.Errorf("proto: wrong wireType = %d for field Revision", wireType)
			}
			m.Revision = 0
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				m.Revision |= Revision(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
		case 4:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Status", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
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
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if err := m.Status.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 6:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Retention", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
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
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if err := m.Retention.Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 8:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Created", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
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
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if err := github_com_gogo_protobuf_types.StdTimeUnmarshal(&m.Created, dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 9:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Updated", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
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
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			if err := github_com_gogo_protobuf_types.StdTimeUnmarshal(&m.Updated, dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		case 10:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field Refs", wireType)
			}
			var msglen int
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
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
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + msglen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.Refs = append(m.Refs, &DeviceSnapshotRef{})
			if err := m.Refs[len(m.Refs)-1].Unmarshal(dAtA[iNdEx:postIndex]); err != nil {
				return err
			}
			iNdEx = postIndex
		default:
			iNdEx = preIndex
			skippy, err := skipTypes(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthTypes
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthTypes
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
func (m *DeviceSnapshotRef) Unmarshal(dAtA []byte) error {
	l := len(dAtA)
	iNdEx := 0
	for iNdEx < l {
		preIndex := iNdEx
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return ErrIntOverflowTypes
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
			return fmt.Errorf("proto: DeviceSnapshotRef: wiretype end group for non-group")
		}
		if fieldNum <= 0 {
			return fmt.Errorf("proto: DeviceSnapshotRef: illegal tag %d (wire type %d)", fieldNum, wire)
		}
		switch fieldNum {
		case 1:
			if wireType != 2 {
				return fmt.Errorf("proto: wrong wireType = %d for field DeviceSnapshotID", wireType)
			}
			var stringLen uint64
			for shift := uint(0); ; shift += 7 {
				if shift >= 64 {
					return ErrIntOverflowTypes
				}
				if iNdEx >= l {
					return io.ErrUnexpectedEOF
				}
				b := dAtA[iNdEx]
				iNdEx++
				stringLen |= uint64(b&0x7F) << shift
				if b < 0x80 {
					break
				}
			}
			intStringLen := int(stringLen)
			if intStringLen < 0 {
				return ErrInvalidLengthTypes
			}
			postIndex := iNdEx + intStringLen
			if postIndex < 0 {
				return ErrInvalidLengthTypes
			}
			if postIndex > l {
				return io.ErrUnexpectedEOF
			}
			m.DeviceSnapshotID = onos_onos_config_types_snapshot_device.ID(dAtA[iNdEx:postIndex])
			iNdEx = postIndex
		default:
			iNdEx = preIndex
			skippy, err := skipTypes(dAtA[iNdEx:])
			if err != nil {
				return err
			}
			if skippy < 0 {
				return ErrInvalidLengthTypes
			}
			if (iNdEx + skippy) < 0 {
				return ErrInvalidLengthTypes
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
func skipTypes(dAtA []byte) (n int, err error) {
	l := len(dAtA)
	iNdEx := 0
	depth := 0
	for iNdEx < l {
		var wire uint64
		for shift := uint(0); ; shift += 7 {
			if shift >= 64 {
				return 0, ErrIntOverflowTypes
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
					return 0, ErrIntOverflowTypes
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
					return 0, ErrIntOverflowTypes
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
				return 0, ErrInvalidLengthTypes
			}
			iNdEx += length
		case 3:
			depth++
		case 4:
			if depth == 0 {
				return 0, ErrUnexpectedEndOfGroupTypes
			}
			depth--
		case 5:
			iNdEx += 4
		default:
			return 0, fmt.Errorf("proto: illegal wireType %d", wireType)
		}
		if iNdEx < 0 {
			return 0, ErrInvalidLengthTypes
		}
		if depth == 0 {
			return iNdEx, nil
		}
	}
	return 0, io.ErrUnexpectedEOF
}

var (
	ErrInvalidLengthTypes        = fmt.Errorf("proto: negative length found during unmarshaling")
	ErrIntOverflowTypes          = fmt.Errorf("proto: integer overflow")
	ErrUnexpectedEndOfGroupTypes = fmt.Errorf("proto: unexpected end of group")
)
