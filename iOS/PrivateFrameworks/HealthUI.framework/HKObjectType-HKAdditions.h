//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKObjectType.h>

@interface HKObjectType (HKAdditions)
- (id)hk_formatMetadataValue:(id)arg1 displayType:(id)arg2 unitPreferencesController:(id)arg3;
- (id)_hk_formatMetadataValueForMetadataKey:(id)arg1 object:(id)arg2 unitPreferenceController:(id)arg3;
- (id)hk_formatSecondaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_formatPrimaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_metadataValueDisplayType;
- (id)hk_secondaryMetadataKey;
- (id)hk_primaryMetadataKey;
- (Class)hk_valueFormatterClass;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2 formattingContext:(long long)arg3;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2;
- (long long)associatedSampleAggregationStyle;
@end

