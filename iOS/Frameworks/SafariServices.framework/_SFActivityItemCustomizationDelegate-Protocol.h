//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class WKWebView, _SFActivityItemCustomizationController;

@protocol _SFActivityItemCustomizationDelegate <NSObject>

@optional
- (_Bool)isReaderAvailableForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (_Bool)isDisplayingQuickLookDocumentForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (_Bool)isContentObscuredByDigitalHealthForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (WKWebView *)webViewForCustomizationController:(_SFActivityItemCustomizationController *)arg1;
- (void)customizationControllerCustomizationsDidChange:(_SFActivityItemCustomizationController *)arg1;
@end

