//
// Auto-generated file by Redfish Schema C Structure Generator.
// https://github.com/DMTF/Redfish-Schema-C-Struct-Generator.
//
//  (C) Copyright 2019-2022 Hewlett Packard Enterprise Development LP<BR>
//
// Copyright Notice:
// Copyright 2019-2022 Distributed Management Task Force, Inc. All rights reserved.
// License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/Redfish-JSON-C-Struct-Converter/blob/master/LICENSE.md
//

#include"Redfish_Port_v1_5_0_CS.h"
#include <stdlib.h>
#include <string.h>
#include <jansson.h>

RedfishCS_bool SupportedRedfishResource (RedfishCS_char *Odata_Type, RedfishCS_char *NameSpace, RedfishCS_char *Version, RedfishCS_char *DataType);
RedfishCS_status CreateCsUriByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_Uri_Data **CsTypeUriData);
RedfishCS_status CreateCsJsonByNode (RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_JSON_Data **CsTypeJsonData);
RedfishCS_status CreateCsUriOrJsonByNode (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateCsUriOrJsonByNodeArray (RedfishCS_void *Cs, json_t *JsonObj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Link *LinkHead);
RedfishCS_status CreateJsonPayloadAndCs (char *JsonRawText, char *ResourceType, char *ResourceVersion, char *TypeName, json_t **JsonObjReturned, void **Cs, int size);
RedfishCS_status GetRedfishPropertyStr (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_char **DstBuffer);
RedfishCS_status GetRedfishPropertyBoolean (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_bool **DstBuffer);
RedfishCS_status GetRedfishPropertyVague (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_Vague **DstBuffer);
RedfishCS_status DestoryCsMemory (RedfishCS_void *rootCs);
RedfishCS_status GetRedfishPropertyInt64 (RedfishCS_void *Cs, json_t *JsonObj, char *Key, RedfishCS_int64 **Dst);
RedfishCS_status InsertJsonStringObj (json_t *JsonObj, char *Key, char *StringValue);
RedfishCS_status InsertJsonLinkObj (json_t *JsonObj, char *Key, RedfishCS_Link *Link);
RedfishCS_status InsertJsonInt64Obj (json_t *ParentJsonObj, char *Key, RedfishCS_int64 *Int64Value);
RedfishCS_status InsertJsonBoolObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool *BoolValue);
RedfishCS_status InsertJsonStringArrayObj (json_t *JsonObj, char *Key, RedfishCS_char_Array *StringValueArray);
RedfishCS_status InsertJsonLinkArrayObj (json_t *JsonObj, char *Key, RedfishCS_Link *LinkArray);
RedfishCS_status InsertJsonInt64ArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_int64_Array *Int64ValueArray);
RedfishCS_status InsertJsonBoolArrayObj (json_t *ParentJsonObj, char *Key, RedfishCS_bool_Array *BoolValueArray);
RedfishCS_status InsertJsonVagueObj (json_t *ParentJsonObj, char *Key, RedfishCS_Vague *VagueValue);
RedfishCS_bool CheckEmptyPropJsonObject(json_t *JsonObj, RedfishCS_uint32 *NumOfProperty);
RedfishCS_status CreateEmptyPropCsJson(RedfishCS_void *Cs, json_t *JsonOj, RedfishCS_char *NodeName, RedfishCS_char *ParentUri, RedfishCS_Type_EmptyProp_CS_Data **CsTypeEmptyPropCS, RedfishCS_uint32 NunmOfProperties);
RedfishCS_status CsEmptyPropLinkToJson(json_t *CsJson, char *Key, RedfishCS_Link *Link);

static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst);
static RedfishCS_status GenOemCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst);
static RedfishCS_status GenStatusCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst);
//
//Generate C structure for #Port.Reset
//
static RedfishCS_status GenResetCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_Reset_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_Reset_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // target
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "target", &(*Dst)->target);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // title
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "title", &(*Dst)->title);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemActionsCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_OemActions_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_OemActions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
//
//Generate C structure for Actions
//
static RedfishCS_status GenActionsCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_Actions_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_Actions_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // #Port.Reset
  Status = GenResetCs (Cs, TempJsonObj, "#Port.Reset", &(*Dst)->Port_Reset);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemActionsCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Redfish_char_Array.
//
static RedfishCS_status GenRedfishCS_char_Array_Element (void *Cs, json_t *JsonArrayObj, RedfishCS_uint64 ArraySize, RedfishCS_char_Array *DstBuffer)
{
  json_t *TempJsonObj;
  RedfishCS_uint64 Index;
  RedfishCS_status Status;
  RedfishCS_char_Array *ThisElement;

  if (DstBuffer == NULL) {
    return RedfishCS_status_invalid_parameter;
  }
  ThisElement = DstBuffer;
  for (Index = 0; Index < ArraySize; Index ++) {
    TempJsonObj = json_array_get (JsonArrayObj, (RedfishCS_int)Index);
    Status = allocateDuplicateStr (Cs, (char *)json_string_value(TempJsonObj), (RedfishCS_void **)&ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for RedfishCS_char_Array
//
static RedfishCS_status GenRedfishCS_char_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_char_Array **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishCS_char_Array), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  Status = GenRedfishCS_char_Array_Element (Cs, TempJsonObj, ArraySize, *Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
Error:;
  return Status;
}
//
//Generate C structure for LLDPReceive
//
static RedfishCS_status GenLLDPReceiveCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_LLDPReceive_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_LLDPReceive_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ChassisId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ChassisId", &(*Dst)->ChassisId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ChassisIdSubtype
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ChassisIdSubtype", &(*Dst)->ChassisIdSubtype);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressIPv4
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ManagementAddressIPv4", &(*Dst)->ManagementAddressIPv4);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressIPv6
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ManagementAddressIPv6", &(*Dst)->ManagementAddressIPv6);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressMAC
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ManagementAddressMAC", &(*Dst)->ManagementAddressMAC);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementVlanId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ManagementVlanId", &(*Dst)->ManagementVlanId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PortId", &(*Dst)->PortId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortIdSubtype
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PortIdSubtype", &(*Dst)->PortIdSubtype);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for LLDPTransmit
//
static RedfishCS_status GenLLDPTransmitCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_LLDPTransmit_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_LLDPTransmit_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ChassisId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ChassisId", &(*Dst)->ChassisId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ChassisIdSubtype
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ChassisIdSubtype", &(*Dst)->ChassisIdSubtype);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressIPv4
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ManagementAddressIPv4", &(*Dst)->ManagementAddressIPv4);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressIPv6
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ManagementAddressIPv6", &(*Dst)->ManagementAddressIPv6);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementAddressMAC
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "ManagementAddressMAC", &(*Dst)->ManagementAddressMAC);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ManagementVlanId
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ManagementVlanId", &(*Dst)->ManagementVlanId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PortId", &(*Dst)->PortId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortIdSubtype
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PortIdSubtype", &(*Dst)->PortIdSubtype);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for Ethernet
//
static RedfishCS_status GenEthernetPropertiesCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_EthernetProperties_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_EthernetProperties_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AssociatedMACAddresses
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "AssociatedMACAddresses", &(*Dst)->AssociatedMACAddresses);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EEEEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "EEEEnabled", &(*Dst)->EEEEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FlowControlConfiguration
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "FlowControlConfiguration", &(*Dst)->FlowControlConfiguration);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FlowControlStatus
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "FlowControlStatus", &(*Dst)->FlowControlStatus);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LLDPEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "LLDPEnabled", &(*Dst)->LLDPEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LLDPReceive
  Status = GenLLDPReceiveCs (Cs, TempJsonObj, "LLDPReceive", &(*Dst)->LLDPReceive);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LLDPTransmit
  Status = GenLLDPTransmitCs (Cs, TempJsonObj, "LLDPTransmit", &(*Dst)->LLDPTransmit);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupportedEthernetCapabilities
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "SupportedEthernetCapabilities", &(*Dst)->SupportedEthernetCapabilities);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // WakeOnLANEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "WakeOnLANEnabled", &(*Dst)->WakeOnLANEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for FibreChannel
//
static RedfishCS_status GenFibreChannelPropertiesCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_FibreChannelProperties_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_FibreChannelProperties_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AssociatedWorldWideNames
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "AssociatedWorldWideNames", &(*Dst)->AssociatedWorldWideNames);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FabricName
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "FabricName", &(*Dst)->FabricName);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NumberDiscoveredRemotePorts
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "NumberDiscoveredRemotePorts", &(*Dst)->NumberDiscoveredRemotePorts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortConnectionType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PortConnectionType", &(*Dst)->PortConnectionType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenFunctionMaxBandwidth_Array_ElementCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPort_V1_5_0_FunctionMaxBandwidth_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPort_V1_5_0_FunctionMaxBandwidth_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AllocationPercent
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "AllocationPercent", &(*Dst)->AllocationPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NetworkDeviceFunction
  InitializeLinkHead (&(*Dst)->NetworkDeviceFunction);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "NetworkDeviceFunction", Cs->Header.ThisUri, &(*Dst)->NetworkDeviceFunction);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPort_V1_5_0_FunctionMaxBandwidth_Array_CS
