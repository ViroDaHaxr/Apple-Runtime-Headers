//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CUISAlertTransitionContext;

@protocol CUISAlertAnimatedTransitioning <NSObject>
- (double)alertTransitionDuration:(CUISAlertTransitionContext *)arg1;
- (void)animateAlertTransition:(CUISAlertTransitionContext *)arg1;

@optional
- (void)animationEnded:(_Bool)arg1;
@end

