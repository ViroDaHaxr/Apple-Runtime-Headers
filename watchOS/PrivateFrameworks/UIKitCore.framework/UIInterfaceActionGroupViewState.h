//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionVisualStyleViewState.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying>
{
    _Bool _isVerticalLayoutAxis;
    int _resolvedPresentationStyle;
}

@property(readonly, nonatomic) int resolvedPresentationStyle; // @synthesize resolvedPresentationStyle=_resolvedPresentationStyle;
@property(readonly, nonatomic) _Bool isVerticalLayoutAxis; // @synthesize isVerticalLayoutAxis=_isVerticalLayoutAxis;
- (_Bool)_stateEqualToGroupViewState:(id)arg1;
- (void)_collectStateFromGroupViewState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyWithResolvedPresentationStyle:(int)arg1;
- (id)copyWithVerticalLayoutAxis:(_Bool)arg1;
- (id)init;

@end

