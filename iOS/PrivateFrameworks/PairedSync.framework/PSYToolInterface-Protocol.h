//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class PSYOptions;

@protocol PSYToolInterface <NSObject>
- (oneway void)cancelSyncSession;
- (oneway void)clearCurrentResumeContext;
- (oneway void)startSyncWithOptions:(PSYOptions *)arg1;
- (oneway void)getOrderedActivityInfosWithCompletion:(void (^)(NSArray *))arg1;
@end

