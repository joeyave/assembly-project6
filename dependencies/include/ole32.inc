; --------------------------------------------------------------------------------------------------
;                            ole32.inc Copyright The MASM32 SDK 1998-2010
; --------------------------------------------------------------------------------------------------

IFNDEF OLE32_INC
OLE32_INC equ <1>

BindMoniker PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CLIPFORMAT_UserFree PROTO STDCALL :DWORD,:DWORD
CLIPFORMAT_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
CLIPFORMAT_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
CLIPFORMAT_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
CLSIDFromProgID PROTO STDCALL :DWORD,:DWORD
CLSIDFromProgIDEx PROTO STDCALL :DWORD,:DWORD
CLSIDFromString PROTO STDCALL :DWORD,:DWORD
CoAddRefServerProcess PROTO STDCALL
CoAllowSetForegroundWindow PROTO STDCALL :DWORD,:DWORD
CoBuildVersion PROTO STDCALL
CoCancelCall PROTO STDCALL :DWORD,:DWORD
CoCopyProxy PROTO STDCALL :DWORD,:DWORD
CoCreateFreeThreadedMarshaler PROTO STDCALL :DWORD,:DWORD
CoCreateGuid PROTO STDCALL :DWORD
CoCreateInstance PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoCreateInstanceEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoCreateObjectInContext PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CoDeactivateObject PROTO STDCALL :DWORD,:DWORD
CoDisableCallCancellation PROTO STDCALL :DWORD
CoDisconnectObject PROTO STDCALL :DWORD,:DWORD
CoDosDateTimeToFileTime PROTO STDCALL :DWORD,:DWORD,:DWORD
CoEnableCallCancellation PROTO STDCALL :DWORD
CoFileTimeNow PROTO STDCALL :DWORD
CoFileTimeToDosDateTime PROTO STDCALL :DWORD,:DWORD,:DWORD
CoFreeAllLibraries PROTO STDCALL
CoFreeLibrary PROTO STDCALL :DWORD
CoFreeUnusedLibraries PROTO STDCALL
CoFreeUnusedLibrariesEx PROTO STDCALL :DWORD,:DWORD
CoGetApartmentID PROTO STDCALL :DWORD,:DWORD
CoGetCallContext PROTO STDCALL :DWORD,:DWORD
CoGetCallerTID PROTO STDCALL :DWORD
CoGetCancelObject PROTO STDCALL :DWORD,:DWORD,:DWORD
CoGetClassObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetClassVersion PROTO STDCALL :DWORD,:DWORD,:DWORD
CoGetContextToken PROTO STDCALL :DWORD
CoGetCurrentLogicalThreadId PROTO STDCALL :DWORD
CoGetCurrentProcess PROTO STDCALL
CoGetDefaultContext PROTO STDCALL :DWORD,:DWORD,:DWORD
CoGetInstanceFromFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetInstanceFromIStorage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetInterceptor PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CoGetInterceptorFromTypeInfo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetInterfaceAndReleaseStream PROTO STDCALL :DWORD,:DWORD,:DWORD
CoGetMalloc PROTO STDCALL :DWORD,:DWORD
CoGetMarshalSizeMax PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CoGetObjectContext PROTO STDCALL :DWORD,:DWORD
CoGetPSClsid PROTO STDCALL :DWORD,:DWORD
CoGetProcessIdentifier PROTO STDCALL :DWORD
CoGetStandardMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoGetState PROTO STDCALL :DWORD
CoGetStdMarshalEx PROTO STDCALL :DWORD,:DWORD,:DWORD
CoGetSystemSecurityPermissions PROTO STDCALL :DWORD,:DWORD
CoGetTreatAsClass PROTO STDCALL :DWORD,:DWORD
CoImpersonateClient PROTO STDCALL
CoInitialize PROTO STDCALL :DWORD
CoInitializeEx PROTO STDCALL :DWORD,:DWORD
CoInitializeSecurity PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

CoInitializeWOW PROTO STDCALL :DWORD,:DWORD
IFDEF __UNICODE__
  CoInitializeWO equ <CoInitializeWOW>
