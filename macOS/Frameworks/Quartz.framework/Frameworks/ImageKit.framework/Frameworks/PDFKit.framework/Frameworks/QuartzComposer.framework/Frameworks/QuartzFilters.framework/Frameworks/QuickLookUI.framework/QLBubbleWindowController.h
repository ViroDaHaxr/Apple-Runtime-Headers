//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookUI/QLPreviewWindowController.h>

@class QLBubble;

__attribute__((visibility("hidden")))
@interface QLBubbleWindowController : QLPreviewWindowController
{
    QLBubble *_bubble;
}

@property QLBubble *bubble; // @synthesize bubble=_bubble;
- (double)_additionalContentInset;
- (double)_intrinsicMargin;
- (void)updateControls;

@end

