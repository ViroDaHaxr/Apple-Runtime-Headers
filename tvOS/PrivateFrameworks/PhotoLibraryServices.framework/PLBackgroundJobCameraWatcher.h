//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLBackgroundJobCameraWatcherDelegate;

@interface PLBackgroundJobCameraWatcher : NSObject
{
    _Bool _isCameraRunning;
    id <PLBackgroundJobCameraWatcherDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly) __weak id <PLBackgroundJobCameraWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isCameraRunning;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;

@end

