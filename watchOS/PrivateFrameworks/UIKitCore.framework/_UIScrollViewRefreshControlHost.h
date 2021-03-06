//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIRefreshControlHosting-Protocol.h>

@class NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIScrollViewRefreshControlHost : NSObject <_UIRefreshControlHosting>
{
    UIScrollView *_scrollView;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledNeedsReset;
    _Bool _refreshControlAutomaticContentOffsetAdjustmentEnabledWhenLastIdle;
}

- (void).cxx_destruct;
- (void)refreshControl:(id)arg1 didChangeToState:(int)arg2 fromState:(int)arg3;
- (void)incrementInsetHeight:(float)arg1;
- (void)decrementInsetHeight:(float)arg1;
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (id)initWithScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

