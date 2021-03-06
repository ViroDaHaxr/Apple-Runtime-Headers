//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKActivityStatisticsChartPointSummary, HKUnit, NSArray, NSDate, NSNumber, NSString;

@interface HKActivityStatisticsChartPoint : NSObject <HKChartPoint>
{
    NSDate *_date;
    HKUnit *_unit;
    NSArray *_nodes;
    HKActivityStatisticsChartPointSummary *_summary;
    NSNumber *_totalActiveEnergyBurned;
    NSNumber *_moveGoalValue;
}

- (void).cxx_destruct;
- (id)maxXValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)xValueAsGenericType;
- (id)maxYValue;
- (id)minYValue;
- (id)yValue;
- (id)yValueForKey:(id)arg1;
- (id)userInfo;
- (id)allYValues;
- (double)_nodesCaloriesPercentDifference;
- (id)initWithNodes:(id)arg1 summary:(id)arg2 activityCache:(id)arg3 energyUnit:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

