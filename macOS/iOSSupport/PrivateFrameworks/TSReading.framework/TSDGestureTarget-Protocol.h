//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol TSDGesture;

@protocol TSDGestureTarget <NSObject>
- (BOOL)handleGesture:(id <TSDGesture>)arg1;
- (BOOL)canHandleGesture:(id <TSDGesture>)arg1;

@optional
- (void)willBeginHandlingGesture:(UIGestureRecognizer *)arg1;
- (void)gestureSequenceDidEnd;
- (void)gestureSequenceWillBegin;
@end