//
static RedfishCS_status GenFunctionMaxBandwidth_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_FunctionMaxBandwidth_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPort_V1_5_0_FunctionMaxBandwidth_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPort_V1_5_0_FunctionMaxBandwidth_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenFunctionMaxBandwidth_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status GenFunctionMinBandwidth_Array_ElementCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPort_V1_5_0_FunctionMinBandwidth_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPort_V1_5_0_FunctionMinBandwidth_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AllocationPercent
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "AllocationPercent", &(*Dst)->AllocationPercent);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // NetworkDeviceFunction
  InitializeLinkHead (&(*Dst)->NetworkDeviceFunction);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "NetworkDeviceFunction", Cs->Header.ThisUri, &(*Dst)->NetworkDeviceFunction);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPort_V1_5_0_FunctionMinBandwidth_Array_CS
//
static RedfishCS_status GenFunctionMinBandwidth_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_FunctionMinBandwidth_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPort_V1_5_0_FunctionMinBandwidth_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPort_V1_5_0_FunctionMinBandwidth_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenFunctionMinBandwidth_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for GenZ
//
static RedfishCS_status GenGenZCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_GenZ_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_GenZ_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // LPRT
  InitializeLinkHead (&(*Dst)->LPRT);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "LPRT", Cs->Header.ThisUri, &(*Dst)->LPRT);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MPRT
  InitializeLinkHead (&(*Dst)->MPRT);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "MPRT", Cs->Header.ThisUri, &(*Dst)->MPRT);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // VCAT
  InitializeLinkHead (&(*Dst)->VCAT);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "VCAT", Cs->Header.ThisUri, &(*Dst)->VCAT);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for RedfishCS_int64_Array.
