//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton;

@interface AKSignatureTableCellView_Mac : NSTableCellView
{
    BOOL _eventsCurrentlyInside;
    id _viewEventMonitor;
    NSButton *_deleteButton;
}

- (void).cxx_destruct;
@property(retain) NSButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property BOOL eventsCurrentlyInside; // @synthesize eventsCurrentlyInside=_eventsCurrentlyInside;
@property(retain) id viewEventMonitor; // @synthesize viewEventMonitor=_viewEventMonitor;
- (void)setBackgroundStyle:(long long)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)awakeFromNib;

@end

