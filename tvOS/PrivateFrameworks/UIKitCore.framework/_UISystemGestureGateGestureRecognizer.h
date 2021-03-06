//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer
{
    unsigned char _systemGestureGateType;
    unsigned int _systemGesturesRecognitionPossible:1;
    unsigned int _waitingForSystemGestureStateNotification:1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}

+ (_Bool)_shouldDefaultToTouches;
- (id)_gateGestureTypeString;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_timeOut;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (void)setDelaysTouchesEnded:(_Bool)arg1;
- (void)setDelaysTouchesBegan:(_Bool)arg1;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

