//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IOBluetoothDeviceInquiryCSupportObject : NSObject
{
    CDUnknownFunctionPointerType _startedCallback;
    CDUnknownFunctionPointerType _updatingNamesStartedCallback;
    CDUnknownFunctionPointerType _deviceFoundCallback;
    CDUnknownFunctionPointerType _deviceNameUpdatedCallback;
    CDUnknownFunctionPointerType _completeCallback;
    void *_refCon;
}

+ (id)supportObjectWithRefCon:(void *)arg1;
- (void)deviceInquiryComplete:(id)arg1 error:(int)arg2 aborted:(BOOL)arg3;
- (void)deviceInquiryDeviceNameUpdated:(id)arg1 device:(id)arg2 devicesRemaining:(unsigned int)arg3;
- (void)deviceInquiryUpdatingDeviceNamesStarted:(id)arg1 devicesRemaining:(unsigned int)arg2;
- (void)deviceInquiryDeviceFound:(id)arg1 device:(id)arg2;
- (void)deviceInquiryStarted:(id)arg1;
- (id)initWithRefCon:(void *)arg1;

@end

