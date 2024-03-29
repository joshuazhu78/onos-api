# Protocol Documentation
<a name="top"></a>

## Table of Contents

- [onos/bwp/bwp.proto](#onos_bwp_bwp-proto)
    - [BwpCell](#onos-bwp-BwpCell)
    - [BwpUe](#onos-bwp-BwpUe)
    - [CellResolution](#onos-bwp-CellResolution)
    - [GetCellRequest](#onos-bwp-GetCellRequest)
    - [GetCellResponse](#onos-bwp-GetCellResponse)
    - [GetCellsRequest](#onos-bwp-GetCellsRequest)
    - [GetCellsResponse](#onos-bwp-GetCellsResponse)
    - [GetConflictsRequest](#onos-bwp-GetConflictsRequest)
    - [GetConflictsResponse](#onos-bwp-GetConflictsResponse)
    - [GetResolvedConflictsRequest](#onos-bwp-GetResolvedConflictsRequest)
    - [GetResolvedConflictsResponse](#onos-bwp-GetResolvedConflictsResponse)
    - [GetUeRequest](#onos-bwp-GetUeRequest)
    - [GetUeResponse](#onos-bwp-GetUeResponse)
    - [GetUesRequest](#onos-bwp-GetUesRequest)
    - [GetUesResponse](#onos-bwp-GetUesResponse)
  
    - [CellType](#onos-bwp-CellType)
  
    - [Bwp](#onos-bwp-Bwp)
  
- [Scalar Value Types](#scalar-value-types)



<a name="onos_bwp_bwp-proto"></a>
<p align="right"><a href="#top">Top</a></p>

## onos/bwp/bwp.proto



<a name="onos-bwp-BwpCell"></a>

### BwpCell



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |
| node_id | [string](#string) |  |  |
| arfcn | [uint32](#uint32) |  |  |
| cell_type | [CellType](#onos-bwp-CellType) |  |  |
| bwps | [int32](#int32) | repeated |  |
| neighbor_ids | [uint64](#uint64) | repeated |  |






<a name="onos-bwp-BwpUe"></a>

### BwpUe



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ue_id | [string](#string) |  |  |
| dl_tputs | [int32](#int32) |  |  |






<a name="onos-bwp-CellResolution"></a>

### CellResolution



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [uint64](#uint64) |  |  |
| resolved_bwp | [int32](#int32) | repeated |  |
| original_bwp | [int32](#int32) | repeated |  |
| resolved_conflicts | [uint32](#uint32) |  |  |






<a name="onos-bwp-GetCellRequest"></a>

### GetCellRequest
cell id required


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| cell_id | [uint64](#uint64) |  |  |






<a name="onos-bwp-GetCellResponse"></a>

### GetCellResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| cell | [BwpCell](#onos-bwp-BwpCell) |  |  |






<a name="onos-bwp-GetCellsRequest"></a>

### GetCellsRequest







<a name="onos-bwp-GetCellsResponse"></a>

### GetCellsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| cells | [BwpCell](#onos-bwp-BwpCell) | repeated |  |






<a name="onos-bwp-GetConflictsRequest"></a>

### GetConflictsRequest
if cell id is not specified, will return all cells with conflicts


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| cell_id | [uint64](#uint64) |  |  |






<a name="onos-bwp-GetConflictsResponse"></a>

### GetConflictsResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| cells | [BwpCell](#onos-bwp-BwpCell) | repeated |  |






<a name="onos-bwp-GetResolvedConflictsRequest"></a>

### GetResolvedConflictsRequest







<a name="onos-bwp-GetResolvedConflictsResponse"></a>

### GetResolvedConflictsResponse
returns all the resolved conflicts in the store


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| cells | [CellResolution](#onos-bwp-CellResolution) | repeated |  |






<a name="onos-bwp-GetUeRequest"></a>

### GetUeRequest
ue id required


| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ue_id | [string](#string) |  |  |






<a name="onos-bwp-GetUeResponse"></a>

### GetUeResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ue | [BwpUe](#onos-bwp-BwpUe) |  |  |






<a name="onos-bwp-GetUesRequest"></a>

### GetUesRequest







<a name="onos-bwp-GetUesResponse"></a>

### GetUesResponse



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| ues | [BwpUe](#onos-bwp-BwpUe) | repeated |  |
| reward | [float](#float) |  |  |





 


<a name="onos-bwp-CellType"></a>

### CellType


| Name | Number | Description |
| ---- | ------ | ----------- |
| FEMTO | 0 |  |
| ENTERPRISE | 1 |  |
| OUTDOOR_SMALL | 2 |  |
| MACRO | 3 |  |


 

 


<a name="onos-bwp-Bwp"></a>

### Bwp


| Method Name | Request Type | Response Type | Description |
| ----------- | ------------ | ------------- | ------------|
| GetConflicts | [GetConflictsRequest](#onos-bwp-GetConflictsRequest) | [GetConflictsResponse](#onos-bwp-GetConflictsResponse) |  |
| GetResolvedConflicts | [GetResolvedConflictsRequest](#onos-bwp-GetResolvedConflictsRequest) | [GetResolvedConflictsResponse](#onos-bwp-GetResolvedConflictsResponse) |  |
| GetCell | [GetCellRequest](#onos-bwp-GetCellRequest) | [GetCellResponse](#onos-bwp-GetCellResponse) |  |
| GetCells | [GetCellsRequest](#onos-bwp-GetCellsRequest) | [GetCellsResponse](#onos-bwp-GetCellsResponse) |  |
| GetUe | [GetUeRequest](#onos-bwp-GetUeRequest) | [GetUeResponse](#onos-bwp-GetUeResponse) |  |
| GetUes | [GetUesRequest](#onos-bwp-GetUesRequest) | [GetUesResponse](#onos-bwp-GetUesResponse) |  |

 



## Scalar Value Types

| .proto Type | Notes | C++ | Java | Python | Go | C# | PHP | Ruby |
| ----------- | ----- | --- | ---- | ------ | -- | -- | --- | ---- |
| <a name="double" /> double |  | double | double | float | float64 | double | float | Float |
| <a name="float" /> float |  | float | float | float | float32 | float | float | Float |
| <a name="int32" /> int32 | Uses variable-length encoding. Inefficient for encoding negative numbers – if your field is likely to have negative values, use sint32 instead. | int32 | int | int | int32 | int | integer | Bignum or Fixnum (as required) |
| <a name="int64" /> int64 | Uses variable-length encoding. Inefficient for encoding negative numbers – if your field is likely to have negative values, use sint64 instead. | int64 | long | int/long | int64 | long | integer/string | Bignum |
| <a name="uint32" /> uint32 | Uses variable-length encoding. | uint32 | int | int/long | uint32 | uint | integer | Bignum or Fixnum (as required) |
| <a name="uint64" /> uint64 | Uses variable-length encoding. | uint64 | long | int/long | uint64 | ulong | integer/string | Bignum or Fixnum (as required) |
| <a name="sint32" /> sint32 | Uses variable-length encoding. Signed int value. These more efficiently encode negative numbers than regular int32s. | int32 | int | int | int32 | int | integer | Bignum or Fixnum (as required) |
| <a name="sint64" /> sint64 | Uses variable-length encoding. Signed int value. These more efficiently encode negative numbers than regular int64s. | int64 | long | int/long | int64 | long | integer/string | Bignum |
| <a name="fixed32" /> fixed32 | Always four bytes. More efficient than uint32 if values are often greater than 2^28. | uint32 | int | int | uint32 | uint | integer | Bignum or Fixnum (as required) |
| <a name="fixed64" /> fixed64 | Always eight bytes. More efficient than uint64 if values are often greater than 2^56. | uint64 | long | int/long | uint64 | ulong | integer/string | Bignum |
| <a name="sfixed32" /> sfixed32 | Always four bytes. | int32 | int | int | int32 | int | integer | Bignum or Fixnum (as required) |
| <a name="sfixed64" /> sfixed64 | Always eight bytes. | int64 | long | int/long | int64 | long | integer/string | Bignum |
| <a name="bool" /> bool |  | bool | boolean | boolean | bool | bool | boolean | TrueClass/FalseClass |
| <a name="string" /> string | A string must always contain UTF-8 encoded or 7-bit ASCII text. | string | String | str/unicode | string | string | string | String (UTF-8) |
| <a name="bytes" /> bytes | May contain any arbitrary sequence of bytes. | string | ByteString | str | []byte | ByteString | string | String (ASCII-8BIT) |

