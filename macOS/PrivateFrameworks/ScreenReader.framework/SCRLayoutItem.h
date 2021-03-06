//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class NSString, SCRElement, SCRLayoutArea;

__attribute__((visibility("hidden")))
@interface SCRLayoutItem : SCRMapElement
{
    SCRLayoutArea *_container;
    SCRElement *_child;
    BOOL _hasMultipleNonHandleChildren;
    NSString *_lastSizeDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastSizeDescription; // @synthesize lastSizeDescription=_lastSizeDescription;
- (void)addAdditionalElementSummaryToRequest:(id)arg1;
- (BOOL)isPartOfSelection;
- (id)overlappingSiblings;
- (BOOL)showResizeOptionsMenuWithRequest:(id)arg1;
- (BOOL)enableRepositionModeWithRequest:(id)arg1;
- (id)descriptionForSizeOffset:(double)arg1 forWidth:(BOOL)arg2;
- (id)descriptionForSize:(struct CGSize)arg1 orientation:(long long)arg2;
- (void)echoSizeChangeForScale:(long long)arg1 width:(BOOL)arg2 request:(id)arg3;
- (void)describePositionChangeFromPosition:(id)arg1;
- (BOOL)addSelectionDescriptionToRequest:(id)arg1;
- (void)addItemNameToRequest:(id)arg1;
- (id)statusDescription;
- (id)captionDescriptionContainsUserLabel:(char *)arg1 containsAncestorLabel:(char *)arg2;
- (id)titleDescription;
- (id)valueDescription;
- (id)valueAsString;
- (BOOL)interactUpShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactDownShiftWithEvent:(id)arg1 request:(id)arg2;
- (void)_moveVOFocusToChild:(id)arg1;
- (BOOL)ignoreDragNotifications;
- (BOOL)alwaysAllowDrag;
- (id)firstChildForFocusing;
- (id)resizeHandleUIElements;
- (BOOL)allowBuildChildren;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)_shouldMorphWithSingleChild;
- (id)_child;
- (id)parentLayoutArea;
- (id)containerIncludingScrollAreas:(BOOL)arg1;
- (struct CGRect)enclosingBoundsIncludesScrollArea:(BOOL)arg1;
- (BOOL)isContainerElement;
- (BOOL)isInteractive;

@end

