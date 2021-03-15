# Generated by the protocol buffer compiler.  DO NOT EDIT!
# sources: onos/onos-ric/sb/e2ap.proto, onos/onos-ric/sb/e2ap/e2ap.proto
# plugin: python-betterproto
from dataclasses import dataclass
from typing import AsyncIterable, AsyncIterator, Iterable, Optional, Union

import betterproto
import grpclib


class Criticality(betterproto.Enum):
    REJECT = 0
    IGNORE = 1
    NOTIFY = 2


class Presence(betterproto.Enum):
    OPTIONAL = 0
    CONDITIONAL = 1
    MANDATORY = 2


class TriggeringMessage(betterproto.Enum):
    INITIATING_MESSAGE = 0
    SUCCESSFUL_OUTCOME = 1
    UNSUCCESSFULL_OUTCOME = 2


class ProcedureCode(betterproto.Enum):
    PC_INVALID = 0
    E2_SETUP = 1
    ERROR_INDICATION = 2
    RESET = 3
    RIC_CONTROL = 4
    RIC_INDICATION = 5
    RIC_SERVICE_QUERY = 6
    RIC_SERVICE_UPDATE = 7
    RIC_SUBSCRIPTION = 8
    RIC_SUBSCRIPTION_DELETE = 9


class ProtocolIeId(betterproto.Enum):
    UNDEFINED = 0
    CAUSE = 1
    CRITICALITY_DIAGNOSTICS = 2
    GLOBAL_E2_NODE_ID = 3
    GLOBAL_RIC_ID = 4
    RAN_FUNCTION_ID = 5
    RAN_FUNCTION_ID_ITEM = 6
    RAN_FUNCTION_IE_CAUSE_ITEM = 7
    RAN_FUNCTION_ITEM = 8
    RAN_FUNCTIONS_ACCEPTED = 9
    RAN_FUNCTIONS_ADDED = 10
    RAN_FUNCTIONS_DELETED = 11
    RAN_FUNCTIONS_MODIFIED = 12
    RAN_FUNCTIONS_REJECTED = 13
    RIC_ACTION_ADMITTED_ITEM = 14
    RIC_ACTION_ID = 15
    RIC_ACTION_NOT_ADMITTED_ITEM = 16
    RIC_ACTIONS_ADMITTED = 17
    RIC_ACTIONS_NOT_ADMITTED = 18
    RIC_ACTION_TO_BE_SETUP_ITEM = 19
    RIC_CALL_PROCESS_ID = 20
    RIC_CONTROL_ACK_REQUEST = 21
    RIC_CONTROL_HEADER = 22
    RIC_CONTROL_MESSAGE = 23
    RIC_CONTROL_STATUS = 24
    RIC_INDICATION_HEADER = 25
    RIC_INDICATION_MESSAGE = 26
    RIC_INDICATION_SN = 27
    RIC_INDICATION_TYPE = 28
    RIC_REQUEST_ID = 29
    RIC_SUBSCRIPTION_DETAILS = 30
    TIME_TO_WAIT = 31
    RIC_CONTROL_OUTCOME = 32


@dataclass(eq=False, repr=False)
class E2ApProtocolIe(betterproto.Message):
    id: "ProtocolIeId" = betterproto.enum_field(1)
    criticality: "Criticality" = betterproto.enum_field(2)
    # value
    presence: "Presence" = betterproto.enum_field(3)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class E2ApProtocolIEsPair(betterproto.Message):
    id: "ProtocolIeId" = betterproto.enum_field(1)
    first_criticality: "Criticality" = betterproto.enum_field(2)
    # firstValue = 3;
    second_criticality: "Criticality" = betterproto.enum_field(4)
    # secondValue = 5;
    presence: "Presence" = betterproto.enum_field(6)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ProtocolIeContainer(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ProtocolIeSingleContainer(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ProtocolIeField(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class RicSubscriptionRequest(betterproto.Message):
    hdr: "_e2_sm__.RicSubscriptionHeader" = betterproto.message_field(1)
    msg: "_e2_sm__.RicSubscriptionMessage" = betterproto.message_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class RicSubscriptionResponse(betterproto.Message):
    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class RicIndication(betterproto.Message):
    hdr: "_e2_sm__.RicIndicationHeader" = betterproto.message_field(1)
    msg: "_e2_sm__.RicIndicationMessage" = betterproto.message_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class RicControlRequest(betterproto.Message):
    hdr: "_e2_sm__.RicControlHeader" = betterproto.message_field(1)
    msg: "_e2_sm__.RicControlMessage" = betterproto.message_field(2)

    def __post_init__(self) -> None:
        super().__post_init__()


class E2ApStub(betterproto.ServiceStub):
    async def ric_subscribe(
        self,
        *,
        hdr: "_e2_sm__.RicSubscriptionHeader" = None,
        msg: "_e2_sm__.RicSubscriptionMessage" = None,
    ) -> "RicSubscriptionResponse":

        request = RicSubscriptionRequest()
        if hdr is not None:
            request.hdr = hdr
        if msg is not None:
            request.msg = msg

        return await self._unary_unary(
            "/interface.e2ap.E2AP/RicSubscribe", request, RicSubscriptionResponse
        )

    async def ric_chan(
        self,
        request_iterator: Union[
            AsyncIterable["RicControlRequest"], Iterable["RicControlRequest"]
        ],
    ) -> AsyncIterator["RicIndication"]:

        async for response in self._stream_stream(
            "/interface.e2ap.E2AP/RicChan",
            request_iterator,
            RicControlRequest,
            RicIndication,
        ):
            yield response


from .. import e2sm as _e2_sm__
