//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFControlItem, HFControlPanelItem, HFServiceItem, HFValueTransformer, HUControlPanelCell, NSString;
@protocol HUControlPanelRule;

@protocol HUControlPanelConfiguration <NSObject>
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;
- (void)setupControlsForCell:(HUControlPanelCell *)arg1 item:(HFControlPanelItem *)arg2;

@optional
- (NSString *)sectionFooterForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (NSString *)sectionTitleForItem:(HFControlPanelItem *)arg1 forSourceItem:(HFServiceItem *)arg2;
- (_Bool)shouldShowSectionFooterForItem:(HFControlPanelItem *)arg1;
- (_Bool)shouldShowSectionTitleForItem:(HFControlPanelItem *)arg1;
- (HFValueTransformer *)valueTransformerForControlItem:(HFControlItem *)arg1;
@end

