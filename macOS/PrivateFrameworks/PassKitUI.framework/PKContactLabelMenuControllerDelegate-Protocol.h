//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSControl, PKContactLabelMenuController;

@protocol PKContactLabelMenuControllerDelegate <NSObject>

@optional
- (void)contactLabelMenuController:(PKContactLabelMenuController *)arg1 didShowControl:(NSControl *)arg2;
- (void)contactLabelMenuController:(PKContactLabelMenuController *)arg1 didHideControl:(NSControl *)arg2;
@end