ENDIF

CoInstall PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoInvalidateRemoteMachineBindings PROTO STDCALL :DWORD
CoIsHandlerConnected PROTO STDCALL :DWORD
CoIsOle1Class PROTO STDCALL :DWORD
CoLoadLibrary PROTO STDCALL :DWORD,:DWORD
CoLockObjectExternal PROTO STDCALL :DWORD,:DWORD,:DWORD
CoMarshalHresult PROTO STDCALL :DWORD,:DWORD
CoMarshalInterThreadInterfaceInStream PROTO STDCALL :DWORD,:DWORD,:DWORD
CoMarshalInterface PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoQueryAuthenticationServices PROTO STDCALL :DWORD,:DWORD
CoQueryClientBlanket PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoQueryProxyBlanket PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoQueryReleaseObject PROTO STDCALL :DWORD
CoReactivateObject PROTO STDCALL :DWORD,:DWORD
CoRegisterChannelHook PROTO STDCALL :DWORD,:DWORD
CoRegisterClassObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoRegisterInitializeSpy PROTO STDCALL :DWORD,:DWORD
CoRegisterMallocSpy PROTO STDCALL :DWORD
CoRegisterMessageFilter PROTO STDCALL :DWORD,:DWORD
CoRegisterPSClsid PROTO STDCALL :DWORD,:DWORD
CoRegisterSurrogate PROTO STDCALL :DWORD
CoRegisterSurrogateEx PROTO STDCALL :DWORD,:DWORD
CoReleaseMarshalData PROTO STDCALL :DWORD
CoReleaseServerProcess PROTO STDCALL
CoResumeClassObjects PROTO STDCALL
CoRetireServer PROTO STDCALL :DWORD
CoRevertToSelf PROTO STDCALL
CoRevokeClassObject PROTO STDCALL :DWORD
CoRevokeInitializeSpy PROTO STDCALL :DWORD,:DWORD
CoRevokeMallocSpy PROTO STDCALL
CoSetCancelObject PROTO STDCALL :DWORD
CoSetProxyBlanket PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CoSetState PROTO STDCALL :DWORD
CoSuspendClassObjects PROTO STDCALL
CoSwitchCallContext PROTO STDCALL :DWORD,:DWORD
CoTaskMemAlloc PROTO STDCALL :DWORD
CoTaskMemFree PROTO STDCALL :DWORD
CoTaskMemRealloc PROTO STDCALL :DWORD,:DWORD
CoTestCancel PROTO STDCALL
CoTreatAsClass PROTO STDCALL :DWORD,:DWORD
CoUninitialize PROTO STDCALL

CoUnloadingWOW PROTO STDCALL :DWORD
IFDEF __UNICODE__
  CoUnloadingWO equ <CoUnloadingWOW>
ENDIF

