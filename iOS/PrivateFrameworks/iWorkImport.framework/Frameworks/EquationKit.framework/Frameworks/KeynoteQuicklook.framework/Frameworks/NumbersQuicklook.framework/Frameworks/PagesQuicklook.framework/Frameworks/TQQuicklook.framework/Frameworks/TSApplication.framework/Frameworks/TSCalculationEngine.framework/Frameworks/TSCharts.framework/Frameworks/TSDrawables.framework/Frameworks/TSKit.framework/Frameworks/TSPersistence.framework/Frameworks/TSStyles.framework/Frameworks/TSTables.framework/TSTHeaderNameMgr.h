//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/TSCEFormulaOwning-Protocol.h>
#import <TSTables/TSCEHeaderNameProtocol-Protocol.h>
#import <TSTables/TSTCellWillChangeProtocol-Protocol.h>

@class NSCharacterSet, NSMutableSet, NSObject, NSString, TSCECalculationEngine, TSCENameTrie;
@protocol OS_dispatch_queue;

@interface TSTHeaderNameMgr : TSPObject <TSCEHeaderNameProtocol, TSTCellWillChangeProtocol, TSCEFormulaOwning>
{
    TSCECalculationEngine *_calcEngine;
    TSCECalculationEngine *_weakCalcEngine;
    NSObject<OS_dispatch_queue> *_headerNameMgrQueue;
    UUIDData_5fbc143e _ownerUID;
    struct TSUCellCoord _nextPrecedentCoord;
    struct TSUCellCoord _allHeaderPerTablesPrecedent;
    struct TSUCellCoord _needsTileSplittingPrecedent;
    struct vector<TSTHeaderNameMgrTile *, std::__1::allocator<TSTHeaderNameMgrTile *>> _nameFragmentTiles;
    struct unordered_map<TSUCellCoord, TSTHeaderNameMgrEntry *, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTHeaderNameMgrEntry *>>> _fragPrecedentToEntry;
    struct unordered_map<TSCEUidCellRef, TSCECellCoordSet, std::__1::hash<TSCEUidCellRef>, std::__1::equal_to<TSCEUidCellRef>, std::__1::allocator<std::__1::pair<const TSCEUidCellRef, TSCECellCoordSet>>> _fragPrecedentsUsedByCellRef;
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSTHeaderPerTable *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSTHeaderPerTable *>>> _perTableInfo;
    struct unordered_map<TSUCellCoord, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUCellCoord>, std::__1::equal_to<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSU::UUIDData<TSP::UUIDData>>>> _headerPerTablePrecedentToTableUID;
    TSCENameTrie *_namePrefixIndex;
    NSMutableSet *_tilesToConsiderSplitting;
    _Bool _isClosing;
    UUIDData_5fbc143e _nrm_ownerUID;
    NSCharacterSet *_whitespaceToBreakAt;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidateForCalcEngine:(id)arg1;
- (void)writeResultsForCalcEngine:(id)arg1;
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (long long)evaluationMode;
- (id)linkedResolver;
- (unsigned short)ownerKind;
- (void)unregisterFromCalcEngine;
- (int)registerWithCalcEngine:(id)arg1;
- (struct TSCECellRefSet)allHeaderCellRefsLimitedToTable:(const UUIDData_5fbc143e *)arg1;
- (struct TSCECellRefSet)headerCellsMatching:(id)arg1 limitToTable:(const UUIDData_5fbc143e *)arg2 includePrefixes:(_Bool)arg3;
- (id)subsetForReferenceName:(id)arg1 limitToTable:(const UUIDData_5fbc143e *)arg2 includePrefixes:(_Bool)arg3;
- (void)p_processWorkForTable:(const UUIDData_5fbc143e *)arg1;
- (void)willRemoveRows:(const vector_4dc5f307 *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyConcurrentCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyBaseCellMap:(id)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)p_willApplyCell:(id)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
@property(readonly, copy) NSString *description;
- (id)anyRefForRangeForHeaderCell:(const struct TSCECellRef *)arg1 usePreserveFlags:(_Bool)arg2;
- (_Bool)referenceNameIsUnique:(id)arg1 forReference:(const RefTypeHolder_8c6da553 *)arg2 contextTable:(const UUIDData_5fbc143e *)arg3;
- (id)stringInHeaderCell:(const struct TSCECellRef *)arg1;
- (struct TSCERangeRef)spanningRangeForHeaderCell:(const struct TSCECellRef *)arg1;
- (struct TSCECellRefSet)nameFragmentPrecedentsForReferenceString:(id)arg1;
- (void)clearTextAtCellCoord:(const UUIDCoord_697ad09a *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)p_updateWithWordFragments:(const vector_0c920a62 *)arg1 atCellCoord:(const UUIDCoord_697ad09a *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)p_updateText:(id)arg1 atCellCoord:(const UUIDCoord_697ad09a *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)updateText:(id)arg1 atCellCoord:(const UUIDCoord_697ad09a *)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)updateWithIndexingChunks:(id)arg1;
- (struct TSTHeaderNameMgrEntry *)fragmentEntryForString:(id)arg1 createIfMissing:(_Bool)arg2;
- (void)handleFullTile:(id)arg1;
- (id)findTileForString:(id)arg1 findClosest:(_Bool)arg2 foundAtOffset:(unsigned long long *)arg3;
- (id)findTileForString:(id)arg1 findClosest:(_Bool)arg2;
- (id)tileForEntry:(struct TSTHeaderNameMgrEntry *)arg1;
- (struct TSTHeaderNameMgrEntry *)fragmentEntryForNameFragmentPrecedent:(const struct TSUCellCoord *)arg1;
- (void)unpackEntryAfterUnarchive:(struct TSTHeaderNameMgrEntry *)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)updateTableUIDFrom:(const UUIDData_5fbc143e *)arg1 toTableUID:(const UUIDData_5fbc143e *)arg2;
- (void)endTrackingNamesInTable:(const UUIDData_5fbc143e *)arg1;
- (void)beginTrackingNamesInTable:(const UUIDData_5fbc143e *)arg1;
- (void)updateTrackedHeadersForDocumentLocaleChange:(const UUIDData_5fbc143e *)arg1;
- (void)updateTrackedHeaders:(const UUIDData_5fbc143e *)arg1;
- (void)updateTrackedHeaders:(const UUIDData_5fbc143e *)arg1 checkForEmptyHeaders:(_Bool)arg2;
- (struct TSTHeaderPerTable *)perTableEntryForTable:(const UUIDData_5fbc143e *)arg1 createIfMissing:(_Bool)arg2;
- (vector_0c920a62)wordFragmentsFromString:(id)arg1 savePreserveFlags:(_Bool)arg2;
- (void)usedPrecedentCoord:(const struct TSUCellCoord *)arg1;
- (struct TSUCellCoord)getNextPrecedentCoord:(_Bool)arg1;
- (void)setNRM_formulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)NRM_formulaOwnerUID;
- (UUIDData_5fbc143e)formulaOwnerUID;
- (UUIDData_5fbc143e)ownerUID;
- (void)setCalcEngine:(id)arg1;
@property(readonly, nonatomic) TSCECalculationEngine *calcEngine;
- (void)setEntry:(struct TSTHeaderNameMgrEntry *)arg1 forPrecedentCoord:(const struct TSUCellCoord *)arg2;
- (id)headerNameMgrQueue;
- (unsigned long long)numberOfTiles;
@property(readonly, nonatomic) _Bool isClosing;
- (void)willClose;
- (void)addChangedTile:(id)arg1;
- (void)waitForQueueToDrain;
- (id)namePrefixIndex;
- (void)dealloc;
- (void)setup;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 calcEngine:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

