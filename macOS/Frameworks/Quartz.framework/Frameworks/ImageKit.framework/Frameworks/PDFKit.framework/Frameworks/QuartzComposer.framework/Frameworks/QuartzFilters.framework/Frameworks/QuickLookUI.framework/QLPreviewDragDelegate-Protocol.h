//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLookUI/NSObject-Protocol.h>

@class NSArray, NSDraggingSession, NSEvent, NSPasteboard, NSURL, NSView;
@protocol NSDraggingSource, NSPasteboardWriting;

@protocol QLPreviewDragDelegate <NSObject>
- (NSDraggingSession *)beginDraggingSessionWithItems:(NSArray *)arg1 event:(NSEvent *)arg2 source:(id <NSDraggingSource>)arg3;
- (id <NSPasteboardWriting>)pasteboardWriter;
- (BOOL)useLegacyDragging;
- (NSView *)draggingSourceView;
- (void)getImageRepresentationWithFrame:(struct CGRect)arg1 completion:(void (^)(struct CGImage *, struct CGRect))arg2;
- (struct CGRect)borderFrame;
- (struct CGRect)sourceFrame;
- (NSURL *)draggedURL;

@optional
- (long long)draggingFormation;
- (NSArray *)draggingItems;
- (BOOL)setupDragPasteboard:(NSPasteboard *)arg1;
@end

