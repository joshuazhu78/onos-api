# Generated by the protocol buffer compiler.  DO NOT EDIT!
# sources: onos/onos-ric/nb/a1/types/types.proto
# plugin: python-betterproto
from dataclasses import dataclass

import betterproto


class PolicyType(betterproto.Enum):
    """PolicyType"""

    QOS = 0
    TSP = 1


class OperationStatus(betterproto.Enum):
    """OperationStatus status of performing an A1 methods"""

    SUCCESS = 0
    FAILED = 1


class EnforcementStatusType(betterproto.Enum):
    """EnforcementStatusType represents if a policy is enforced or not."""

    ENFORCED = 0
    NOT_ENFORCED = 1
    UNDEFINED = 2


class EnforcementReasonType(betterproto.Enum):
    """
    EnforcementReasonType  represents the reason why notification is sent (e.g.
    why enforcement status has changed).
    """

    SCOPE_NOT_APPLICABLE = 0
    STATEMENT_NOT_APPLICABLE = 1
    OTHER_REASON = 2


class PolicyQueryType(betterproto.Enum):
    """
    PolicyQueryType type of a policy query (Query single policy, Query all
    policies, Query policy status)
    """

    # get a single policy based on a given PolicyID
    SINGLE_POLICY = 0
    # get all policies identities
    ALL_POLICIES = 1
    # get the policy status based on a given policyID
    POLICY_STATUS = 2


@dataclass(eq=False, repr=False)
class PolicyId(betterproto.Message):
    """
    PolicyID Identifier of an A1 policy that is used in policy operations.
    """

    id: str = betterproto.string_field(1)

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class CellId(betterproto.Message):
    """CellID an identifier for a single cell"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class UeId(betterproto.Message):
    """UeID an identifier for a single UE"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class GroupId(betterproto.Message):
    """GroupID an identifier for a group of UEs"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class SliceId(betterproto.Message):
    """SliceID an identifier for a slice"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class QosId(betterproto.Message):
    """QoSID an identifier for QoS"""

    pass

    def __post_init__(self) -> None:
        super().__post_init__()


@dataclass(eq=False, repr=False)
class ScopeIdentifier(betterproto.Message):
    """
    ScopeIdentifier Identifier of what the statements in the policy applies to
    (UE, group of UEs, slice, QoS flow, network resource or combinations
    thereof).
    """

    ue_id: "UeId" = betterproto.message_field(1)
    group_id: "GroupId" = betterproto.message_field(2)
    slice_id: "SliceId" = betterproto.message_field(3)
    qos_id: "QosId" = betterproto.message_field(4)
    cell_id: "CellId" = betterproto.message_field(5)

    def __post_init__(self) -> None:
        super().__post_init__()
