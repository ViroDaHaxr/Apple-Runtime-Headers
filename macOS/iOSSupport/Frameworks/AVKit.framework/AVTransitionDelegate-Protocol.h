//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVTransition, UIColor;

@protocol AVTransitionDelegate <NSObject>
- (UIColor *)transitionBackgroundViewBackgroundColor:(AVTransition *)arg1;
- (UIColor *)transitionPresentedViewBackgroundColor:(AVTransition *)arg1;
- (void)transitionWillComplete:(AVTransition *)arg1 success:(BOOL)arg2;
@end

