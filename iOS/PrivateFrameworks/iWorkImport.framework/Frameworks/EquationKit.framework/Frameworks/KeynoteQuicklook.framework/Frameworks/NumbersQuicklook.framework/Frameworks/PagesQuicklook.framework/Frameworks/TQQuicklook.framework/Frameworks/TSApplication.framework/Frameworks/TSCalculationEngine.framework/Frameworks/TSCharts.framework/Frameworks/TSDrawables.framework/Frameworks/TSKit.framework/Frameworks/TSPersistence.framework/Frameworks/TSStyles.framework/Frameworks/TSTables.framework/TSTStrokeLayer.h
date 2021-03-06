//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSPersistence/TSPObject.h>

#import <TSTables/NSCopying-Protocol.h>
#import <TSTables/NSMutableCopying-Protocol.h>
#import <TSTables/TSTStrokeLayerEnumerating-Protocol.h>

@interface TSTStrokeLayer : TSPObject <NSCopying, NSMutableCopying, TSTStrokeLayerEnumerating>
{
    struct vector<TSTStrokeLayerRun, std::__1::allocator<TSTStrokeLayerRun>> _strokeRuns;
    unsigned int _columnOrRowIndex;
}

+ (id)strokeLayer;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned int columnOrRowIndex; // @synthesize columnOrRowIndex=_columnOrRowIndex;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_flattenStrokeOrder;
- (void)p_removeRange:(struct TSTSimpleRange)arg1;
- (void)p_insertSpaceAtRange:(struct TSTSimpleRange)arg1;
- (void)p_mergeStrokeRunsAtPosition:(unsigned long long)arg1;
- (void)p_invalidateRange:(struct TSTSimpleRange)arg1;
- (void)p_invalidate;
- (void)p_setStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)p_appendStroke:(id)arg1 inRange:(struct TSTSimpleRange)arg2 order:(int)arg3;
- (void)replaceStrokeLayerAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)strokeLayerAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long strokeLayerCount;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)strokeLayerModifiedByRemovingRangeAt:(struct TSTSimpleRange)arg1;
- (id)strokeLayerModifiedByInsertingSpaceAt:(struct TSTSimpleRange)arg1;
- (void)enumerateStrokesInRange:(struct TSTSimpleRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStrokesUsingBlock:(CDUnknownBlockType)arg1;
- (id)nextStrokeAndRange:(id)arg1;
- (id)findStrokeAndRangeAtIndex:(long long)arg1;
- (long long)startingIndex;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithContext:(id)arg1 columnOrRowIndex:(unsigned int)arg2;

@end

