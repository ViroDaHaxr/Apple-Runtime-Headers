//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSIndexSet.h>

@class NSString;

@interface NSIndexSet (EDServerMessagePersistence)
@property(readonly, nonatomic) NSString *ed_logDescription;
@property(readonly, nonatomic) NSString *ed_uidQueryExpression;
- (id)ed_nextRangesWithRangeCountLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2;
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2 queryRangeCountLimit:(unsigned long long)arg3 batchLimit:(unsigned long long)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)ed_enumerateUIDsWithLimit:(unsigned long long)arg1 reverseEnumeration:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
@end

