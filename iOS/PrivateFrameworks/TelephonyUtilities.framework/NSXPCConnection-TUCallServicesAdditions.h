//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@class NSString;

@interface NSXPCConnection (TUCallServicesAdditions)
+ (id)callServicesClientXPCInterface;
+ (id)callServicesServerXPCInterface;
@property(readonly, copy, nonatomic) NSString *processBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *processName;
@end

