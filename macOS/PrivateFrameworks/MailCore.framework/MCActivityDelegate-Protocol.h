//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailCore/MCBodyTracker-Protocol.h>
#import <MailCore/MCNetworkTracker-Protocol.h>

@class MCActivity, NSError, NSOperationQueue;

@protocol MCActivityDelegate <MCBodyTracker, MCNetworkTracker>
@property(readonly, nonatomic) NSOperationQueue *serializationQueue;
- (void)activity:(MCActivity *)arg1 didEncounterError:(NSError *)arg2;
- (void)addActivity:(MCActivity *)arg1;
@end