CoUnmarshalHresult PROTO STDCALL :DWORD,:DWORD
CoUnmarshalInterface PROTO STDCALL :DWORD,:DWORD,:DWORD
CoWaitForMultipleHandles PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ComPs_CStdStubBuffer_AddRef PROTO STDCALL :DWORD
ComPs_CStdStubBuffer_Connect PROTO STDCALL :DWORD,:DWORD
ComPs_CStdStubBuffer_CountRefs PROTO STDCALL :DWORD
ComPs_CStdStubBuffer_DebugServerQueryInterface PROTO STDCALL :DWORD,:DWORD
ComPs_CStdStubBuffer_DebugServerRelease PROTO STDCALL :DWORD,:DWORD
ComPs_CStdStubBuffer_Disconnect PROTO STDCALL :DWORD
ComPs_CStdStubBuffer_Invoke PROTO STDCALL :DWORD,:DWORD,:DWORD
ComPs_CStdStubBuffer_IsIIDSupported PROTO STDCALL :DWORD,:DWORD
ComPs_CStdStubBuffer_QueryInterface PROTO STDCALL :DWORD,:DWORD,:DWORD
ComPs_IUnknown_AddRef_Proxy PROTO STDCALL :DWORD
ComPs_IUnknown_QueryInterface_Proxy PROTO STDCALL :DWORD,:DWORD,:DWORD
ComPs_IUnknown_Release_Proxy PROTO STDCALL :DWORD
ComPs_NdrCStdStubBuffer2_Release PROTO STDCALL :DWORD,:DWORD
ComPs_NdrCStdStubBuffer_Release PROTO STDCALL :DWORD,:DWORD
ComPs_NdrClientCall2 PROTO C :VARARG
ComPs_NdrClientCall2_va PROTO STDCALL :DWORD,:DWORD,:DWORD
ComPs_NdrDllCanUnloadNow PROTO STDCALL :DWORD
ComPs_NdrDllGetClassObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ComPs_NdrDllRegisterProxy PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ComPs_NdrDllUnregisterProxy PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ComPs_NdrStubCall2 PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
ComPs_NdrStubForwardingFunction PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CreateAntiMoniker PROTO STDCALL :DWORD
CreateBindCtx PROTO STDCALL :DWORD,:DWORD
CreateClassMoniker PROTO STDCALL :DWORD,:DWORD
CreateDataAdviseHolder PROTO STDCALL :DWORD
CreateDataCache PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CreateFileMoniker PROTO STDCALL :DWORD,:DWORD
CreateGenericComposite PROTO STDCALL :DWORD,:DWORD,:DWORD
CreateILockBytesOnHGlobal PROTO STDCALL :DWORD,:DWORD,:DWORD
CreateItemMoniker PROTO STDCALL :DWORD,:DWORD,:DWORD
CreateObjrefMoniker PROTO STDCALL :DWORD,:DWORD
CreateOleAdviseHolder PROTO STDCALL :DWORD
CreatePointerMoniker PROTO STDCALL :DWORD,:DWORD
CreateStdProgressIndicator PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CreateStreamOnHGlobal PROTO STDCALL :DWORD,:DWORD,:DWORD
DcomChannelSetHResult PROTO STDCALL :DWORD,:DWORD,:DWORD
DllDebugObjectRPCHook PROTO STDCALL :DWORD,:DWORD

DllGetClassObjectWOW PROTO STDCALL :DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  DllGetClassObjectWO equ <DllGetClassObjectWOW>
ENDIF

