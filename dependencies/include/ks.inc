; --------------------------------------------------------------------------------------------------
;                             ks.inc Copyright The MASM32 SDK 1998-2010
; --------------------------------------------------------------------------------------------------

IFNDEF KS_INC
KS_INC equ <1>

KoCreateInstance PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KoDeviceInitialize PROTO STDCALL :DWORD
KoDriverInitialize PROTO STDCALL :DWORD,:DWORD,:DWORD
KoRelease PROTO STDCALL :DWORD
KsAcquireControl PROTO STDCALL :DWORD
KsAcquireDevice PROTO STDCALL :DWORD
KsAcquireDeviceSecurityLock PROTO STDCALL :DWORD,:DWORD
KsAcquireResetValue PROTO STDCALL :DWORD,:DWORD
KsAddDevice PROTO STDCALL :DWORD,:DWORD
KsAddEvent PROTO STDCALL :DWORD,:DWORD
KsAddIrpToCancelableQueue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsAddItemToObjectBag PROTO STDCALL :DWORD,:DWORD,:DWORD
KsAddObjectCreateItemToDeviceHeader PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsAddObjectCreateItemToObjectHeader PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsAllocateDefaultClock PROTO STDCALL :DWORD
KsAllocateDefaultClockEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsAllocateDeviceHeader PROTO STDCALL :DWORD,:DWORD,:DWORD
KsAllocateExtraData PROTO STDCALL :DWORD,:DWORD,:DWORD
KsAllocateObjectBag PROTO STDCALL :DWORD,:DWORD
KsAllocateObjectCreateItem PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsAllocateObjectHeader PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsCacheMedium PROTO STDCALL :DWORD,:DWORD,:DWORD
KsCancelIo PROTO STDCALL :DWORD,:DWORD
KsCancelRoutine PROTO STDCALL :DWORD,:DWORD
KsCompletePendingRequest PROTO STDCALL :DWORD
KsCopyObjectBagItems PROTO STDCALL :DWORD,:DWORD
KsCreateAllocator PROTO STDCALL :DWORD,:DWORD,:DWORD
KsCreateBusEnumObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsCreateClock PROTO STDCALL :DWORD,:DWORD,:DWORD
KsCreateDefaultAllocator PROTO STDCALL :DWORD
KsCreateDefaultAllocatorEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsCreateDefaultClock PROTO STDCALL :DWORD,:DWORD
KsCreateDefaultSecurity PROTO STDCALL :DWORD,:DWORD
KsCreateDevice PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsCreateFilterFactory PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsCreatePin PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsCreateTopologyNode PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsDecrementCountedWorker PROTO STDCALL :DWORD
KsDefaultAddEventHandler PROTO STDCALL :DWORD,:DWORD,:DWORD
KsDefaultDeviceIoCompletion PROTO STDCALL :DWORD,:DWORD
KsDefaultDispatchPnp PROTO STDCALL :DWORD,:DWORD
KsDefaultDispatchPower PROTO STDCALL :DWORD,:DWORD
KsDefaultForwardIrp PROTO STDCALL :DWORD,:DWORD
KsDereferenceBusObject PROTO STDCALL :DWORD
KsDereferenceSoftwareBusObject PROTO STDCALL :DWORD
KsDeviceGetBusData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsDeviceRegisterAdapterObject PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsDeviceSetBusData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsDisableEvent PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsDiscardEvent PROTO STDCALL :DWORD
KsDispatchFastIoDeviceControlFailure PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsDispatchFastReadFailure PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsDispatchInvalidDeviceRequest PROTO STDCALL :DWORD,:DWORD
KsDispatchIrp PROTO STDCALL :DWORD,:DWORD
KsDispatchQuerySecurity PROTO STDCALL :DWORD,:DWORD
KsDispatchSetSecurity PROTO STDCALL :DWORD,:DWORD
KsDispatchSpecificMethod PROTO STDCALL :DWORD,:DWORD
KsDispatchSpecificProperty PROTO STDCALL :DWORD,:DWORD
KsEnableEvent PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsEnableEventWithAllocator PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsFastMethodHandler PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsFastPropertyHandler PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsFilterAcquireProcessingMutex PROTO STDCALL :DWORD
KsFilterAddTopologyConnections PROTO STDCALL :DWORD,:DWORD,:DWORD
KsFilterAttemptProcessing PROTO STDCALL :DWORD,:DWORD
KsFilterCreateNode PROTO STDCALL :DWORD,:DWORD,:DWORD
KsFilterCreatePinFactory PROTO STDCALL :DWORD,:DWORD,:DWORD
KsFilterFactoryAddCreateItem PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsFilterFactoryGetSymbolicLink PROTO STDCALL :DWORD
KsFilterFactorySetDeviceClassesState PROTO STDCALL :DWORD,:DWORD
KsFilterFactoryUpdateCacheData PROTO STDCALL :DWORD,:DWORD
KsFilterGetAndGate PROTO STDCALL :DWORD
KsFilterGetChildPinCount PROTO STDCALL :DWORD,:DWORD
KsFilterGetFirstChildPin PROTO STDCALL :DWORD,:DWORD
KsFilterRegisterPowerCallbacks PROTO STDCALL :DWORD,:DWORD,:DWORD
KsFilterReleaseProcessingMutex PROTO STDCALL :DWORD
KsForwardAndCatchIrp PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsForwardIrp PROTO STDCALL :DWORD,:DWORD,:DWORD
KsFreeDefaultClock PROTO STDCALL :DWORD
KsFreeDeviceHeader PROTO STDCALL :DWORD
KsFreeEventList PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsFreeObjectBag PROTO STDCALL :DWORD
KsFreeObjectCreateItem PROTO STDCALL :DWORD,:DWORD
KsFreeObjectCreateItemsByContext PROTO STDCALL :DWORD,:DWORD
KsFreeObjectHeader PROTO STDCALL :DWORD
KsGenerateDataEvent PROTO STDCALL :DWORD,:DWORD,:DWORD
KsGenerateEvent PROTO STDCALL :DWORD
KsGenerateEventList PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsGenerateEvents PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsGetBusEnumIdentifier PROTO STDCALL :DWORD
KsGetBusEnumParentFDOFromChildPDO PROTO STDCALL :DWORD,:DWORD
KsGetBusEnumPnpDeviceObject PROTO STDCALL :DWORD,:DWORD
KsGetDefaultClockState PROTO STDCALL :DWORD
KsGetDefaultClockTime PROTO STDCALL :DWORD
KsGetDevice PROTO STDCALL :DWORD
KsGetDeviceForDeviceObject PROTO STDCALL :DWORD
KsGetFilterFromIrp PROTO STDCALL :DWORD
KsGetFirstChild PROTO STDCALL :DWORD
KsGetImageNameAndResourceId PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsGetNextSibling PROTO STDCALL :DWORD
KsGetNodeIdFromIrp PROTO STDCALL :DWORD
KsGetObjectFromFileObject PROTO STDCALL :DWORD
KsGetObjectTypeFromFileObject PROTO STDCALL :DWORD
KsGetObjectTypeFromIrp PROTO STDCALL :DWORD
KsGetOuterUnknown PROTO STDCALL :DWORD
KsGetParent PROTO STDCALL :DWORD
KsGetPinFromIrp PROTO STDCALL :DWORD
KsHandleSizedListQuery PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsIncrementCountedWorker PROTO STDCALL :DWORD
KsInitializeDevice PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsInitializeDriver PROTO STDCALL :DWORD,:DWORD,:DWORD
KsInstallBusEnumInterface PROTO STDCALL :DWORD
KsIsBusEnumChildDevice PROTO STDCALL :DWORD,:DWORD
KsLoadResource PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsMapModuleName PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsMergeAutomationTables PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsMethodHandler PROTO STDCALL :DWORD,:DWORD,:DWORD
KsMethodHandlerWithAllocator PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsMoveIrpsOnCancelableQueue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsNullDriverUnload PROTO STDCALL :DWORD
KsPinAcquireProcessingMutex PROTO STDCALL :DWORD
KsPinAttachAndGate PROTO STDCALL :DWORD,:DWORD
KsPinAttachOrGate PROTO STDCALL :DWORD,:DWORD
KsPinAttemptProcessing PROTO STDCALL :DWORD,:DWORD
KsPinDataIntersection PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsPinGetAndGate PROTO STDCALL :DWORD
KsPinGetAvailableByteCount PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPinGetConnectedFilterInterface PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPinGetConnectedPinDeviceObject PROTO STDCALL :DWORD
KsPinGetConnectedPinFileObject PROTO STDCALL :DWORD
KsPinGetConnectedPinInterface PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPinGetCopyRelationships PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPinGetFirstCloneStreamPointer PROTO STDCALL :DWORD
KsPinGetLeadingEdgeStreamPointer PROTO STDCALL :DWORD,:DWORD
KsPinGetNextSiblingPin PROTO STDCALL :DWORD
KsPinGetParentFilter PROTO STDCALL :DWORD
KsPinGetReferenceClockInterface PROTO STDCALL :DWORD,:DWORD
KsPinGetTrailingEdgeStreamPointer PROTO STDCALL :DWORD,:DWORD
KsPinPropertyHandler PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsPinRegisterFrameReturnCallback PROTO STDCALL :DWORD,:DWORD
KsPinRegisterHandshakeCallback PROTO STDCALL :DWORD,:DWORD
KsPinRegisterIrpCompletionCallback PROTO STDCALL :DWORD,:DWORD
KsPinRegisterPowerCallbacks PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPinReleaseProcessingMutex PROTO STDCALL :DWORD
KsPinSetPinClockTime PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPinSubmitFrame PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsPinSubmitFrameMdl PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsProbeStreamIrp PROTO STDCALL :DWORD,:DWORD,:DWORD
KsProcessPinUpdate PROTO STDCALL :DWORD
KsPropertyHandler PROTO STDCALL :DWORD,:DWORD,:DWORD
KsPropertyHandlerWithAllocator PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsQueryDevicePnpObject PROTO STDCALL :DWORD
KsQueryInformationFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsQueryObjectAccessMask PROTO STDCALL :DWORD
KsQueryObjectCreateItem PROTO STDCALL :DWORD
KsQueueWorkItem PROTO STDCALL :DWORD,:DWORD
KsReadFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsRecalculateStackDepth PROTO STDCALL :DWORD,:DWORD
KsReferenceBusObject PROTO STDCALL :DWORD
KsReferenceSoftwareBusObject PROTO STDCALL :DWORD
KsRegisterAggregatedClientUnknown PROTO STDCALL :DWORD,:DWORD
KsRegisterCountedWorker PROTO STDCALL :DWORD,:DWORD,:DWORD
KsRegisterFilterWithNoKSPins PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsRegisterWorker PROTO STDCALL :DWORD,:DWORD
KsReleaseControl PROTO STDCALL :DWORD
KsReleaseDevice PROTO STDCALL :DWORD
KsReleaseDeviceSecurityLock PROTO STDCALL :DWORD
KsReleaseIrpOnCancelableQueue PROTO STDCALL :DWORD,:DWORD
KsRemoveBusEnumInterface PROTO STDCALL :DWORD
KsRemoveIrpFromCancelableQueue PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsRemoveItemFromObjectBag PROTO STDCALL :DWORD,:DWORD,:DWORD
KsRemoveSpecificIrpFromCancelableQueue PROTO STDCALL :DWORD
KsServiceBusEnumCreateRequest PROTO STDCALL :DWORD,:DWORD
KsServiceBusEnumPnpRequest PROTO STDCALL :DWORD,:DWORD
KsSetDefaultClockState PROTO STDCALL :DWORD,:DWORD
KsSetDefaultClockTime PROTO STDCALL :DWORD,:DWORD,:DWORD
KsSetDevicePnpAndBaseObject PROTO STDCALL :DWORD,:DWORD,:DWORD
KsSetInformationFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsSetMajorFunctionHandler PROTO STDCALL :DWORD,:DWORD
KsSetPowerDispatch PROTO STDCALL :DWORD,:DWORD,:DWORD
KsSetTargetDeviceObject PROTO STDCALL :DWORD,:DWORD
KsSetTargetState PROTO STDCALL :DWORD,:DWORD
KsStreamIo PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsStreamPointerAdvance PROTO STDCALL :DWORD
KsStreamPointerAdvanceOffsets PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsStreamPointerAdvanceOffsetsAndUnlock PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsStreamPointerCancelTimeout PROTO STDCALL :DWORD
KsStreamPointerClone PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsStreamPointerDelete PROTO STDCALL :DWORD
KsStreamPointerGetIrp PROTO STDCALL :DWORD,:DWORD,:DWORD
KsStreamPointerGetMdl PROTO STDCALL :DWORD
KsStreamPointerGetNextClone PROTO STDCALL :DWORD
KsStreamPointerLock PROTO STDCALL :DWORD
KsStreamPointerScheduleTimeout PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsStreamPointerSetStatusCode PROTO STDCALL :DWORD,:DWORD
KsStreamPointerUnlock PROTO STDCALL :DWORD,:DWORD
KsSynchronousIoControlDevice PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsTerminateDevice PROTO STDCALL :DWORD
KsTopologyPropertyHandler PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsUnregisterWorker PROTO STDCALL :DWORD
KsUnserializeObjectPropertiesFromRegistry PROTO STDCALL :DWORD,:DWORD,:DWORD
KsValidateAllocatorCreateRequest PROTO STDCALL :DWORD,:DWORD
KsValidateAllocatorFramingEx PROTO STDCALL :DWORD,:DWORD,:DWORD
KsValidateClockCreateRequest PROTO STDCALL :DWORD,:DWORD
KsValidateConnectRequest PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
KsValidateTopologyNodeCreateRequest PROTO STDCALL :DWORD,:DWORD,:DWORD
KsWriteFile PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
KsiDefaultClockAddMarkEvent PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetCorrelatedPhysicalTime PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetCorrelatedTime PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetFunctionTable PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetPhysicalTime PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetResolution PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetState PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiPropertyDefaultClockGetTime PROTO STDCALL :DWORD,:DWORD,:DWORD
KsiQueryObjectCreateItemsPresent PROTO STDCALL :DWORD
_KsEdit PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD

ELSE
  echo -------------------------------------
  echo WARNING duplicate include file ks.inc
  echo -------------------------------------
ENDIF
