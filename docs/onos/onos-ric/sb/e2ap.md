# Protocol Documentation
<a name="top"></a>

## Table of Contents

- [onos/onos-ric/sb/e2ap.proto](#onos/onos-ric/sb/e2ap.proto)
    - [E2apProtocolIE](#interface.e2ap.E2apProtocolIE)
    - [E2apProtocolIEsPair](#interface.e2ap.E2apProtocolIEsPair)
    - [ProtocolIEContainer](#interface.e2ap.ProtocolIEContainer)
    - [ProtocolIEField](#interface.e2ap.ProtocolIEField)
    - [ProtocolIESingleContainer](#interface.e2ap.ProtocolIESingleContainer)
  
    - [Criticality](#interface.e2ap.Criticality)
    - [Presence](#interface.e2ap.Presence)
    - [ProcedureCode](#interface.e2ap.ProcedureCode)
    - [ProtocolIEId](#interface.e2ap.ProtocolIEId)
    - [TriggeringMessage](#interface.e2ap.TriggeringMessage)
  
- [Scalar Value Types](#scalar-value-types)



<a name="onos/onos-ric/sb/e2ap.proto"></a>
<p align="right"><a href="#top">Top</a></p>

## onos/onos-ric/sb/e2ap.proto
Copyright 2020-present Open Networking Foundation.

Licensed under the Apache License, Version 2.0 (the &#34;License&#34;);
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an &#34;AS IS&#34; BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.


<a name="interface.e2ap.E2apProtocolIE"></a>

### E2apProtocolIE



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [ProtocolIEId](#interface.e2ap.ProtocolIEId) |  |  |
| criticality | [Criticality](#interface.e2ap.Criticality) |  |  |
| presence | [Presence](#interface.e2ap.Presence) |  | value |






<a name="interface.e2ap.E2apProtocolIEsPair"></a>

### E2apProtocolIEsPair



| Field | Type | Label | Description |
| ----- | ---- | ----- | ----------- |
| id | [ProtocolIEId](#interface.e2ap.ProtocolIEId) |  |  |
| firstCriticality | [Criticality](#interface.e2ap.Criticality) |  |  |
| secondCriticality | [Criticality](#interface.e2ap.Criticality) |  | firstValue = 3; |
| presence | [Presence](#interface.e2ap.Presence) |  | secondValue = 5; |






<a name="interface.e2ap.ProtocolIEContainer"></a>

### ProtocolIEContainer







<a name="interface.e2ap.ProtocolIEField"></a>

### ProtocolIEField







<a name="interface.e2ap.ProtocolIESingleContainer"></a>

### ProtocolIESingleContainer






 


<a name="interface.e2ap.Criticality"></a>

### Criticality


| Name | Number | Description |
| ---- | ------ | ----------- |
| REJECT | 0 |  |
| IGNORE | 1 |  |
| NOTIFY | 2 |  |



<a name="interface.e2ap.Presence"></a>

### Presence


| Name | Number | Description |
| ---- | ------ | ----------- |
| OPTIONAL | 0 |  |
| CONDITIONAL | 1 |  |
| MANDATORY | 2 |  |



<a name="interface.e2ap.ProcedureCode"></a>

### ProcedureCode


| Name | Number | Description |
| ---- | ------ | ----------- |
| PC_INVALID | 0 |  |
| E2_SETUP | 1 |  |
| ERROR_INDICATION | 2 |  |
| RESET | 3 |  |
| RIC_CONTROL | 4 |  |
| RIC_INDICATION | 5 |  |
| RIC_SERVICE_QUERY | 6 |  |
| RIC_SERVICE_UPDATE | 7 |  |
| RIC_SUBSCRIPTION | 8 |  |
| RIC_SUBSCRIPTION_DELETE | 9 |  |



<a name="interface.e2ap.ProtocolIEId"></a>

### ProtocolIEId


| Name | Number | Description |
| ---- | ------ | ----------- |
| UNDEFINED | 0 |  |
| CAUSE | 1 |  |
| CRITICALITY_DIAGNOSTICS | 2 |  |
| GLOBAL_E2_NODE_ID | 3 |  |
| GLOBAL_RIC_ID | 4 |  |
| RAN_FUNCTION_ID | 5 |  |
| RAN_FUNCTION_ID_ITEM | 6 |  |
| RAN_FUNCTION_IE_CAUSE_ITEM | 7 |  |
| RAN_FUNCTION_ITEM | 8 |  |
| RAN_FUNCTIONS_ACCEPTED | 9 |  |
| RAN_FUNCTIONS_ADDED | 10 |  |
| RAN_FUNCTIONS_DELETED | 11 |  |
| RAN_FUNCTIONS_MODIFIED | 12 |  |
| RAN_FUNCTIONS_REJECTED | 13 |  |
| RIC_ACTION_ADMITTED_ITEM | 14 |  |
| RIC_ACTION_ID | 15 |  |
| RIC_ACTION_NOT_ADMITTED_ITEM | 16 |  |
| RIC_ACTIONS_ADMITTED | 17 |  |
| RIC_ACTIONS_NOT_ADMITTED | 18 |  |
| RIC_ACTION_TO_BE_SETUP_ITEM | 19 |  |
| RIC_CALL_PROCESS_ID | 20 |  |
| RIC_CONTROL_ACK_REQUEST | 21 |  |
| RIC_CONTROL_HEADER | 22 |  |
| RIC_CONTROL_MESSAGE | 23 |  |
| RIC_CONTROL_STATUS | 24 |  |
| RIC_INDICATION_HEADER | 25 |  |
| RIC_INDICATION_MESSAGE | 26 |  |
| RIC_INDICATION_SN | 27 |  |
| RIC_INDICATION_TYPE | 28 |  |
| RIC_REQUEST_ID | 29 |  |
| RIC_SUBSCRIPTION_DETAILS | 30 |  |
| TIME_TO_WAIT | 31 |  |
| RIC_CONTROL_OUTCOME | 32 |  |



<a name="interface.e2ap.TriggeringMessage"></a>

### TriggeringMessage


| Name | Number | Description |
| ---- | ------ | ----------- |
| INITIATING_MESSAGE | 0 |  |
| SUCCESSFUL_OUTCOME | 1 |  |
| UNSUCCESSFULL_OUTCOME | 2 |  |


 

 

 



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

