//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MPCluster : NSObject
{
    NSMutableArray *mSlides;
    NSMutableSet *mPathsInCluster;
    NSString *mName;
    double mRating;
    NSMutableDictionary *mUsageCounterPerLayer;
}

@property(retain) NSMutableDictionary *usageCounterPerLayer; // @synthesize usageCounterPerLayer=mUsageCounterPerLayer;
@property double rating; // @synthesize rating=mRating;
@property(copy) NSString *name; // @synthesize name=mName;
@property(retain) NSMutableArray *items; // @synthesize items=mSlides;
- (id)description;
- (void)detailedDescription;
- (id)usageCountDescription;
- (void)resetAllUsageCounters;
- (double)usageCountForLayer:(id)arg1;
- (void)setUsageCountForLayer:(id)arg1 to:(double)arg2;
- (id)allSlidesSortedChronologically;
- (BOOL)clusterContainsSlideAtPath:(id)arg1;
- (id)allSlidesSortedByUser;
- (id)allSlides;
- (long long)slideCount;
- (void)removeAllSlides;
- (void)addSlide:(id)arg1;
- (void)dealloc;
- (id)init;

@end

