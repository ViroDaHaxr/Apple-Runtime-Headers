//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (BDSAdditions)
- (void)bds_chainSuccessAndErrorCompletionSelectorCallsForSelector:(SEL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bds_traverseBatchesOfSize:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)bds_arrayByRemovingNSNulls;
- (id)bds_arrayByRemovingNSNullsInvokingBlockForNulls:(CDUnknownBlockType)arg1;
- (id)bds_dictionaryUsingPropertyAsKey:(id)arg1;
@end

