# Generated by the protocol buffer compiler.  DO NOT EDIT!
# sources: onos/ransim/model/model.proto
# plugin: python-betterproto
from dataclasses import dataclass
from typing import AsyncIterator, List, Optional

import betterproto
import grpclib


class EventType(betterproto.Enum):
    """Change event type"""

    # NONE indicates this response represents a pre-existing entity
    NONE = 0
    # CREATED indicates a new entity was created
    CREATED = 1
    # UPDATED indicates an existing entity was updated
    UPDATED = 2
    # DELETED indicates an entity was deleted
    DELETED = 3


@dataclass(eq=False, repr=False)
class DataSet(betterproto.Message):
    type: str = betterproto.string_field(1)
    data: bytes = betterproto.bytes_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class LoadRequest(betterproto.Message):
    data_set: List["DataSet"] = betterproto.message_field(1)
    resume: bool = betterproto.bool_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class LoadResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ClearRequest(betterproto.Message):
    resume: bool = betterproto.bool_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ClearResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class PlmnIdRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class PlmnIdResponse(betterproto.Message):
    plmnid: int = betterproto.uint32_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CreateNodeRequest(betterproto.Message):
    """CreateNodeRequest create a node request"""

    node: "_types__.Node" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CreateNodeResponse(betterproto.Message):
    """CreateNodeResponse create a node response"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetNodeRequest(betterproto.Message):
    """GetNodeRequest get a node request"""

    enbid: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetNodeResponse(betterproto.Message):
    """GetNodeResponse get a node response"""

    node: "_types__.Node" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UpdateNodeRequest(betterproto.Message):
    """UpdateNodeRequest update a node request"""

    node: "_types__.Node" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UpdateNodeResponse(betterproto.Message):
    """UpdateNodeResponse update a node response"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteNodeRequest(betterproto.Message):
    """DeleteNodeRequest delete a node request"""

    enbid: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteNodeResponse(betterproto.Message):
    """DeleteNodeResponse delete a node response"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListNodesRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListNodesResponse(betterproto.Message):
    node: "_types__.Node" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchNodesRequest(betterproto.Message):
    no_replay: bool = betterproto.bool_field(1)
    no_subscribe: bool = betterproto.bool_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchNodesResponse(betterproto.Message):
    node: "_types__.Node" = betterproto.message_field(1)
    type: "EventType" = betterproto.enum_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class AgentControlRequest(betterproto.Message):
    enbid: int = betterproto.uint64_field(1)
    command: str = betterproto.string_field(2)
    args: List[str] = betterproto.string_field(3)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class AgentControlResponse(betterproto.Message):
    node: "_types__.Node" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CreateCellRequest(betterproto.Message):
    cell: "_types__.Cell" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CreateCellResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetCellRequest(betterproto.Message):
    ecgi: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetCellResponse(betterproto.Message):
    cell: "_types__.Cell" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UpdateCellRequest(betterproto.Message):
    cell: "_types__.Cell" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UpdateCellResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteCellRequest(betterproto.Message):
    enbid: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteCellResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchCellsRequest(betterproto.Message):
    no_replay: bool = betterproto.bool_field(1)
    no_subscribe: bool = betterproto.bool_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchCellsResponse(betterproto.Message):
    cell: "_types__.Cell" = betterproto.message_field(1)
    type: "EventType" = betterproto.enum_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListCellsRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListCellsResponse(betterproto.Message):
    cell: "_types__.Cell" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CreateRouteRequest(betterproto.Message):
    route: "_types__.Route" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CreateRouteResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetRouteRequest(betterproto.Message):
    imsi: int = betterproto.uint32_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetRouteResponse(betterproto.Message):
    route: "_types__.Route" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteRouteRequest(betterproto.Message):
    imsi: int = betterproto.uint64_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteRouteResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchRoutesRequest(betterproto.Message):
    no_replay: bool = betterproto.bool_field(1)
    no_subscribe: bool = betterproto.bool_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchRoutesResponse(betterproto.Message):
    route: "_types__.Route" = betterproto.message_field(1)
    type: "EventType" = betterproto.enum_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListRoutesRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListRoutesResponse(betterproto.Message):
    route: "_types__.Route" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetUeRequest(betterproto.Message):
    imsi: int = betterproto.uint32_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetUeResponse(betterproto.Message):
    ue: "_types__.Ue" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class MoveToCellRequest(betterproto.Message):
    imsi: int = betterproto.uint32_field(1)
    ecgi: int = betterproto.uint32_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class MoveToCellResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class MoveToLocationRequest(betterproto.Message):
    imsi: int = betterproto.uint32_field(1)
    location: "_types__.Point" = betterproto.message_field(2)
    heading: int = betterproto.uint32_field(3)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class MoveToLocationResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteUeRequest(betterproto.Message):
    imsi: int = betterproto.uint32_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class DeleteUeResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchUEsRequest(betterproto.Message):
    no_replay: bool = betterproto.bool_field(1)
    no_subscribe: bool = betterproto.bool_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class WatchUEsResponse(betterproto.Message):
    ue: "_types__.Ue" = betterproto.message_field(1)
    type: "EventType" = betterproto.enum_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListUEsRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ListUEsResponse(betterproto.Message):
    ue: "_types__.Ue" = betterproto.message_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetUeCountRequest(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GetUeCountResponse(betterproto.Message):
    count: int = betterproto.uint32_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class SetUeCountRequest(betterproto.Message):
    count: int = betterproto.uint32_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class SetUeCountResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


class ModelServiceStub(betterproto.ServiceStub):
    """
    ModelService provides means to clear and load node and cell model in bulk
    """

    async def load(
        self, *, data_set: Optional[List["DataSet"]] = None, resume: bool = False
    ) -> "LoadResponse":
        data_set = data_set or []

        request = LoadRequest()
        if data_set is not None:
            request.data_set = data_set
        request.resume = resume

        return await self._unary_unary(
            "/onos.ransim.model.ModelService/Load", request, LoadResponse
        )

    async def clear(self, *, resume: bool = False) -> "ClearResponse":

        request = ClearRequest()
        request.resume = resume

        return await self._unary_unary(
            "/onos.ransim.model.ModelService/Clear", request, ClearResponse
        )


class NodeModelStub(betterproto.ServiceStub):
    """
    NodeModel provides means to create, delete and read simulated RAN nodes.
    """

    async def get_plmn_id(self) -> "PlmnIdResponse":

        request = PlmnIdRequest()

        return await self._unary_unary(
            "/onos.ransim.model.NodeModel/GetPlmnID", request, PlmnIdResponse
        )

    async def create_node(
        self, *, node: "_types__.Node" = None
    ) -> "CreateNodeResponse":

        request = CreateNodeRequest()
        if node is not None:
            request.node = node

        return await self._unary_unary(
            "/onos.ransim.model.NodeModel/CreateNode", request, CreateNodeResponse
        )

    async def get_node(self, *, enbid: int = 0) -> "GetNodeResponse":

        request = GetNodeRequest()
        request.enbid = enbid

        return await self._unary_unary(
            "/onos.ransim.model.NodeModel/GetNode", request, GetNodeResponse
        )

    async def update_node(
        self, *, node: "_types__.Node" = None
    ) -> "UpdateNodeResponse":

        request = UpdateNodeRequest()
        if node is not None:
            request.node = node

        return await self._unary_unary(
            "/onos.ransim.model.NodeModel/UpdateNode", request, UpdateNodeResponse
        )

    async def delete_node(self, *, enbid: int = 0) -> "DeleteNodeResponse":

        request = DeleteNodeRequest()
        request.enbid = enbid

        return await self._unary_unary(
            "/onos.ransim.model.NodeModel/DeleteNode", request, DeleteNodeResponse
        )

    async def watch_nodes(
        self, *, no_replay: bool = False, no_subscribe: bool = False
    ) -> AsyncIterator["WatchNodesResponse"]:

        request = WatchNodesRequest()
        request.no_replay = no_replay
        request.no_subscribe = no_subscribe

        async for response in self._unary_stream(
            "/onos.ransim.model.NodeModel/WatchNodes",
            request,
            WatchNodesResponse,
        ):
            yield response

    async def list_nodes(self) -> AsyncIterator["ListNodesResponse"]:

        request = ListNodesRequest()

        async for response in self._unary_stream(
            "/onos.ransim.model.NodeModel/ListNodes",
            request,
            ListNodesResponse,
        ):
            yield response

    async def agent_control(
        self, *, enbid: int = 0, command: str = "", args: Optional[List[str]] = None
    ) -> "AgentControlResponse":
        args = args or []

        request = AgentControlRequest()
        request.enbid = enbid
        request.command = command
        request.args = args

        return await self._unary_unary(
            "/onos.ransim.model.NodeModel/AgentControl", request, AgentControlResponse
        )


class CellModelStub(betterproto.ServiceStub):
    """
    CellModel provides means to create, delete and read simulated RAN cells.
    """

    async def create_cell(
        self, *, cell: "_types__.Cell" = None
    ) -> "CreateCellResponse":

        request = CreateCellRequest()
        if cell is not None:
            request.cell = cell

        return await self._unary_unary(
            "/onos.ransim.model.CellModel/CreateCell", request, CreateCellResponse
        )

    async def delete_cell(self, *, enbid: int = 0) -> "DeleteCellResponse":

        request = DeleteCellRequest()
        request.enbid = enbid

        return await self._unary_unary(
            "/onos.ransim.model.CellModel/DeleteCell", request, DeleteCellResponse
        )

    async def update_cell(
        self, *, cell: "_types__.Cell" = None
    ) -> "UpdateCellResponse":

        request = UpdateCellRequest()
        if cell is not None:
            request.cell = cell

        return await self._unary_unary(
            "/onos.ransim.model.CellModel/UpdateCell", request, UpdateCellResponse
        )

    async def get_cell(self, *, ecgi: int = 0) -> "GetCellResponse":

        request = GetCellRequest()
        request.ecgi = ecgi

        return await self._unary_unary(
            "/onos.ransim.model.CellModel/GetCell", request, GetCellResponse
        )

    async def watch_cells(
        self, *, no_replay: bool = False, no_subscribe: bool = False
    ) -> AsyncIterator["WatchCellsResponse"]:

        request = WatchCellsRequest()
        request.no_replay = no_replay
        request.no_subscribe = no_subscribe

        async for response in self._unary_stream(
            "/onos.ransim.model.CellModel/WatchCells",
            request,
            WatchCellsResponse,
        ):
            yield response

    async def list_cells(self) -> AsyncIterator["ListCellsResponse"]:

        request = ListCellsRequest()

        async for response in self._unary_stream(
            "/onos.ransim.model.CellModel/ListCells",
            request,
            ListCellsResponse,
        ):
            yield response


class RouteModelStub(betterproto.ServiceStub):
    """
    RouteModel provides means to create, delete and read simulated mobile UE
    routes.
    """

    async def create_route(
        self, *, route: "_types__.Route" = None
    ) -> "CreateRouteResponse":

        request = CreateRouteRequest()
        if route is not None:
            request.route = route

        return await self._unary_unary(
            "/onos.ransim.model.RouteModel/CreateRoute", request, CreateRouteResponse
        )

    async def delete_route(self, *, imsi: int = 0) -> "DeleteRouteResponse":

        request = DeleteRouteRequest()
        request.imsi = imsi

        return await self._unary_unary(
            "/onos.ransim.model.RouteModel/DeleteRoute", request, DeleteRouteResponse
        )

    async def get_route(self, *, imsi: int = 0) -> "GetRouteResponse":

        request = GetRouteRequest()
        request.imsi = imsi

        return await self._unary_unary(
            "/onos.ransim.model.RouteModel/GetRoute", request, GetRouteResponse
        )

    async def watch_routes(
        self, *, no_replay: bool = False, no_subscribe: bool = False
    ) -> AsyncIterator["WatchRoutesResponse"]:

        request = WatchRoutesRequest()
        request.no_replay = no_replay
        request.no_subscribe = no_subscribe

        async for response in self._unary_stream(
            "/onos.ransim.model.RouteModel/WatchRoutes",
            request,
            WatchRoutesResponse,
        ):
            yield response

    async def list_routes(self) -> AsyncIterator["ListRoutesResponse"]:

        request = ListRoutesRequest()

        async for response in self._unary_stream(
            "/onos.ransim.model.RouteModel/ListRoutes",
            request,
            ListRoutesResponse,
        ):
            yield response


class UeModelStub(betterproto.ServiceStub):
    """UEModel provides means to simulate mobile UEs."""

    async def get_ue(self) -> "GetUeResponse":

        request = GetUeRequest()

        return await self._unary_unary(
            "/onos.ransim.model.UEModel/GetUE", request, GetUeResponse
        )

    async def move_to_cell(
        self, *, imsi: int = 0, ecgi: int = 0
    ) -> "MoveToCellResponse":

        request = MoveToCellRequest()
        request.imsi = imsi
        request.ecgi = ecgi

        return await self._unary_unary(
            "/onos.ransim.model.UEModel/MoveToCell", request, MoveToCellResponse
        )

    async def move_to_location(
        self, *, imsi: int = 0, location: "_types__.Point" = None, heading: int = 0
    ) -> "MoveToLocationResponse":

        request = MoveToLocationRequest()
        request.imsi = imsi
        if location is not None:
            request.location = location
        request.heading = heading

        return await self._unary_unary(
            "/onos.ransim.model.UEModel/MoveToLocation", request, MoveToLocationResponse
        )

    async def delete_ue(self) -> "DeleteUeResponse":

        request = DeleteUeRequest()

        return await self._unary_unary(
            "/onos.ransim.model.UEModel/DeleteUE", request, DeleteUeResponse
        )

    async def watch_u_es(
        self, *, no_replay: bool = False, no_subscribe: bool = False
    ) -> AsyncIterator["WatchUEsResponse"]:

        request = WatchUEsRequest()
        request.no_replay = no_replay
        request.no_subscribe = no_subscribe

        async for response in self._unary_stream(
            "/onos.ransim.model.UEModel/WatchUEs",
            request,
            WatchUEsResponse,
        ):
            yield response

    async def list_u_es(self) -> AsyncIterator["ListUEsResponse"]:

        request = ListUEsRequest()

        async for response in self._unary_stream(
            "/onos.ransim.model.UEModel/ListUEs",
            request,
            ListUEsResponse,
        ):
            yield response

    async def get_ue_count(self) -> "GetUeCountResponse":

        request = GetUeCountRequest()

        return await self._unary_unary(
            "/onos.ransim.model.UEModel/GetUECount", request, GetUeCountResponse
        )

    async def set_ue_count(self) -> "SetUeCountResponse":

        request = SetUeCountRequest()

        return await self._unary_unary(
            "/onos.ransim.model.UEModel/SetUECount", request, SetUeCountResponse
        )


from .. import types as _types__
