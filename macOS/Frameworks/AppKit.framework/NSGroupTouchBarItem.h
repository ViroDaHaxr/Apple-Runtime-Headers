//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTouchBarItem.h>

#import <AppKit/NSTouchBarItemTypeGroup-Protocol.h>

@class NSArray, NSString, NSTouchBar, NSUserInterfaceCompressionOptions;

@interface NSGroupTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeGroup>
{
    NSTouchBar *_groupTouchBar;
    NSString *_customizationLabel;
    long long _groupUserInterfaceLayoutDirection;
    struct __gtbiFlags {
        unsigned int hasAutomaticLayoutDirection:1;
        unsigned int reserved:31;
    } _gtbiFlags;
    id _private;
}

+ (id)keyPathsForValuesAffectingEffectiveCompressibleUserInterfaceOptions;
+ (id)alertStyleGroupItemWithIdentifier:(id)arg1;
+ (id)groupItemWithIdentifier:(id)arg1 items:(id)arg2 allowedCompressionOptions:(id)arg3;
+ (id)groupItemWithIdentifier:(id)arg1 items:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_itemViewMinSize:(struct CGSize *)arg1 maxSize:(struct CGSize *)arg2 preferredSize:(struct CGSize *)arg3 stretchesContent:(BOOL)arg4;
- (void)item:(id)arg1 minSize:(struct CGSize *)arg2 maxSize:(struct CGSize *)arg3 preferredSize:(struct CGSize *)arg4;
- (id)_defaultCompressionOptionOrder;
- (double)_minimumWidthForCompressionOptions:(id)arg1;
- (void)invalidateMeasurementsOfItem:(id)arg1;
- (void)frameChangesEnded;
- (id)compressionGroupLayout;
- (void)setGroupHasAlertStyle:(BOOL)arg1;
- (BOOL)groupHasAlertStyle;
@property(copy) NSArray *prioritizedCompressionOptions;
@property(readonly) NSUserInterfaceCompressionOptions *effectiveCompressionOptions;
@property double preferredItemWidth;
@property BOOL prefersEqualWidths;
@property long long groupUserInterfaceLayoutDirection;
@property(copy) NSString *customizationLabel;
@property(retain) NSTouchBar *groupTouchBar;
- (void)setHasAutomaticLayoutDirection:(BOOL)arg1;
- (BOOL)hasAutomaticLayoutDirection;
- (long long)_type;
- (void)dealloc;
- (void)_setGroupItems:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize)fallbackItemSizeForCustomization;
- (id)makeViewForCustomizationPreview;
- (id)makeViewForCustomizationPalette;
- (id)_makeContainerTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