DoDragDrop PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
EnableHookObject PROTO STDCALL :DWORD,:DWORD
FmtIdToPropStgName PROTO STDCALL :DWORD,:DWORD
FreePropVariantArray PROTO STDCALL :DWORD,:DWORD
GetClassFile PROTO STDCALL :DWORD,:DWORD
GetConvertStg PROTO STDCALL :DWORD
GetDocumentBitStg PROTO STDCALL :DWORD
GetHGlobalFromILockBytes PROTO STDCALL :DWORD,:DWORD
GetHGlobalFromStream PROTO STDCALL :DWORD,:DWORD
GetHookInterface PROTO STDCALL :DWORD
GetRunningObjectTable PROTO STDCALL :DWORD,:DWORD
HACCEL_UserFree PROTO STDCALL :DWORD,:DWORD
HACCEL_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HACCEL_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HACCEL_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HBITMAP_UserFree PROTO STDCALL :DWORD,:DWORD
HBITMAP_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HBITMAP_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HBITMAP_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HBRUSH_UserFree PROTO STDCALL :DWORD,:DWORD
HBRUSH_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HBRUSH_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HBRUSH_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HDC_UserFree PROTO STDCALL :DWORD,:DWORD
HDC_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HDC_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HDC_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HENHMETAFILE_UserFree PROTO STDCALL :DWORD,:DWORD
HENHMETAFILE_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HENHMETAFILE_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HENHMETAFILE_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HGLOBAL_UserFree PROTO STDCALL :DWORD,:DWORD
HGLOBAL_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HGLOBAL_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HGLOBAL_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HICON_UserFree PROTO STDCALL :DWORD,:DWORD
HICON_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HICON_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HICON_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HMENU_UserFree PROTO STDCALL :DWORD,:DWORD
HMENU_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HMENU_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HMENU_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HMETAFILEPICT_UserFree PROTO STDCALL :DWORD,:DWORD
HMETAFILEPICT_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HMETAFILEPICT_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HMETAFILEPICT_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HMETAFILE_UserFree PROTO STDCALL :DWORD,:DWORD
HMETAFILE_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HMETAFILE_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HMETAFILE_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HPALETTE_UserFree PROTO STDCALL :DWORD,:DWORD
HPALETTE_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HPALETTE_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HPALETTE_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HWND_UserFree PROTO STDCALL :DWORD,:DWORD
HWND_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HWND_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
HWND_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
HkOleRegisterObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
IIDFromString PROTO STDCALL :DWORD,:DWORD
IsAccelerator PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
IsEqualGUID PROTO STDCALL :DWORD,:DWORD
IsValidIid PROTO STDCALL :DWORD
IsValidInterface PROTO STDCALL :DWORD
IsValidPtrIn PROTO STDCALL :DWORD,:DWORD
IsValidPtrOut PROTO STDCALL :DWORD,:DWORD
MkParseDisplayName PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
MonikerCommonPrefixWith PROTO STDCALL :DWORD,:DWORD,:DWORD
MonikerRelativePathTo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
OleBuildVersion PROTO STDCALL
OleConvertIStorageToOLESTREAM PROTO STDCALL :DWORD,:DWORD
OleConvertIStorageToOLESTREAMEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleConvertOLESTREAMToIStorage PROTO STDCALL :DWORD,:DWORD,:DWORD
OleConvertOLESTREAMToIStorageEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreate PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateDefaultHandler PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
OleCreateEmbeddingHelper PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateFromData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateFromDataEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateFromFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateFromFileEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateLink PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateLinkEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateLinkFromData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateLinkFromDataEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateLinkToFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateLinkToFileEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleCreateMenuDescriptor PROTO STDCALL :DWORD,:DWORD
OleCreateStaticFromData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleDestroyMenuDescriptor PROTO STDCALL :DWORD
OleDoAutoConvert PROTO STDCALL :DWORD,:DWORD
OleDraw PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
OleDuplicateData PROTO STDCALL :DWORD,:DWORD,:DWORD
OleFlushClipboard PROTO STDCALL
OleGetAutoConvert PROTO STDCALL :DWORD,:DWORD
OleGetClipboard PROTO STDCALL :DWORD
OleGetIconOfClass PROTO STDCALL :DWORD,:DWORD,:DWORD
OleGetIconOfFile PROTO STDCALL :DWORD,:DWORD
OleInitialize PROTO STDCALL :DWORD

OleInitializeWOW PROTO STDCALL :DWORD,:DWORD
IFDEF __UNICODE__
  OleInitializeWO equ <OleInitializeWOW>
ENDIF

