//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSString, _MKNanoPlaceCardViewController;

@protocol _MKNanoPlaceCardViewControllerDelegate <NSObject>
- (void)nanoPlaceCardViewController:(_MKNanoPlaceCardViewController *)arg1 didSelectTransitIncidents:(NSArray *)arg2;
- (void)nanoPlaceCardViewController:(_MKNanoPlaceCardViewController *)arg1 didSelectPhoneNumber:(NSString *)arg2;
- (void)nanoPlaceCardViewControllerDidTapAttribution:(_MKNanoPlaceCardViewController *)arg1;
- (void)nanoPlaceCardViewControllerDidTapMap:(_MKNanoPlaceCardViewController *)arg1;
@end

