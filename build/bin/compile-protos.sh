#!/bin/sh

proto_path="./proto:${GOPATH}/src/github.com/gogo/protobuf/protobuf:${GOPATH}/src/github.com/gogo/protobuf:${GOPATH}/src"

### Documentation generation

# onos-ric
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/onos-ric/sb \
    --doc_opt=markdown,e2ap.md \
    proto/onos/onos-ric/sb/e2ap.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/onos-ric/sb \
    --doc_opt=markdown,e2-interface.md \
    proto/onos/onos-ric/sb/e2-interface.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/onos-ric/sb/e2ap \
    --doc_opt=markdown,e2ap.md \
    proto/onos/onos-ric/sb/e2ap/e2ap.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/onos-ric/sb/e2sm \
    --doc_opt=markdown,e2sm.md \
    proto/onos/onos-ric/sb/e2sm/e2sm.proto

# e2sub
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2sub \
    --doc_opt=markdown,endpoint.md \
    proto/onos/e2sub/endpoint/endpoint.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2sub \
    --doc_opt=markdown,subscription.md \
    proto/onos/e2sub/subscription/subscription.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2sub \
    --doc_opt=markdown,task.md \
    proto/onos/e2sub/task/task.proto

# e2t
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2t \
    --doc_opt=markdown,admin.md \
    proto/onos/e2t/admin/admin.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2t \
    --doc_opt=markdown,e2.md \
    proto/onos/e2t/e2/e2.proto

# topo
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/topo \
    --doc_opt=markdown,topo.md \
    proto/onos/topo/topo.proto

#configmodel
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/configmodel \
    --doc_opt=markdown,registry.md \
    proto/onos/configmodel/registry.proto

# kpimon
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/kpimon \
    --doc_opt=markdown,kpimon.md \
    proto/onos/kpimon/kpimon.proto

# ransim
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/ransim \
    --doc_opt=markdown,metrics.md \
    proto/onos/ransim/metrics/metrics.proto


protoc --proto_path=$proto_path \
    --doc_out=docs/onos/ransim \
    --doc_opt=markdown,model.md \
    proto/onos/ransim/model/model.proto

protoc --proto_path=$proto_path \
    --doc_out=docs/onos/ransim \
    --doc_opt=markdown,trafficsim.md \
    proto/onos/ransim/trafficsim/trafficsim.proto

protoc --proto_path=$proto_path \
    --doc_out=docs/onos/ransim \
    --doc_opt=markdown,types.md \
    proto/onos/ransim/types/types.proto