OleIsCurrentClipboard PROTO STDCALL :DWORD
OleIsRunning PROTO STDCALL :DWORD
OleLoad PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
OleLoadFromStream PROTO STDCALL :DWORD,:DWORD,:DWORD
OleLockRunning PROTO STDCALL :DWORD,:DWORD,:DWORD
OleMetafilePictFromIconAndLabel PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
OleNoteObjectVisible PROTO STDCALL :DWORD,:DWORD
OleQueryCreateFromData PROTO STDCALL :DWORD
OleQueryLinkFromData PROTO STDCALL :DWORD
OleRegEnumFormatEtc PROTO STDCALL :DWORD,:DWORD,:DWORD
OleRegEnumVerbs PROTO STDCALL :DWORD,:DWORD
OleRegGetMiscStatus PROTO STDCALL :DWORD,:DWORD,:DWORD
OleRegGetUserType PROTO STDCALL :DWORD,:DWORD,:DWORD
OleRun PROTO STDCALL :DWORD
OleSave PROTO STDCALL :DWORD,:DWORD,:DWORD
OleSaveToStream PROTO STDCALL :DWORD,:DWORD
OleSetAutoConvert PROTO STDCALL :DWORD,:DWORD
OleSetClipboard PROTO STDCALL :DWORD
OleSetContainedObject PROTO STDCALL :DWORD,:DWORD
OleSetMenuDescriptor PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
OleTranslateAccelerator PROTO STDCALL :DWORD,:DWORD,:DWORD
OleUninitialize PROTO STDCALL
OpenOrCreateStream PROTO STDCALL :DWORD,:DWORD,:DWORD
ProgIDFromCLSID PROTO STDCALL :DWORD,:DWORD
PropStgNameToFmtId PROTO STDCALL :DWORD,:DWORD
PropSysAllocString PROTO STDCALL :DWORD
PropSysFreeString PROTO STDCALL :DWORD
PropVariantClear PROTO STDCALL :DWORD
PropVariantCopy PROTO STDCALL :DWORD,:DWORD
ReadClassStg PROTO STDCALL :DWORD,:DWORD
ReadClassStm PROTO STDCALL :DWORD,:DWORD
ReadFmtUserTypeStg PROTO STDCALL :DWORD,:DWORD,:DWORD
ReadOleStg PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ReadStringStream PROTO STDCALL :DWORD,:DWORD
RegisterDragDrop PROTO STDCALL :DWORD,:DWORD
ReleaseStgMedium PROTO STDCALL :DWORD
RevokeDragDrop PROTO STDCALL :DWORD
SNB_UserFree PROTO STDCALL :DWORD,:DWORD
SNB_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
SNB_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
SNB_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
STGMEDIUM_UserFree PROTO STDCALL :DWORD,:DWORD
STGMEDIUM_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
STGMEDIUM_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD
STGMEDIUM_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD
SetConvertStg PROTO STDCALL :DWORD,:DWORD
SetDocumentBitStg PROTO STDCALL :DWORD,:DWORD
StgConvertPropertyToVariant PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
StgConvertVariantToProperty PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgCreateDocfile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
StgCreateDocfileOnILockBytes PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
StgCreatePropSetStg PROTO STDCALL :DWORD,:DWORD,:DWORD
StgCreatePropStg PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgCreateStorageEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgGetIFillLockBytesOnFile PROTO STDCALL :DWORD,:DWORD
StgGetIFillLockBytesOnILockBytes PROTO STDCALL :DWORD,:DWORD
StgIsStorageFile PROTO STDCALL :DWORD
StgIsStorageILockBytes PROTO STDCALL :DWORD
StgOpenAsyncDocfileOnIFillLockBytes PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
StgOpenPropStg PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgOpenStorage PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgOpenStorageEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgOpenStorageOnILockBytes PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StgPropertyLengthAsVariant PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
StgSetTimes PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
StringFromCLSID PROTO STDCALL :DWORD,:DWORD
StringFromGUID2 PROTO STDCALL :DWORD,:DWORD,:DWORD
StringFromIID PROTO STDCALL :DWORD,:DWORD
UpdateDCOMSettings PROTO STDCALL
UtConvertDvtd16toDvtd32 PROTO STDCALL :DWORD,:DWORD,:DWORD
UtConvertDvtd32toDvtd16 PROTO STDCALL :DWORD,:DWORD,:DWORD
UtGetDvtd16Info PROTO STDCALL :DWORD,:DWORD
UtGetDvtd32Info PROTO STDCALL :DWORD,:DWORD
WdtpInterfacePointer_UserFree PROTO STDCALL :DWORD
WdtpInterfacePointer_UserMarshal PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WdtpInterfacePointer_UserSize PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WdtpInterfacePointer_UserUnmarshal PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
WriteClassStg PROTO STDCALL :DWORD,:DWORD
WriteClassStm PROTO STDCALL :DWORD,:DWORD
WriteFmtUserTypeStg PROTO STDCALL :DWORD,:DWORD,:DWORD
WriteOleStg PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
WriteStringStream PROTO STDCALL :DWORD,:DWORD

ELSE
  echo ----------------------------------------
  echo WARNING duplicate include file ole32.inc
  echo ----------------------------------------
ENDIF
