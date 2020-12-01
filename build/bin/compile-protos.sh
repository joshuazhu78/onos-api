#!/bin/sh

proto_path="./proto:${GOPATH}/src/github.com/gogo/protobuf/protobuf:${GOPATH}/src/github.com/gogo/protobuf:${GOPATH}/src"

### Documentation generation
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
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2t \
    --doc_opt=markdown,admin.md \
    proto/onos/e2t/admin/admin.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/e2t \
    --doc_opt=markdown,e2.md \
    proto/onos/e2t/e2/e2.proto
protoc --proto_path=$proto_path \
    --doc_out=docs/onos/topo \
    --doc_opt=markdown,topo.md \
    proto/onos/topo/topo.proto

### Go Protobuf code generation
go_import_paths="Mgoogle/protobuf/any.proto=github.com/gogo/protobuf/types,Mgoogle/protobuf/timestamp.proto=github.com/gogo/protobuf/types,Mgoogle/protobuf/duration.proto=github.com/gogo/protobuf/types"

protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2sub/endpoint,plugins=grpc:./go \
    proto/onos/e2sub/endpoint/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2sub/subscription,plugins=grpc:./go \
    proto/onos/e2sub/subscription/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2sub/task,plugins=grpc:./go \
    proto/onos/e2sub/task/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2t/admin,plugins=grpc:./go \
    proto/onos/e2t/admin/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/e2t/e2,plugins=grpc:./go \
    proto/onos/e2t/e2/*.proto
protoc --proto_path=$proto_path \
    --gogofaster_out=$go_import_paths,import_path=onos/topo,plugins=grpc:./go \
    proto/onos/topo/*.proto

### Python Protobuf code generation
protoc --proto_path=$proto_path \
    --python_betterproto_out=./python \
    proto/onos/e2sub/endpoint/endpoint.proto \
    proto/onos/e2sub/subscription/subscription.proto \
    proto/onos/e2sub/task/task.proto \
    proto/onos/e2t/admin/admin.proto \
    proto/onos/e2t/e2/e2.proto \
    proto/onos/topo/topo.proto

mv ./python/onos/e2sub/endpoint/__init__.py ./python/onos/e2sub/endpoint.py && rm -r ./python/onos/e2sub/endpoint
mv ./python/onos/e2sub/subscription/__init__.py ./python/onos/e2sub/subscription.py && rm -r ./python/onos/e2sub/subscription
mv ./python/onos/e2sub/task/__init__.py ./python/onos/e2sub/task.py && rm -r ./python/onos/e2sub/task
mv ./python/onos/e2t/admin/__init__.py ./python/onos/e2t/admin.py && rm -r ./python/onos/e2t/admin
mv ./python/onos/e2t/e2/__init__.py ./python/onos/e2t/e2.py && rm -r ./python/onos/e2t/e2
mv ./python/onos/topo/__init__.py ./python/onos/topo/topo.py && touch ./python/onos/topo/__init__.py