### Go Protobuf code generation
go_import_paths="Mgoogle/protobuf/any.proto=github.com/gogo/protobuf/types"
go_import_paths="${go_import_paths},Mgoogle/protobuf/timestamp.proto=github.com/gogo/protobuf/types"
go_import_paths="${go_import_paths},Mgoogle/protobuf/duration.proto=github.com/gogo/protobuf/types"
go_import_paths="${go_import_paths},Monos/ransim/types/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/ransim/types"
go_import_paths="${go_import_paths},Monos/onos-ric/sb/e2ap/e2ap.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/sb/e2ap"
go_import_paths="${go_import_paths},Monos/onos-ric/sb/e2sm/e2sm.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/sb/e2sm"
go_import_paths="${go_import_paths},Monos/onos-ric/sb/e2ap.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/sb"
go_import_paths="${go_import_paths},Monos/onos-ric/sb/e2-interface.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/sb"
go_import_paths="${go_import_paths},Monos/onos-ric/nb/c1-interface.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/nb"
go_import_paths="${go_import_paths},Monos/onos-ric/nb/a1/a1-p/qos/qos.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/nb/a1/a1-p/qos"
go_import_paths="${go_import_paths},Monos/onos-ric/nb/a1/a1-p/tsp/tsp.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/nb/a1/a1-p/tsp"
go_import_paths="${go_import_paths},Monos/onos-ric/nb/a1/types/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/nb/a1/types"
go_import_paths="${go_import_paths},Monos/onos-ric/nb/apps/types/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-ric/nb/apps/types"
go_import_paths="${go_import_paths},Monos/ran-simulator/types/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/ran-simulator/types"
go_import_paths="${go_import_paths},Monos/gnmi/gnmi_ext/gnmi_ext.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/gnmi/gnmi_ext"
go_import_paths="${go_import_paths},Monos/gnmi/gnmi/gnmi.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/gnmi/gnmi"
go_import_paths="${go_import_paths},Monos/onos-config/types/change/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/change"
go_import_paths="${go_import_paths},Monos/onos-config/types/change/device/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/change/device"
go_import_paths="${go_import_paths},Monos/onos-config/types/change/network/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/change/network"
go_import_paths="${go_import_paths},Monos/onos-config/types/snapshot/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/snapshot"
go_import_paths="${go_import_paths},Monos/onos-config/types/snapshot/device/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/snapshot/device"
go_import_paths="${go_import_paths},Monos/onos-config/types/snapshot/network/types.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/types/snapshot/network"
go_import_paths="${go_import_paths},Monos/onos-config/admin.proto=gitlab.devtools.intel.com/ric-sdk/onos-api/go/onos/onos-config/admin"
# e2sub
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2sub/endpoint,plugins=grpc:./go \
    proto/onos/e2sub/endpoint/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2sub/subscription,plugins=grpc:./go \
    proto/onos/e2sub/subscription/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2sub/task,plugins=grpc:./go \
    proto/onos/e2sub/task/*.proto

# e2t
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2t/admin,plugins=grpc:./go \
    proto/onos/e2t/admin/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2t/e2,plugins=grpc:./go \
    proto/onos/e2t/e2/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/topo,plugins=grpc:./go \
    proto/onos/topo/*.proto

#configmodel
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/configmodel,plugins=grpc:./go \
    proto/onos/configmodel/*.proto

# kpimon
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/kpimon,plugins=grpc:./go \
    proto/onos/kpimon/*.proto

# ransim
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/ransim/metrics,plugins=grpc:./go \
    proto/onos/ransim/metrics/*.proto

protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/ransim/model,plugins=grpc:./go \
    proto/onos/ransim/model/*.proto

protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/ransim/trafficsim,plugins=grpc:./go \
    proto/onos/ransim/trafficsim/*.proto

protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/ransim/types,plugins=grpc:./go \
    proto/onos/ransim/types/*.proto

# onos-ric
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/sb,plugins=grpc:./go \
    proto/onos/onos-ric/sb/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/sb/e2ap,plugins=grpc:./go \
    proto/onos/onos-ric/sb/e2ap/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/sb/e2sm,plugins=grpc:./go \
    proto/onos/onos-ric/sb/e2sm/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb,plugins=grpc:./go \
    proto/onos/onos-ric/nb/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb/a1/types,plugins=grpc:./go \
    proto/onos/onos-ric/nb/a1/types/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb/a1/a1-p/qos,plugins=grpc:./go \
    proto/onos/onos-ric/nb/a1/a1-p/qos/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb/a1/a1-p/tsp,plugins=grpc:./go \
    proto/onos/onos-ric/nb/a1/a1-p/tsp/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb/a1,plugins=grpc:./go \
    proto/onos/onos-ric/nb/a1/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb/apps/types,plugins=grpc:./go \
    proto/onos/onos-ric/nb/apps/types/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-ric/nb/apps/ricapps_son,plugins=grpc:./go \
    proto/onos/onos-ric/nb/apps/*.proto

# ran-simulator
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/ran-simulator/types,plugins=grpc:./go \
    proto/onos/ran-simulator/types/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/ran-simulator/trafficsim,plugins=grpc:./go \
    proto/onos/ran-simulator/trafficsim/*.proto

# gnmi
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/gnmi/gnmi_ext,plugins=grpc:./go \
    proto/onos/gnmi/gnmi_ext/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/gnmi/gnmi,plugins=grpc:./go \
    proto/onos/gnmi/gnmi/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/gnmi/target,plugins=grpc:./go \
    proto/onos/gnmi/target/*.proto

# onos-config
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/types/change/types,plugins=grpc:./go \
    proto/onos/onos-config/types/change/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/types/change/device,plugins=grpc:./go \
    proto/onos/onos-config/types/change/device/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/types/change/network,plugins=grpc:./go \
    proto/onos/onos-config/types/change/network/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/types/snapshot/types,plugins=grpc:./go \
    proto/onos/onos-config/types/snapshot/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/types/snapshot/device,plugins=grpc:./go \
    proto/onos/onos-config/types/snapshot/device/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/types/snapshot/network,plugins=grpc:./go \
    proto/onos/onos-config/types/snapshot/network/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/admin,plugins=grpc:./go \
    proto/onos/onos-config/admin/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-config/diags,plugins=grpc:./go \
    proto/onos/onos-config/diags/*.proto

# onos-topo
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-topo/admin,plugins=grpc:./go \
    proto/onos/onos-topo/admin/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-topo/device,plugins=grpc:./go \
    proto/onos/onos-topo/device/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-topo/diags,plugins=grpc:./go \
    proto/onos/onos-topo/diags/*.proto

# onos-ztp
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/onos-atp/admin,plugins=grpc:./go \
    proto/onos/onos-ztp/admin/*.proto

### Python Protobuf code generation
# mkdir -p ./python
# protoc --proto_path=$proto_path \
#     --python_betterproto_out=./python \
#     $(find proto -name "*.proto")
