# Generated by the protocol buffer compiler.  DO NOT EDIT!
# sources: onos/bwp/bwp.proto
# plugin: python-betterproto
from dataclasses import dataclass
from typing import List

import betterproto
import grpclib


class CellType(betterproto.Enum):
    FEMTO = 0
    ENTERPRISE = 1
    OUTDOOR_SMALL = 2
    MACRO = 3


@dataclass(eq=False, repr=False)
class GetConflictsRequest(betterproto.Message):
    """if cell id is not specified, will return all cells with conflicts"""

    cell_id: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetConflictsResponse(betterproto.Message):
    cells: List["BwpCell"] = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetResolvedConflictsRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetResolvedConflictsResponse(betterproto.Message):
    """returns all the resolved conflicts in the store"""

    cells: List["CellResolution"] = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CellResolution(betterproto.Message):
    id: int = betterproto.uint64_field(1)
    resolved_bwp: List[int] = betterproto.int32_field(2)
    original_bwp: List[int] = betterproto.int32_field(3)
    resolved_conflicts: int = betterproto.uint32_field(4)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetCellRequest(betterproto.Message):
    """cell id required"""

    cell_id: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetCellResponse(betterproto.Message):
    cell: "BwpCell" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetCellsRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetCellsResponse(betterproto.Message):
    cells: List["BwpCell"] = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class BwpCell(betterproto.Message):
    id: int = betterproto.uint64_field(1)
    node_id: str = betterproto.string_field(2)
    arfcn: int = betterproto.uint32_field(3)
    cell_type: "CellType" = betterproto.enum_field(4)
    bwps: List[int] = betterproto.int32_field(5)
    neighbor_ids: List[int] = betterproto.uint64_field(7)

    def __post_init__(self) -> None:
        super().__post_init__()


class BwpStub(betterproto.ServiceStub):
    async def get_conflicts(self, *, cell_id: int = 0) -> "GetConflictsResponse":

        request = GetConflictsRequest()
        request.cell_id = cell_id

        return await self._unary_unary(
            "/onos.bwp.Bwp/GetConflicts", request, GetConflictsResponse
        )

    async def get_resolved_conflicts(self) -> "GetResolvedConflictsResponse":

        request = GetResolvedConflictsRequest()

        return await self._unary_unary(
            "/onos.bwp.Bwp/GetResolvedConflicts", request, GetResolvedConflictsResponse
        )

    async def get_cell(self, *, cell_id: int = 0) -> "GetCellResponse":

        request = GetCellRequest()
        request.cell_id = cell_id

        return await self._unary_unary(
            "/onos.bwp.Bwp/GetCell", request, GetCellResponse
        )

    async def get_cells(self) -> "GetCellsResponse":

        request = GetCellsRequest()

        return await self._unary_unary(
            "/onos.bwp.Bwp/GetCells", request, GetCellsResponse
        )
