//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/SPApplicationRemoteXPCProtocol-Protocol.h>

@class NSString;

@protocol SPApplicationRemoteProtocol <SPApplicationRemoteXPCProtocol>
- (void)interfaceViewController:(NSString *)arg1 receivePresentInterfaceControllerClass:(Class)arg2 willPresent:(void (^)(NSString *))arg3 didDismiss:(void (^)(void))arg4;
@end

