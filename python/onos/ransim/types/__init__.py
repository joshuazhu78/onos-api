# Generated by the protocol buffer compiler.  DO NOT EDIT!
# sources: onos/ransim/types/types.proto
# plugin: python-betterproto
from dataclasses import dataclass
from typing import Dict, List

import betterproto


class CellType(betterproto.Enum):
    FEMTO = 0
    ENTERPRISE = 1
    OUTDOOR_SMALL = 2
    MACRO = 3


@dataclass(eq=False, repr=False)
class Point(betterproto.Message):
    lat: float = betterproto.double_field(1)
    lng: float = betterproto.double_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Sector(betterproto.Message):
    azimuth: int = betterproto.int32_field(1)
    arc: int = betterproto.int32_field(2)
    centroid: "Point" = betterproto.message_field(3)
    height: int = betterproto.int32_field(4)
    tilt: int = betterproto.int32_field(5)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Route(betterproto.Message):
    name: int = betterproto.uint64_field(1)
    waypoints: List["Point"] = betterproto.message_field(2)
    color: str = betterproto.string_field(3)
    speed_avg: int = betterproto.uint32_field(4)
    speed_stdev: int = betterproto.uint32_field(5)
    reverse: bool = betterproto.bool_field(6)
    next_point: int = betterproto.uint32_field(7)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Ue(betterproto.Message):
    imsi: int = betterproto.uint64_field(1)
    type: str = betterproto.string_field(2)
    position: "Point" = betterproto.message_field(4)
    rotation: int = betterproto.uint32_field(5)
    serving_tower: int = betterproto.uint64_field(7)
    serving_tower_strength: float = betterproto.double_field(8)
    tower1: int = betterproto.uint64_field(9)
    tower1_strength: float = betterproto.double_field(10)
    tower2: int = betterproto.uint64_field(11)
    tower2_strength: float = betterproto.double_field(12)
    tower3: int = betterproto.uint64_field(13)
    tower3_strength: float = betterproto.double_field(14)
    crnti: int = betterproto.uint32_field(15)
    admitted: bool = betterproto.bool_field(16)
    metrics: "UeMetrics" = betterproto.message_field(17)
    rrc_state: int = betterproto.uint32_field(18)
    five_qi: int = betterproto.int32_field(19)
    ueid: "UeIdentity" = betterproto.message_field(20)
    serving_tower_geometry: float = betterproto.double_field(21)
    serving_tower_sinr: List[float] = betterproto.double_field(22)
    prbs: List[int] = betterproto.uint32_field(23)
    effective_sinr: float = betterproto.double_field(24)
    tb_size: int = betterproto.uint32_field(25)
    downlink_tput: float = betterproto.double_field(26)
    downlink_inst_tput: float = betterproto.double_field(27)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UeIdentity(betterproto.Message):
    guami: "Guami" = betterproto.message_field(1)
    amf_ue_ngap_id: int = betterproto.uint64_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Guami(betterproto.Message):
    plmnid: int = betterproto.uint32_field(1)
    amf_region_id: int = betterproto.uint32_field(2)
    amf_set_id: int = betterproto.uint32_field(3)
    amf_pointer: int = betterproto.uint32_field(4)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UeMetrics(betterproto.Message):
    # Latency (in nanoseconds) of the most recent hand-over
    ho_latency: int = betterproto.int64_field(1)
    # Handover report timestamp (in nanoseconds since epoch)
    ho_report_timestamp: int = betterproto.int64_field(2)
    # flag to indicate the first measurement
    is_first: bool = betterproto.bool_field(3)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Cell(betterproto.Message):
    ecgi: int = betterproto.uint64_field(1)
    location: "Point" = betterproto.message_field(3)
    sector: "Sector" = betterproto.message_field(4)
    color: str = betterproto.string_field(5)
    max_ues: int = betterproto.uint32_field(6)
    neighbors: List[int] = betterproto.uint64_field(7)
    # The cell transmit power in decibels
    tx_power_db: float = betterproto.double_field(8)
    measurement_params: "MeasurementParams" = betterproto.message_field(9)
    # crntis maps a ue's name to its crnti
    crnti_map: Dict[int, int] = betterproto.map_field(
        10, betterproto.TYPE_UINT32, betterproto.TYPE_UINT64
    )
    crnti_index: int = betterproto.uint32_field(11)
    port: int = betterproto.uint32_field(12)
    pci: int = betterproto.uint32_field(13)
    earfcn: int = betterproto.uint32_field(14)
    cell_type: "CellType" = betterproto.enum_field(15)
    rrc_idle_count: int = betterproto.uint32_field(16)
    rrc_connected_count: int = betterproto.uint32_field(17)
    scheduled_ues: List[int] = betterproto.uint64_field(18)
    scheduled_prbs: List[int] = betterproto.uint32_field(19)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class MeasurementParams(betterproto.Message):
    time_to_trigger: int = betterproto.int32_field(1)
    frequency_offset: int = betterproto.int32_field(2)
    pcell_individual_offset: int = betterproto.int32_field(3)
    ncell_individual_offsets: Dict[int, int] = betterproto.map_field(
        4, betterproto.TYPE_UINT64, betterproto.TYPE_INT32
    )
    hysteresis: int = betterproto.int32_field(5)
    event_a3_params: "EventA3Params" = betterproto.message_field(6)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class EventA3Params(betterproto.Message):
    a3_offset: int = betterproto.int32_field(1)
    report_on_leave: bool = betterproto.bool_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class Node(betterproto.Message):
    enbid: int = betterproto.uint32_field(1)
    controllers: List[str] = betterproto.string_field(2)
    service_models: List[str] = betterproto.string_field(3)
    cell_ecgis: List[int] = betterproto.uint64_field(4)
    status: str = betterproto.string_field(5)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class MapLayout(betterproto.Message):
    # Map center latitude and longitude
    center: "Point" = betterproto.message_field(1)
    # The starting Zoom level
    zoom: float = betterproto.float_field(2)
    # Show map as faded on start
    fade: bool = betterproto.bool_field(3)
    # Show routes on start
    show_routes: bool = betterproto.bool_field(4)
    # Show power as circle on start
    show_power: bool = betterproto.bool_field(5)
    # Ratio of random locations diameter to tower grid width
    locations_scale: float = betterproto.float_field(9)
    # FIXME: These are deprecated; remove Max number of UEs for complete
    # simulation
    min_ues: int = betterproto.uint32_field(6)
    # Max number of UEs for complete simulation
    max_ues: int = betterproto.uint32_field(7)
    # the current number of routes
    current_routes: int = betterproto.uint32_field(8)

    def __post_init__(self) -> None:
        super().__post_init__()
