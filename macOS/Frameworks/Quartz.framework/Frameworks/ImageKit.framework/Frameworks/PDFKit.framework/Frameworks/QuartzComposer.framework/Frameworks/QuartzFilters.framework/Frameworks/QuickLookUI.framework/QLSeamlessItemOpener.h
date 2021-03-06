//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QLPreviewBubble, QLPreviewPanel, QLSeamlessOpener;
@protocol QLPreviewItem, QLSeamlessOpenerDelegate;

__attribute__((visibility("hidden")))
@interface QLSeamlessItemOpener : NSObject
{
    id <QLPreviewItem> _item;
    QLSeamlessOpener *_opener;
    struct __QLSeamlessOpeningRequest *_request;
    QLPreviewPanel *_previewPanel;
    QLPreviewBubble *_bubble;
}

+ (id)itemOpenerForPreviewItem:(id)arg1 fromOpener:(id)arg2;
@property(retain) QLSeamlessOpener *opener; // @synthesize opener=_opener;
@property(retain) id <QLPreviewItem> item; // @synthesize item=_item;
- (id)description;
- (void)_performBlock:(CDUnknownBlockType)arg1;
@property(readonly) id <QLSeamlessOpenerDelegate> delegate;
- (void)_displayLegacyOpeningAnimationWithSourceImage:(id)arg1 frame:(struct CGRect)arg2 fromPreviewPanel:(id)arg3;
- (void)_invalidateWithSuccess:(BOOL)arg1;
- (void)discard;
- (void)bindToPID:(int)arg1;
- (int)openWithOptions:(int)arg1 fromPreviewPanel:(id)arg2 minWindowLevel:(long long)arg3;
- (id)_viewDisplayStateFromDisplayState:(id)arg1;
- (id)_displayStateFromViewDisplayState:(id)arg1 fullscreen:(BOOL)arg2 screenFrame:(struct CGRect)arg3;
- (int)_supportWithMaxSupport:(int)arg1;
- (void)dealloc;

@end

