//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface IKMultipleSegmentedRawDataBuffer : NSObject
{
    NSMutableArray *_buffers;
    unsigned int _blockSize;
}

- (id)segmentedBufferAtIndex:(int)arg1;
- (id)segmentedBuffers;
- (void)freeCache;
- (int)estimatedFragmentCount;
- (int)estimatedItemCount;
- (void)setTotalSpace:(unsigned int)arg1;
- (int)freeSpace;
- (unsigned int)usedSpace;
- (unsigned int)totalSpace;
- (void)releaseSegment:(void *)arg1 ofSize:(unsigned int)arg2;
- (BOOL)containsAddress:(void *)arg1;
- (void *)newSegmentOfSize:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithMemorySize:(unsigned int)arg1;

@end

