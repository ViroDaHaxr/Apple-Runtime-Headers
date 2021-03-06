//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView, _UIPlatterMenuDynamicsController;

@protocol _UIPlatterMenuDynamicsControllerDelegate <NSObject>
- (void)platterMenuDynamicsController:(_UIPlatterMenuDynamicsController *)arg1 didMoveSwipeView:(UIView *)arg2 toPosition:(struct CGPoint)arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(_UIPlatterMenuDynamicsController *)arg1;
- (struct CGPoint)initialCenterForTrailingSwipeActionView;
- (UIView *)trailingSwipeActionView;
- (struct CGPoint)initialCenterForLeadingSwipeActionView;
- (UIView *)leadingSwipeActionView;
- (float)minimumSpacingBetweenPlatterAndMenu;
- (struct CGPoint)centerForMenuDismissed;
- (struct CGPoint)centerForMenuPresented;
- (struct CGPoint)centerForPlatterWithMenuViewDismissed;
- (struct CGPoint)centerForPlatterWithMenuViewPresented;

@optional
- (void)translationDidUpdateForPlatterMenuDynamicsController:(_UIPlatterMenuDynamicsController *)arg1;
@end

