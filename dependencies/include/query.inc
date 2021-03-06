; --------------------------------------------------------------------------------------------------
;                            query.inc Copyright The MASM32 SDK 1998-2010
; --------------------------------------------------------------------------------------------------

IFNDEF QUERY_INC
QUERY_INC equ <1>

AbortMerges PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
BeginCacheTransaction PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
BindIFilterFromStorage PROTO STDCALL :DWORD,:DWORD,:DWORD
BindIFilterFromStream PROTO STDCALL :DWORD,:DWORD,:DWORD
CIBuildQueryNode PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CIBuildQueryTree PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CICreateCommand PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CIGetGlobalPropertyList PROTO STDCALL :DWORD
CIMakeICommand PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CIRestrictionToFullTree PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CIState PROTO STDCALL :DWORD,:DWORD,:DWORD
CITextToFullTree PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CITextToFullTreeEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CITextToSelectTree PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CITextToSelectTreeEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CiSvcMain PROTO STDCALL :DWORD,:DWORD
CollectCIISAPIPerformanceData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CollectCIPerformanceData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
CollectFILTERPerformanceData PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
DoneCIISAPIPerformanceData PROTO STDCALL
DoneCIPerformanceData PROTO STDCALL
DoneFILTERPerformanceData PROTO STDCALL
EndCacheTransaction PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ForceMasterMerge PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
GetWin4ExceptionLevel PROTO STDCALL
InitializeCIISAPIPerformanceData PROTO STDCALL :DWORD
InitializeCIPerformanceData PROTO STDCALL :DWORD
InitializeFILTERPerformanceData PROTO STDCALL :DWORD
LoadBHIFilter PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
LoadBinaryFilter PROTO STDCALL :DWORD,:DWORD
LoadIFilter PROTO STDCALL :DWORD,:DWORD,:DWORD
LoadTextFilter PROTO STDCALL :DWORD,:DWORD

LocateCatalogsA PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFNDEF __UNICODE__
  LocateCatalogs equ <LocateCatalogsA>
ENDIF

LocateCatalogsW PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IFDEF __UNICODE__
  LocateCatalogs equ <LocateCatalogsW>
ENDIF

SetCatalogState PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
SetWin4AssertLevel PROTO STDCALL :DWORD
SetWin4InfoLevel PROTO STDCALL :DWORD
SetupCache PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetupCacheEx PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StartFWCiSvcWork PROTO STDCALL :DWORD,:DWORD,:DWORD
StopFWCiSvcWork PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
SvcEntry_CiSvc PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD
Win4AssertEx PROTO STDCALL :DWORD,:DWORD,:DWORD
vdprintf PROTO STDCALL :DWORD,:DWORD,:DWORD,:DWORD

ELSE
  echo ----------------------------------------
  echo WARNING duplicate include file query.inc
  echo ----------------------------------------
ENDIF
