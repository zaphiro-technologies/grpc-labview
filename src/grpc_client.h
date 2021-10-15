//---------------------------------------------------------------------
// LabVIEW implementation of a gRPC Server
//---------------------------------------------------------------------
#pragma once

//---------------------------------------------------------------------
//---------------------------------------------------------------------
#include <metadata_owner.h>

namespace grpc_labview 
{
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    class LabVIEWgRPCClient : public MessageElementMetadataOwner, public LVgRPCid
    {
    public:
        LabVIEWgRPCClient(const char* address, const char* serverCertificatePath, const char* serverKeyPath);
    };
}