//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface AVVCRecordDeviceInfo : NSObject
{
    _Bool _isRemoteDevice;
    unsigned int _remoteDeviceCategory;
    NSString *_recordRoute;
    NSString *_remoteProductIdentifier;
    NSUUID *_remoteDeviceUID;
}

@property(readonly, nonatomic) unsigned int remoteDeviceCategory; // @synthesize remoteDeviceCategory=_remoteDeviceCategory;
@property(readonly, nonatomic) NSUUID *remoteDeviceUID; // @synthesize remoteDeviceUID=_remoteDeviceUID;
@property(readonly, nonatomic) NSString *remoteProductIdentifier; // @synthesize remoteProductIdentifier=_remoteProductIdentifier;
@property(readonly) _Bool isRemoteDevice; // @synthesize isRemoteDevice=_isRemoteDevice;
@property(readonly, nonatomic) NSString *recordRoute; // @synthesize recordRoute=_recordRoute;
- (void)dealloc;
- (id)initWithRecordingEngine:(struct AVVCRecordingEngine *)arg1;

@end