//
static RedfishCS_status GenRedfishCS_int64_Array_Element (void *Cs, json_t *JsonArrayObj, RedfishCS_uint64 ArraySize, RedfishCS_int64_Array *DstBuffer)
{
  json_t *TempJsonObj;
  RedfishCS_uint64 Index;
  RedfishCS_status Status;
  RedfishCS_int64_Array *ThisElement;

  if (DstBuffer == NULL) {
    return RedfishCS_status_invalid_parameter;
  }
  ThisElement = DstBuffer;
  for (Index = 0; Index < ArraySize; Index ++) {
    TempJsonObj = json_array_get (JsonArrayObj, (RedfishCS_int)Index);
    if (TempJsonObj == NULL){
      goto Error;
    }
    Status = allocateRecordCsMemory(Cs, sizeof(RedfishCS_uint64), (RedfishCS_void **)&ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for RedfishCS_int64_Array
//
static RedfishCS_status GenRedfishCS_int64_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishCS_int64_Array **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishCS_int64_Array), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  Status = GenRedfishCS_int64_Array_Element (Cs, TempJsonObj, ArraySize, *Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
Error:;
  return Status;
}
static RedfishCS_status GenConfiguredNetworkLink_Array_ElementCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPort_V1_5_0_ConfiguredNetworkLink_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPort_V1_5_0_ConfiguredNetworkLink_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // ConfiguredLinkSpeedGbps
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConfiguredLinkSpeedGbps", &(*Dst)->ConfiguredLinkSpeedGbps);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConfiguredWidth
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConfiguredWidth", &(*Dst)->ConfiguredWidth);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPort_V1_5_0_ConfiguredNetworkLink_Array_CS
//
static RedfishCS_status GenConfiguredNetworkLink_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_ConfiguredNetworkLink_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPort_V1_5_0_ConfiguredNetworkLink_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPort_V1_5_0_ConfiguredNetworkLink_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenConfiguredNetworkLink_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
static RedfishCS_status GenLinkConfiguration_Array_ElementCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishPort_V1_5_0_LinkConfiguration_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishPort_V1_5_0_LinkConfiguration_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AutoSpeedNegotiationCapable
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AutoSpeedNegotiationCapable", &(*Dst)->AutoSpeedNegotiationCapable);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AutoSpeedNegotiationEnabled
  Status = GetRedfishPropertyBoolean (Cs, TempJsonObj, "AutoSpeedNegotiationEnabled", &(*Dst)->AutoSpeedNegotiationEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CapableLinkSpeedGbps
  Status = GenRedfishCS_int64_ArrayCs (Cs, TempJsonObj, "CapableLinkSpeedGbps", &(*Dst)->CapableLinkSpeedGbps);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConfiguredNetworkLinks
  Status = GenConfiguredNetworkLink_ArrayCs (Cs, TempJsonObj, "ConfiguredNetworkLinks", &(*Dst)->ConfiguredNetworkLinks);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishPort_V1_5_0_LinkConfiguration_Array_CS
//
static RedfishCS_status GenLinkConfiguration_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_LinkConfiguration_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishPort_V1_5_0_LinkConfiguration_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishPort_V1_5_0_LinkConfiguration_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenLinkConfiguration_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for Oem
//
static RedfishCS_status GenOemCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Oem_CS **Dst)
{
  RedfishCS_status Status;
  RedfishCS_Type_JSON_Data *CsTypeJson;
  RedfishCS_Type_EmptyProp_CS_Data *CsTypeEmptyPropCS;
  RedfishCS_uint32 NunmOfEmptyPropProperties;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishResource_Oem_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  InitializeLinkHead (&(*Dst)->Prop);

  //
  // Try to create C structure if the property is
  // declared as empty property in schema. The supported property type
  // is string, integer, real, number and boolean.
  //
  if (CheckEmptyPropJsonObject(TempJsonObj, &NunmOfEmptyPropProperties)) {
    Status = CreateEmptyPropCsJson(Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeEmptyPropCS, NunmOfEmptyPropProperties);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeEmptyPropCS->Header.LinkEntry);
  } else {
    Status = CreateCsJsonByNode (Cs, JsonObj, Key, Cs->Header.ThisUri, &CsTypeJson);
    if (Status != RedfishCS_status_success) {
      goto Error;
    }
    InsertTailLink(&(*Dst)->Prop, &CsTypeJson->Header.LinkEntry);
  }
Error:;
  return Status;
}
//
//Generate C structure for Links
//
static RedfishCS_status GenLinksCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_Links_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_Links_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // AssociatedEndpoints
  InitializeLinkHead (&(*Dst)->AssociatedEndpoints);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "AssociatedEndpoints", Cs->Header.ThisUri, &(*Dst)->AssociatedEndpoints);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // AssociatedEndpoints@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "AssociatedEndpoints@odata.count", &(*Dst)->AssociatedEndpointsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Cables
  InitializeLinkHead (&(*Dst)->Cables);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "Cables", Cs->Header.ThisUri, &(*Dst)->Cables);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Cables@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "Cables@odata.count", &(*Dst)->Cablesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectedPorts
  InitializeLinkHead (&(*Dst)->ConnectedPorts);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "ConnectedPorts", Cs->Header.ThisUri, &(*Dst)->ConnectedPorts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectedPorts@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConnectedPorts@odata.count", &(*Dst)->ConnectedPortsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectedSwitchPorts
  InitializeLinkHead (&(*Dst)->ConnectedSwitchPorts);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "ConnectedSwitchPorts", Cs->Header.ThisUri, &(*Dst)->ConnectedSwitchPorts);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectedSwitchPorts@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConnectedSwitchPorts@odata.count", &(*Dst)->ConnectedSwitchPortsodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectedSwitches
  InitializeLinkHead (&(*Dst)->ConnectedSwitches);
  Status = CreateCsUriOrJsonByNodeArray (Cs, TempJsonObj, "ConnectedSwitches", Cs->Header.ThisUri, &(*Dst)->ConnectedSwitches);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ConnectedSwitches@odata.count
  Status = GetRedfishPropertyInt64 (Cs, TempJsonObj, "ConnectedSwitches@odata.count", &(*Dst)->ConnectedSwitchesodata_count);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for OriginOfCondition
//
static RedfishCS_status GenidRefCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, Redfishodatav4_idRef_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(Redfishodatav4_idRef_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // @odata.id
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "@odata.id", &(*Dst)->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status GenCondition_Array_ElementCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, RedfishCS_uint64 Index,  RedfishResource_Condition_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_array_get (JsonObj, (RedfishCS_int)Index);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsZeroMemory(Cs, sizeof(RedfishResource_Condition_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // LogEntry
  InitializeLinkHead (&(*Dst)->LogEntry);
  Status = CreateCsUriOrJsonByNode (Cs, TempJsonObj, "LogEntry", Cs->Header.ThisUri, &(*Dst)->LogEntry);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Message
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Message", &(*Dst)->Message);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MessageArgs
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "MessageArgs", &(*Dst)->MessageArgs);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MessageId
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MessageId", &(*Dst)->MessageId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // OriginOfCondition
  Status = GenidRefCs (Cs, TempJsonObj, "OriginOfCondition", &(*Dst)->OriginOfCondition);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Resolution
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Resolution", &(*Dst)->Resolution);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Severity
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Severity", &(*Dst)->Severity);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Timestamp
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Timestamp", &(*Dst)->Timestamp);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  return RedfishCS_status_success;
Error:;
  return Status;
}
//
//Generate C structure for RedfishResource_Condition_Array_CS
//
static RedfishCS_status GenCondition_ArrayCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Condition_Array_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;
  RedfishCS_uint64 ArraySize;
  RedfishCS_uint64 Index;
  RedfishResource_Condition_Array_CS *ThisElement;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }

  if (json_is_array(TempJsonObj) != RedfishCS_boolean_true) {
    return RedfishCS_status_invalid_parameter;
  }

  ArraySize = json_array_size (TempJsonObj);
  Status = allocateArrayRecordCsMemory(Cs, sizeof (RedfishResource_Condition_Array_CS), ArraySize, (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  if (*Dst == NULL) {
    // Empty array
    return RedfishCS_status_success;
  }
  ThisElement = *Dst;
  for (Index = 0; Index < ArraySize; Index ++) {
    Status = GenCondition_Array_ElementCs(Cs, TempJsonObj, Index, &ThisElement->ArrayValue);
    if (Status != RedfishCS_status_success){
      goto Error;
    }
    ThisElement = ThisElement->Next;
  }
Error:;
  return Status;
}
//
//Generate C structure for Status
//
static RedfishCS_status GenStatusCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishResource_Status_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishResource_Status_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // Conditions
  Status = GenCondition_ArrayCs (Cs, TempJsonObj, "Conditions", &(*Dst)->Conditions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Health
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Health", &(*Dst)->Health);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // HealthRollup
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "HealthRollup", &(*Dst)->HealthRollup);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Oem
  Status = GenOemCs (Cs, TempJsonObj, "Oem", &(*Dst)->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // State
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "State", &(*Dst)->State);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
//
//Generate C structure for SFP
//
static RedfishCS_status GenSFPCs(RedfishPort_V1_5_0_Port_CS *Cs, json_t *JsonObj, char *Key, RedfishPort_V1_5_0_SFP_CS **Dst)
{
  RedfishCS_status Status;
  json_t *TempJsonObj;

  Status = RedfishCS_status_success;
  TempJsonObj = json_object_get(JsonObj, Key);
  if (TempJsonObj == NULL) {
    return RedfishCS_status_not_found;
  }
  Status = allocateRecordCsMemory(Cs, sizeof(RedfishPort_V1_5_0_SFP_CS), (RedfishCS_void **)Dst);
  if (Status != RedfishCS_status_success){
    goto Error;
  }
  // FiberConnectionType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "FiberConnectionType", &(*Dst)->FiberConnectionType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Manufacturer
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Manufacturer", &(*Dst)->Manufacturer);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MediumType
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "MediumType", &(*Dst)->MediumType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PartNumber
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "PartNumber", &(*Dst)->PartNumber);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SerialNumber
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "SerialNumber", &(*Dst)->SerialNumber);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, TempJsonObj, "Status", &(*Dst)->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SupportedSFPTypes
  Status = GenRedfishCS_char_ArrayCs (Cs, TempJsonObj, "SupportedSFPTypes", &(*Dst)->SupportedSFPTypes);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Type
  Status = GetRedfishPropertyStr (Cs, TempJsonObj, "Type", &(*Dst)->Type);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

