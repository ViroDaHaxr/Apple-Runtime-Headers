//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSCharts/TSCHChartValueAxis.h>

@class TSCHChartAxisAnalysis;

@interface TSCHChartStackedPercentValueAxis : TSCHChartValueAxis
{
    TSCHChartAxisAnalysis *mInProgressAnalysisForErrorBarData;
}

- (void).cxx_destruct;
- (void)updateGridValueTypeInterceptInAnalysis:(id)arg1;
- (id)valueForFormattedString:(id)arg1;
- (id)formattedStringForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (id)dataFormatterForSeries:(id)arg1 groupIndex:(unsigned long long)arg2;
- (_Bool)usesPercentNumberFormatPropertyForSeriesDataFormatting;
- (_Bool)editableFormatForValueStrings;
- (id)dataFormatter;
- (double *)unitSpaceValuesForSeries:(id)arg1 groupIndexSet:(id)arg2 min:(double)arg3 max:(double)arg4;
- (double)unitSpaceValueForDataSpaceValue:(double)arg1 series:(id)arg2 groupIndex:(unsigned long long)arg3 addValuesFromAllPreviousSeries:(_Bool)arg4;
- (double)unitSpaceValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4;
- (void)adjustMinMaxForDataRangeInAnalysis:(id)arg1;
- (id)formattedStringForAxisValue:(id)arg1;
- (double)interceptForAxis:(id)arg1;
- (double)doubleAxisToModelValue:(double)arg1;
- (double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2;
- (void)updateModelMinMaxForErrorBarsOnSeries:(id)arg1 axisID:(id)arg2 analysis:(id)arg3;
- (void)updateMultiDataModelAxisAnalysis:(id)arg1;
- (void)updateModelAxisAnalysis:(id)arg1;
- (double)totalForIndex:(unsigned long long)arg1 useDownsampledTotals:(_Bool)arg2;
- (double)totalForGroupIndex:(unsigned long long)arg1 series:(id)arg2;
- (id)userMin;
- (id)userMax;
- (_Bool)supportsReferenceLines;

@end

