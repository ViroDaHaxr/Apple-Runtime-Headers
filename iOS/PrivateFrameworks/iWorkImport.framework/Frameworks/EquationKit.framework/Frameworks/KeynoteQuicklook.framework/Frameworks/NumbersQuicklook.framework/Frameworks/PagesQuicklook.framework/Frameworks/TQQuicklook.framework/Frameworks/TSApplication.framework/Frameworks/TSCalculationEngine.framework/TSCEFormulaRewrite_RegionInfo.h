//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCEFormulaRewrite_Uids;

@interface TSCEFormulaRewrite_RegionInfo : NSObject
{
    UUIDData_5fbc143e _tableUID;
    UUIDData_5fbc143e _condStyleOwnerUID;
    TSCEFormulaRewrite_Uids *_columnUids;
    TSCEFormulaRewrite_Uids *_rowUids;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *rowUids; // @synthesize rowUids=_rowUids;
@property(readonly, nonatomic) TSCEFormulaRewrite_Uids *columnUids; // @synthesize columnUids=_columnUids;
@property(readonly, nonatomic) UUIDData_5fbc143e condStyleOwnerUID; // @synthesize condStyleOwnerUID=_condStyleOwnerUID;
@property(readonly, nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
-     // Error parsing type: v24@0:8^{RegionInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{UUID}^{IndexedUidsArchive}^{IndexedUidsArchive}}16, name: saveToMessage:
-     // Error parsing type: @24@0:8r^{RegionInfoArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{UUID}^{IndexedUidsArchive}^{IndexedUidsArchive}}16, name: initFromMessage:
- (struct TSCERangeCoordinate)mergingRange;
- (struct TSUCellCoord)bottomRightCellCoord;
- (struct TSUCellCoord)topLeftCellCoord;
- (void)unloadIndexes;
- (void)loadIndexesForTable:(id)arg1 uidResolver:(id)arg2;
- (id)description;
- (id)initWithTableUID:(const UUIDData_5fbc143e *)arg1 columnUids:(const vector_4dc5f307 *)arg2 rowUids:(const vector_4dc5f307 *)arg3;

@end