Error:;
  return Status;
}
static RedfishCS_status CS_To_JSON_ActionsOem(json_t *CsJson, char *Key, RedfishPort_V1_5_0_OemActions_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_ActionsPort_Reset(json_t *CsJson, char *Key, RedfishPort_V1_5_0_Reset_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // target 
  if (InsertJsonStringObj (CsJson, "target", CSPtr->target) != RedfishCS_status_success) {goto Error;}

  // title 
  if (InsertJsonStringObj (CsJson, "title", CSPtr->title) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Actions(json_t *CsJson, char *Key, RedfishPort_V1_5_0_Actions_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Oem
  if (CS_To_JSON_ActionsOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // #Port.Reset
  if (CS_To_JSON_ActionsPort_Reset(CsJson, "#Port.Reset", CSPtr->Port_Reset) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetLLDPReceive(json_t *CsJson, char *Key, RedfishPort_V1_5_0_LLDPReceive_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ChassisId 
  if (InsertJsonStringObj (CsJson, "ChassisId", CSPtr->ChassisId) != RedfishCS_status_success) {goto Error;}

  // ChassisIdSubtype 
  if (InsertJsonStringObj (CsJson, "ChassisIdSubtype", CSPtr->ChassisIdSubtype) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressIPv4 
  if (InsertJsonStringObj (CsJson, "ManagementAddressIPv4", CSPtr->ManagementAddressIPv4) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressIPv6 
  if (InsertJsonStringObj (CsJson, "ManagementAddressIPv6", CSPtr->ManagementAddressIPv6) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressMAC 
  if (InsertJsonStringObj (CsJson, "ManagementAddressMAC", CSPtr->ManagementAddressMAC) != RedfishCS_status_success) {goto Error;}

  // ManagementVlanId 
  if (InsertJsonInt64Obj (CsJson, "ManagementVlanId", CSPtr->ManagementVlanId) != RedfishCS_status_success) {goto Error;}

  // PortId 
  if (InsertJsonStringObj (CsJson, "PortId", CSPtr->PortId) != RedfishCS_status_success) {goto Error;}

  // PortIdSubtype 
  if (InsertJsonStringObj (CsJson, "PortIdSubtype", CSPtr->PortIdSubtype) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_EthernetLLDPTransmit(json_t *CsJson, char *Key, RedfishPort_V1_5_0_LLDPTransmit_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // ChassisId 
  if (InsertJsonStringObj (CsJson, "ChassisId", CSPtr->ChassisId) != RedfishCS_status_success) {goto Error;}

  // ChassisIdSubtype 
  if (InsertJsonStringObj (CsJson, "ChassisIdSubtype", CSPtr->ChassisIdSubtype) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressIPv4 
  if (InsertJsonStringObj (CsJson, "ManagementAddressIPv4", CSPtr->ManagementAddressIPv4) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressIPv6 
  if (InsertJsonStringObj (CsJson, "ManagementAddressIPv6", CSPtr->ManagementAddressIPv6) != RedfishCS_status_success) {goto Error;}

  // ManagementAddressMAC 
  if (InsertJsonStringObj (CsJson, "ManagementAddressMAC", CSPtr->ManagementAddressMAC) != RedfishCS_status_success) {goto Error;}

  // ManagementVlanId 
  if (InsertJsonInt64Obj (CsJson, "ManagementVlanId", CSPtr->ManagementVlanId) != RedfishCS_status_success) {goto Error;}

  // PortId 
  if (InsertJsonStringObj (CsJson, "PortId", CSPtr->PortId) != RedfishCS_status_success) {goto Error;}

  // PortIdSubtype 
  if (InsertJsonStringObj (CsJson, "PortIdSubtype", CSPtr->PortIdSubtype) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Ethernet(json_t *CsJson, char *Key, RedfishPort_V1_5_0_EthernetProperties_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // AssociatedMACAddresses 
  if (InsertJsonStringArrayObj (CsJson, "AssociatedMACAddresses", CSPtr->AssociatedMACAddresses) != RedfishCS_status_success) {goto Error;}

  // EEEEnabled 
  if (InsertJsonBoolObj (CsJson, "EEEEnabled", CSPtr->EEEEnabled) != RedfishCS_status_success) {goto Error;}

  // FlowControlConfiguration 
  if (InsertJsonStringObj (CsJson, "FlowControlConfiguration", CSPtr->FlowControlConfiguration) != RedfishCS_status_success) {goto Error;}

  // FlowControlStatus 
  if (InsertJsonStringObj (CsJson, "FlowControlStatus", CSPtr->FlowControlStatus) != RedfishCS_status_success) {goto Error;}

  // LLDPEnabled 
  if (InsertJsonBoolObj (CsJson, "LLDPEnabled", CSPtr->LLDPEnabled) != RedfishCS_status_success) {goto Error;}

  // LLDPReceive
  if (CS_To_JSON_EthernetLLDPReceive(CsJson, "LLDPReceive", CSPtr->LLDPReceive) != RedfishCS_status_success) {goto Error;}

  // LLDPTransmit
  if (CS_To_JSON_EthernetLLDPTransmit(CsJson, "LLDPTransmit", CSPtr->LLDPTransmit) != RedfishCS_status_success) {goto Error;}

  // SupportedEthernetCapabilities 
  if (InsertJsonStringArrayObj (CsJson, "SupportedEthernetCapabilities", CSPtr->SupportedEthernetCapabilities) != RedfishCS_status_success) {goto Error;}

  // WakeOnLANEnabled 
  if (InsertJsonBoolObj (CsJson, "WakeOnLANEnabled", CSPtr->WakeOnLANEnabled) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_FibreChannel(json_t *CsJson, char *Key, RedfishPort_V1_5_0_FibreChannelProperties_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // AssociatedWorldWideNames 
  if (InsertJsonStringArrayObj (CsJson, "AssociatedWorldWideNames", CSPtr->AssociatedWorldWideNames) != RedfishCS_status_success) {goto Error;}

  // FabricName 
  if (InsertJsonStringObj (CsJson, "FabricName", CSPtr->FabricName) != RedfishCS_status_success) {goto Error;}

  // NumberDiscoveredRemotePorts 
  if (InsertJsonInt64Obj (CsJson, "NumberDiscoveredRemotePorts", CSPtr->NumberDiscoveredRemotePorts) != RedfishCS_status_success) {goto Error;}

  // PortConnectionType 
  if (InsertJsonStringObj (CsJson, "PortConnectionType", CSPtr->PortConnectionType) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_FunctionMaxBandwidth(json_t *CsJson, char *Key, RedfishPort_V1_5_0_FunctionMaxBandwidth_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPort_V1_5_0_FunctionMaxBandwidth_Array_CS *NextArray;
  RedfishPort_V1_5_0_FunctionMaxBandwidth_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // AllocationPercent 
    if (InsertJsonInt64Obj (ArrayMember, "AllocationPercent", NextArrayItem->AllocationPercent) != RedfishCS_status_success) {goto Error;}

    // NetworkDeviceFunction 
    if (InsertJsonLinkObj (ArrayMember, "NetworkDeviceFunction", &NextArrayItem->NetworkDeviceFunction) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_FunctionMinBandwidth(json_t *CsJson, char *Key, RedfishPort_V1_5_0_FunctionMinBandwidth_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPort_V1_5_0_FunctionMinBandwidth_Array_CS *NextArray;
  RedfishPort_V1_5_0_FunctionMinBandwidth_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // AllocationPercent 
    if (InsertJsonInt64Obj (ArrayMember, "AllocationPercent", NextArrayItem->AllocationPercent) != RedfishCS_status_success) {goto Error;}

    // NetworkDeviceFunction 
    if (InsertJsonLinkObj (ArrayMember, "NetworkDeviceFunction", &NextArrayItem->NetworkDeviceFunction) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_GenZ(json_t *CsJson, char *Key, RedfishPort_V1_5_0_GenZ_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // LPRT 
  if (InsertJsonLinkObj (CsJson, "LPRT", &CSPtr->LPRT) != RedfishCS_status_success) {goto Error;}

  // MPRT 
  if (InsertJsonLinkObj (CsJson, "MPRT", &CSPtr->MPRT) != RedfishCS_status_success) {goto Error;}

  // VCAT 
  if (InsertJsonLinkObj (CsJson, "VCAT", &CSPtr->VCAT) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_LinkConfigurationConfiguredNetworkLinks(json_t *CsJson, char *Key, RedfishPort_V1_5_0_ConfiguredNetworkLink_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPort_V1_5_0_ConfiguredNetworkLink_Array_CS *NextArray;
  RedfishPort_V1_5_0_ConfiguredNetworkLink_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // ConfiguredLinkSpeedGbps 
    if (InsertJsonInt64Obj (ArrayMember, "ConfiguredLinkSpeedGbps", NextArrayItem->ConfiguredLinkSpeedGbps) != RedfishCS_status_success) {goto Error;}

    // ConfiguredWidth 
    if (InsertJsonInt64Obj (ArrayMember, "ConfiguredWidth", NextArrayItem->ConfiguredWidth) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_LinkConfiguration(json_t *CsJson, char *Key, RedfishPort_V1_5_0_LinkConfiguration_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishPort_V1_5_0_LinkConfiguration_Array_CS *NextArray;
  RedfishPort_V1_5_0_LinkConfiguration_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // AutoSpeedNegotiationCapable 
    if (InsertJsonBoolObj (ArrayMember, "AutoSpeedNegotiationCapable", NextArrayItem->AutoSpeedNegotiationCapable) != RedfishCS_status_success) {goto Error;}

    // AutoSpeedNegotiationEnabled 
    if (InsertJsonBoolObj (ArrayMember, "AutoSpeedNegotiationEnabled", NextArrayItem->AutoSpeedNegotiationEnabled) != RedfishCS_status_success) {goto Error;}

    // CapableLinkSpeedGbps 
    if (InsertJsonInt64ArrayObj (ArrayMember, "CapableLinkSpeedGbps", NextArrayItem->CapableLinkSpeedGbps) != RedfishCS_status_success) {goto Error;}

    // ConfiguredNetworkLinks
    if (CS_To_JSON_LinkConfigurationConfiguredNetworkLinks(ArrayMember, "ConfiguredNetworkLinks", NextArrayItem->ConfiguredNetworkLinks) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_LinksOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Links(json_t *CsJson, char *Key, RedfishPort_V1_5_0_Links_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // AssociatedEndpoints 
  if (InsertJsonLinkArrayObj (CsJson, "AssociatedEndpoints", &CSPtr->AssociatedEndpoints) != RedfishCS_status_success) {goto Error;}

  // AssociatedEndpoints@odata.count 
  if (InsertJsonInt64Obj (CsJson, "AssociatedEndpoints@odata.count", CSPtr->AssociatedEndpointsodata_count) != RedfishCS_status_success) {goto Error;}

  // Cables 
  if (InsertJsonLinkArrayObj (CsJson, "Cables", &CSPtr->Cables) != RedfishCS_status_success) {goto Error;}

  // Cables@odata.count 
  if (InsertJsonInt64Obj (CsJson, "Cables@odata.count", CSPtr->Cablesodata_count) != RedfishCS_status_success) {goto Error;}

  // ConnectedPorts 
  if (InsertJsonLinkArrayObj (CsJson, "ConnectedPorts", &CSPtr->ConnectedPorts) != RedfishCS_status_success) {goto Error;}

  // ConnectedPorts@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ConnectedPorts@odata.count", CSPtr->ConnectedPortsodata_count) != RedfishCS_status_success) {goto Error;}

  // ConnectedSwitchPorts 
  if (InsertJsonLinkArrayObj (CsJson, "ConnectedSwitchPorts", &CSPtr->ConnectedSwitchPorts) != RedfishCS_status_success) {goto Error;}

  // ConnectedSwitchPorts@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ConnectedSwitchPorts@odata.count", CSPtr->ConnectedSwitchPortsodata_count) != RedfishCS_status_success) {goto Error;}

  // ConnectedSwitches 
  if (InsertJsonLinkArrayObj (CsJson, "ConnectedSwitches", &CSPtr->ConnectedSwitches) != RedfishCS_status_success) {goto Error;}

  // ConnectedSwitches@odata.count 
  if (InsertJsonInt64Obj (CsJson, "ConnectedSwitches@odata.count", CSPtr->ConnectedSwitchesodata_count) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_LinksOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_Oem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_SFPStatusConditionsOriginOfCondition(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SFPStatusConditions(json_t *CsJson, char *Key, RedfishResource_Condition_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishResource_Condition_Array_CS *NextArray;
  RedfishResource_Condition_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // LogEntry 
    if (InsertJsonLinkObj (ArrayMember, "LogEntry", &NextArrayItem->LogEntry) != RedfishCS_status_success) {goto Error;}

    // Message 
    if (InsertJsonStringObj (ArrayMember, "Message", NextArrayItem->Message) != RedfishCS_status_success) {goto Error;}

    // MessageArgs 
    if (InsertJsonStringArrayObj (ArrayMember, "MessageArgs", NextArrayItem->MessageArgs) != RedfishCS_status_success) {goto Error;}

    // MessageId 
    if (InsertJsonStringObj (ArrayMember, "MessageId", NextArrayItem->MessageId) != RedfishCS_status_success) {goto Error;}

    // OriginOfCondition
    if (CS_To_JSON_SFPStatusConditionsOriginOfCondition(ArrayMember, "OriginOfCondition", NextArrayItem->OriginOfCondition) != RedfishCS_status_success) {goto Error;}

    // Resolution 
    if (InsertJsonStringObj (ArrayMember, "Resolution", NextArrayItem->Resolution) != RedfishCS_status_success) {goto Error;}

    // Severity 
    if (InsertJsonStringObj (ArrayMember, "Severity", NextArrayItem->Severity) != RedfishCS_status_success) {goto Error;}

    // Timestamp 
    if (InsertJsonStringObj (ArrayMember, "Timestamp", NextArrayItem->Timestamp) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SFPStatusOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_SFPStatus(json_t *CsJson, char *Key, RedfishResource_Status_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Conditions
  if (CS_To_JSON_SFPStatusConditions(CsJson, "Conditions", CSPtr->Conditions) != RedfishCS_status_success) {goto Error;}

  // Health 
  if (InsertJsonStringObj (CsJson, "Health", CSPtr->Health) != RedfishCS_status_success) {goto Error;}

  // HealthRollup 
  if (InsertJsonStringObj (CsJson, "HealthRollup", CSPtr->HealthRollup) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_SFPStatusOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // State 
  if (InsertJsonStringObj (CsJson, "State", CSPtr->State) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_SFP(json_t *CsJson, char *Key, RedfishPort_V1_5_0_SFP_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // FiberConnectionType 
  if (InsertJsonStringObj (CsJson, "FiberConnectionType", CSPtr->FiberConnectionType) != RedfishCS_status_success) {goto Error;}

  // Manufacturer 
  if (InsertJsonStringObj (CsJson, "Manufacturer", CSPtr->Manufacturer) != RedfishCS_status_success) {goto Error;}

  // MediumType 
  if (InsertJsonStringObj (CsJson, "MediumType", CSPtr->MediumType) != RedfishCS_status_success) {goto Error;}

  // PartNumber 
  if (InsertJsonStringObj (CsJson, "PartNumber", CSPtr->PartNumber) != RedfishCS_status_success) {goto Error;}

  // SerialNumber 
  if (InsertJsonStringObj (CsJson, "SerialNumber", CSPtr->SerialNumber) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_SFPStatus(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

  // SupportedSFPTypes 
  if (InsertJsonStringArrayObj (CsJson, "SupportedSFPTypes", CSPtr->SupportedSFPTypes) != RedfishCS_status_success) {goto Error;}

  // Type 
  if (InsertJsonStringObj (CsJson, "Type", CSPtr->Type) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_StatusConditionsOriginOfCondition(json_t *CsJson, char *Key, Redfishodatav4_idRef_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_StatusConditions(json_t *CsJson, char *Key, RedfishResource_Condition_Array_CS *CSPtr)
{
  json_t *ArrayJson;
  json_t *ArrayMember;
  RedfishResource_Condition_Array_CS *NextArray;
  RedfishResource_Condition_CS *NextArrayItem;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }
  ArrayJson = json_array();
  if (ArrayJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  NextArray = CSPtr;
  do {
    ArrayMember = json_object();
    if (ArrayMember == NULL) {
      return RedfishCS_status_unsupported;
    }

    NextArrayItem = NextArray->ArrayValue;
    // LogEntry 
    if (InsertJsonLinkObj (ArrayMember, "LogEntry", &NextArrayItem->LogEntry) != RedfishCS_status_success) {goto Error;}

    // Message 
    if (InsertJsonStringObj (ArrayMember, "Message", NextArrayItem->Message) != RedfishCS_status_success) {goto Error;}

    // MessageArgs 
    if (InsertJsonStringArrayObj (ArrayMember, "MessageArgs", NextArrayItem->MessageArgs) != RedfishCS_status_success) {goto Error;}

    // MessageId 
    if (InsertJsonStringObj (ArrayMember, "MessageId", NextArrayItem->MessageId) != RedfishCS_status_success) {goto Error;}

    // OriginOfCondition
    if (CS_To_JSON_StatusConditionsOriginOfCondition(ArrayMember, "OriginOfCondition", NextArrayItem->OriginOfCondition) != RedfishCS_status_success) {goto Error;}

    // Resolution 
    if (InsertJsonStringObj (ArrayMember, "Resolution", NextArrayItem->Resolution) != RedfishCS_status_success) {goto Error;}

    // Severity 
    if (InsertJsonStringObj (ArrayMember, "Severity", NextArrayItem->Severity) != RedfishCS_status_success) {goto Error;}

    // Timestamp 
    if (InsertJsonStringObj (ArrayMember, "Timestamp", NextArrayItem->Timestamp) != RedfishCS_status_success) {goto Error;}

    if (json_array_append_new (ArrayJson, ArrayMember) != 0) {goto Error;}
    NextArray = NextArray->Next;
  } while (NextArray != NULL);
  json_object_set_new (CsJson, Key, ArrayJson);

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}
static RedfishCS_status CS_To_JSON_StatusOem(json_t *CsJson, char *Key, RedfishResource_Oem_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Check if this is RedfishCS_Type_CS_EmptyProp.
  CsEmptyPropLinkToJson(CsJson, Key, &CSPtr->Prop);
  // No JSON property for this structure.
  return RedfishCS_status_success;
}
static RedfishCS_status CS_To_JSON_Status(json_t *CsJson, char *Key, RedfishResource_Status_CS *CSPtr)
{
  json_t *CsParentJson;

  if (CSPtr == NULL) {
    return RedfishCS_status_success;
  }

  CsParentJson = CsJson;
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }

  // Conditions
  if (CS_To_JSON_StatusConditions(CsJson, "Conditions", CSPtr->Conditions) != RedfishCS_status_success) {goto Error;}

  // Health 
  if (InsertJsonStringObj (CsJson, "Health", CSPtr->Health) != RedfishCS_status_success) {goto Error;}

  // HealthRollup 
  if (InsertJsonStringObj (CsJson, "HealthRollup", CSPtr->HealthRollup) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_StatusOem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // State 
  if (InsertJsonStringObj (CsJson, "State", CSPtr->State) != RedfishCS_status_success) {goto Error;}

  // Set to parent JSON object.
  if (json_object_set_new (CsParentJson, Key, CsJson) == -1) {goto Error;}

  return RedfishCS_status_success;
Error:;
  return RedfishCS_status_unsupported;
}

//
// C structure to JSON for Port.V1_5_0.Port
//
RedfishCS_status CS_To_Port_V1_5_0_JSON(RedfishPort_V1_5_0_Port_CS *CSPtr, RedfishCS_char **JsonText)
{
  json_t  *CsJson;

  if (CSPtr == NULL || JsonText == NULL || CSPtr->Header.ResourceType != RedfishCS_Type_CS) {
    return RedfishCS_status_invalid_parameter;
  }
  CsJson = json_object();
  if (CsJson == NULL) {
    return RedfishCS_status_unsupported;
  }
  // Actions
  if (CS_To_JSON_Actions(CsJson, "Actions", CSPtr->Actions) != RedfishCS_status_success) {goto Error;}

  // ActiveWidth 
  if (InsertJsonInt64Obj (CsJson, "ActiveWidth", CSPtr->ActiveWidth) != RedfishCS_status_success) {goto Error;}

  // CapableProtocolVersions 
  if (InsertJsonStringArrayObj (CsJson, "CapableProtocolVersions", CSPtr->CapableProtocolVersions) != RedfishCS_status_success) {goto Error;}

  // CurrentProtocolVersion 
  if (InsertJsonStringObj (CsJson, "CurrentProtocolVersion", CSPtr->CurrentProtocolVersion) != RedfishCS_status_success) {goto Error;}

  // CurrentSpeedGbps 
  if (InsertJsonInt64Obj (CsJson, "CurrentSpeedGbps", CSPtr->CurrentSpeedGbps) != RedfishCS_status_success) {goto Error;}

  // Description 
  if (InsertJsonStringObj (CsJson, "Description", CSPtr->Description) != RedfishCS_status_success) {goto Error;}

  // Enabled 
  if (InsertJsonBoolObj (CsJson, "Enabled", CSPtr->Enabled) != RedfishCS_status_success) {goto Error;}

  // EnvironmentMetrics 
  if (InsertJsonLinkObj (CsJson, "EnvironmentMetrics", &CSPtr->EnvironmentMetrics) != RedfishCS_status_success) {goto Error;}

  // Ethernet
  if (CS_To_JSON_Ethernet(CsJson, "Ethernet", CSPtr->Ethernet) != RedfishCS_status_success) {goto Error;}

  // FibreChannel
  if (CS_To_JSON_FibreChannel(CsJson, "FibreChannel", CSPtr->FibreChannel) != RedfishCS_status_success) {goto Error;}

  // FunctionMaxBandwidth
  if (CS_To_JSON_FunctionMaxBandwidth(CsJson, "FunctionMaxBandwidth", CSPtr->FunctionMaxBandwidth) != RedfishCS_status_success) {goto Error;}

  // FunctionMinBandwidth
  if (CS_To_JSON_FunctionMinBandwidth(CsJson, "FunctionMinBandwidth", CSPtr->FunctionMinBandwidth) != RedfishCS_status_success) {goto Error;}

  // GenZ
  if (CS_To_JSON_GenZ(CsJson, "GenZ", CSPtr->GenZ) != RedfishCS_status_success) {goto Error;}

  // Id 
  if (InsertJsonStringObj (CsJson, "Id", CSPtr->Id) != RedfishCS_status_success) {goto Error;}

  // InterfaceEnabled 
  if (InsertJsonBoolObj (CsJson, "InterfaceEnabled", CSPtr->InterfaceEnabled) != RedfishCS_status_success) {goto Error;}

  // LinkConfiguration
  if (CS_To_JSON_LinkConfiguration(CsJson, "LinkConfiguration", CSPtr->LinkConfiguration) != RedfishCS_status_success) {goto Error;}

  // LinkNetworkTechnology 
  if (InsertJsonStringObj (CsJson, "LinkNetworkTechnology", CSPtr->LinkNetworkTechnology) != RedfishCS_status_success) {goto Error;}

  // LinkState 
  if (InsertJsonStringObj (CsJson, "LinkState", CSPtr->LinkState) != RedfishCS_status_success) {goto Error;}

  // LinkStatus 
  if (InsertJsonStringObj (CsJson, "LinkStatus", CSPtr->LinkStatus) != RedfishCS_status_success) {goto Error;}

  // LinkTransitionIndicator 
  if (InsertJsonInt64Obj (CsJson, "LinkTransitionIndicator", CSPtr->LinkTransitionIndicator) != RedfishCS_status_success) {goto Error;}

  // Links
  if (CS_To_JSON_Links(CsJson, "Links", CSPtr->Links) != RedfishCS_status_success) {goto Error;}

  // Location 
  if (InsertJsonLinkObj (CsJson, "Location", &CSPtr->Location) != RedfishCS_status_success) {goto Error;}

  // LocationIndicatorActive 
  if (InsertJsonBoolObj (CsJson, "LocationIndicatorActive", CSPtr->LocationIndicatorActive) != RedfishCS_status_success) {goto Error;}

  // MaxFrameSize 
  if (InsertJsonInt64Obj (CsJson, "MaxFrameSize", CSPtr->MaxFrameSize) != RedfishCS_status_success) {goto Error;}

  // MaxSpeedGbps 
  if (InsertJsonInt64Obj (CsJson, "MaxSpeedGbps", CSPtr->MaxSpeedGbps) != RedfishCS_status_success) {goto Error;}

  // Metrics 
  if (InsertJsonLinkObj (CsJson, "Metrics", &CSPtr->Metrics) != RedfishCS_status_success) {goto Error;}

  // Name 
  if (InsertJsonStringObj (CsJson, "Name", CSPtr->Name) != RedfishCS_status_success) {goto Error;}

  // Oem
  if (CS_To_JSON_Oem(CsJson, "Oem", CSPtr->Oem) != RedfishCS_status_success) {goto Error;}

  // PortId 
  if (InsertJsonStringObj (CsJson, "PortId", CSPtr->PortId) != RedfishCS_status_success) {goto Error;}

  // PortMedium 
  if (InsertJsonStringObj (CsJson, "PortMedium", CSPtr->PortMedium) != RedfishCS_status_success) {goto Error;}

  // PortProtocol 
  if (InsertJsonStringObj (CsJson, "PortProtocol", CSPtr->PortProtocol) != RedfishCS_status_success) {goto Error;}

  // PortType 
  if (InsertJsonStringObj (CsJson, "PortType", CSPtr->PortType) != RedfishCS_status_success) {goto Error;}

  // SFP
  if (CS_To_JSON_SFP(CsJson, "SFP", CSPtr->SFP) != RedfishCS_status_success) {goto Error;}

  // SignalDetected 
  if (InsertJsonBoolObj (CsJson, "SignalDetected", CSPtr->SignalDetected) != RedfishCS_status_success) {goto Error;}

  // Status
  if (CS_To_JSON_Status(CsJson, "Status", CSPtr->Status) != RedfishCS_status_success) {goto Error;}

  // Width 
  if (InsertJsonInt64Obj (CsJson, "Width", CSPtr->Width) != RedfishCS_status_success) {goto Error;}

  // @odata.context 
  if (InsertJsonStringObj (CsJson, "@odata.context", CSPtr->odata_context) != RedfishCS_status_success) {goto Error;}

  // @odata.etag 
  if (InsertJsonStringObj (CsJson, "@odata.etag", CSPtr->odata_etag) != RedfishCS_status_success) {goto Error;}

  // @odata.id 
  if (InsertJsonStringObj (CsJson, "@odata.id", CSPtr->odata_id) != RedfishCS_status_success) {goto Error;}

  // @odata.type 
  if (InsertJsonStringObj (CsJson, "@odata.type", CSPtr->odata_type) != RedfishCS_status_success) {goto Error;}

  *JsonText = (RedfishCS_char *)json_dumps(CsJson, JSON_INDENT(2 * 1) | JSON_ENSURE_ASCII);
  json_decref(CsJson);
  return RedfishCS_status_success;
Error:;
  json_decref(CsJson);
  return RedfishCS_status_unsupported;
}

//
// Destory C Structure for Port.V1_5_0.Port
//
RedfishCS_status DestroyPort_V1_5_0_CS(RedfishPort_V1_5_0_Port_CS *CSPtr)
{
  RedfishCS_status Status;

  Status = DestoryCsMemory ((RedfishCS_void *)CSPtr);
  return Status;
}

//
// Destory JSON text for Port.V1_5_0.Port
//
RedfishCS_status DestroyPort_V1_5_0_Json(RedfishCS_char *JsonText)
{
  free ((RedfishCS_void *)JsonText);
  return RedfishCS_status_success;
}

//
//Generate C structure for Port.V1_5_0.Port
//
RedfishCS_status
Json_Port_V1_5_0_To_CS(RedfishCS_char *JsonRawText, RedfishPort_V1_5_0_Port_CS **ReturnedCs)
{
  RedfishCS_status  Status;
  json_t *JsonObj;
  RedfishPort_V1_5_0_Port_CS *Cs;

  Status = CreateJsonPayloadAndCs (JsonRawText, "Port", "v1_5_0", "Port", &JsonObj, (RedfishCS_void **)&Cs, sizeof (RedfishPort_V1_5_0_Port_CS));
  if (Status != RedfishCS_status_success) {
    goto Error;
  }

  // @odata.context
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.context", &Cs->odata_context);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.etag
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.etag", &Cs->odata_etag);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // @odata.id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.id", &Cs->odata_id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // @odata.type
  Status = GetRedfishPropertyStr (Cs, JsonObj, "@odata.type", &Cs->odata_type);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Actions
  Status = GenActionsCs (Cs, JsonObj, "Actions", &Cs->Actions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // ActiveWidth
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "ActiveWidth", &Cs->ActiveWidth);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CapableProtocolVersions
  Status = GenRedfishCS_char_ArrayCs (Cs, JsonObj, "CapableProtocolVersions", &Cs->CapableProtocolVersions);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CurrentProtocolVersion
  Status = GetRedfishPropertyStr (Cs, JsonObj, "CurrentProtocolVersion", &Cs->CurrentProtocolVersion);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // CurrentSpeedGbps
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "CurrentSpeedGbps", &Cs->CurrentSpeedGbps);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Description
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Description", &Cs->Description);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Enabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "Enabled", &Cs->Enabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // EnvironmentMetrics
  InitializeLinkHead (&Cs->EnvironmentMetrics);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "EnvironmentMetrics", Cs->Header.ThisUri, &Cs->EnvironmentMetrics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Ethernet
  Status = GenEthernetPropertiesCs (Cs, JsonObj, "Ethernet", &Cs->Ethernet);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FibreChannel
  Status = GenFibreChannelPropertiesCs (Cs, JsonObj, "FibreChannel", &Cs->FibreChannel);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FunctionMaxBandwidth
  Status = GenFunctionMaxBandwidth_ArrayCs (Cs, JsonObj, "FunctionMaxBandwidth", &Cs->FunctionMaxBandwidth);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // FunctionMinBandwidth
  Status = GenFunctionMinBandwidth_ArrayCs (Cs, JsonObj, "FunctionMinBandwidth", &Cs->FunctionMinBandwidth);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // GenZ
  Status = GenGenZCs (Cs, JsonObj, "GenZ", &Cs->GenZ);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Id
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Id", &Cs->Id);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // InterfaceEnabled
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "InterfaceEnabled", &Cs->InterfaceEnabled);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LinkConfiguration
  Status = GenLinkConfiguration_ArrayCs (Cs, JsonObj, "LinkConfiguration", &Cs->LinkConfiguration);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LinkNetworkTechnology
  Status = GetRedfishPropertyStr (Cs, JsonObj, "LinkNetworkTechnology", &Cs->LinkNetworkTechnology);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LinkState
  Status = GetRedfishPropertyStr (Cs, JsonObj, "LinkState", &Cs->LinkState);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LinkStatus
  Status = GetRedfishPropertyStr (Cs, JsonObj, "LinkStatus", &Cs->LinkStatus);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LinkTransitionIndicator
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "LinkTransitionIndicator", &Cs->LinkTransitionIndicator);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Links
  Status = GenLinksCs (Cs, JsonObj, "Links", &Cs->Links);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Location
  InitializeLinkHead (&Cs->Location);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Location", Cs->Header.ThisUri, &Cs->Location);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // LocationIndicatorActive
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "LocationIndicatorActive", &Cs->LocationIndicatorActive);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxFrameSize
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "MaxFrameSize", &Cs->MaxFrameSize);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // MaxSpeedGbps
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "MaxSpeedGbps", &Cs->MaxSpeedGbps);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Metrics
  InitializeLinkHead (&Cs->Metrics);
  Status = CreateCsUriOrJsonByNode (Cs, JsonObj, "Metrics", Cs->Header.ThisUri, &Cs->Metrics);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Name
  Status = GetRedfishPropertyStr (Cs, JsonObj, "Name", &Cs->Name);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){goto Error;}}

  // Oem
  Status = GenOemCs (Cs, JsonObj, "Oem", &Cs->Oem);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortId
  Status = GetRedfishPropertyStr (Cs, JsonObj, "PortId", &Cs->PortId);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortMedium
  Status = GetRedfishPropertyStr (Cs, JsonObj, "PortMedium", &Cs->PortMedium);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortProtocol
  Status = GetRedfishPropertyStr (Cs, JsonObj, "PortProtocol", &Cs->PortProtocol);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // PortType
  Status = GetRedfishPropertyStr (Cs, JsonObj, "PortType", &Cs->PortType);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SFP
  Status = GenSFPCs (Cs, JsonObj, "SFP", &Cs->SFP);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // SignalDetected
  Status = GetRedfishPropertyBoolean (Cs, JsonObj, "SignalDetected", &Cs->SignalDetected);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Status
  Status = GenStatusCs (Cs, JsonObj, "Status", &Cs->Status);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  // Width
  Status = GetRedfishPropertyInt64 (Cs, JsonObj, "Width", &Cs->Width);
  if (Status != RedfishCS_status_success && Status != RedfishCS_status_not_found) {goto Error;}
  else {if (Status == RedfishCS_status_not_found){/*This is not the required property.*/}}

  json_decref(JsonObj);
  *ReturnedCs = Cs;
  return RedfishCS_status_success;
Error:;
  json_decref(JsonObj);
  DestroyPort_V1_5_0_CS (Cs);
  return Status;
}
