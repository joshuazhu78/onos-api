# Generated by the protocol buffer compiler.  DO NOT EDIT!
# sources: onos/onos-config/types/snapshot/device/types.proto
# plugin: python-betterproto
from dataclasses import dataclass
from datetime import datetime
from typing import List

import betterproto


@dataclass(eq=False, repr=False)
class DeviceSnapshot(betterproto.Message):
    """DeviceSnapshot is a device snapshot"""

    # 'id' is the unique snapshot identifier
    id: str = betterproto.string_field(1)
    # 'device_id' is the device to which the snapshot applies
    device_id: str = betterproto.string_field(2)
    # 'device_version' is the version to which the snapshot applies
    device_version: str = betterproto.string_field(3)
    # 'device_type' is an optional device type to which to apply this change
    device_type: str = betterproto.string_field(4)
    # 'revision' is the request revision number
    revision: int = betterproto.uint64_field(5)
    # 'network_snapshot' is a reference to the network snapshot from which this
    # snapshot was created
    network_snapshot: "NetworkSnapshotRef" = betterproto.message_field(6)
    # 'max_network_change_index' is the maximum network change index to be
    # snapshotted for the device
    max_network_change_index: int = betterproto.uint64_field(7)
    # 'status' is the snapshot status
    status: "__snapshot__.Status" = betterproto.message_field(8)
    # 'created' is the time at which the configuration was created
    created: datetime = betterproto.message_field(9)
    # 'updated' is the time at which the configuration was last updated
    updated: datetime = betterproto.message_field(10)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class NetworkSnapshotRef(betterproto.Message):
    """
    NetworkSnapshotRef is a back reference to the NetworkSnapshot that created
    a DeviceSnapshot
    """

    # 'id' is the identifier of the network snapshot from which this snapshot was
    # created
    id: str = betterproto.string_field(1)
    # 'index' is the index of the network snapshot from which this snapshot was
    # created
    index: int = betterproto.uint64_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Snapshot(betterproto.Message):
    """Snapshot is a snapshot of the state of a single device"""

    # 'id' is a unique snapshot identifier
    id: str = betterproto.string_field(1)
    # 'device_id' is the device to which the snapshot applies
    device_id: str = betterproto.string_field(2)
    # 'device_version' is the version to which the snapshot applies
    device_version: str = betterproto.string_field(3)
    # 'device_type' is an optional device type to which to apply this change
    device_type: str = betterproto.string_field(4)
    # 'snapshot_id' is the ID of the snapshot
    snapshot_id: str = betterproto.string_field(5)
    # 'change_index' is the change index at which the snapshot ended
    change_index: int = betterproto.uint64_field(6)
    # 'values' is a list of values to set
    values: List["__change_device__.PathValue"] = betterproto.message_field(7)

    def __post_init__(self) -> None:
        super().__post_init__()


from ... import snapshot as __snapshot__
from ...change import device as __change_device__
