//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class NSDictionary, NSString, TVSSContentItem, TVSSSearchResultBatch;

@protocol TVJSSearchSiriContext <JSExport>
@property(readonly, copy, nonatomic) NSString *pluginMode;
- (void)sendMetricsWithCategory:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)fetchNextBatch:(TVSSSearchResultBatch *)arg1;
- (void)didPlayContentItemInPartialScreenPluginMode:(TVSSContentItem *)arg1;
- (void)didSelectContentItemInPartialScreenPluginMode:(TVSSContentItem *)arg1;
@end

