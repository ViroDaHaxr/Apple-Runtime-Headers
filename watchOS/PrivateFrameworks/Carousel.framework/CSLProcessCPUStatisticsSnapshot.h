//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLProcessCPUStatisticsSnapshot-Protocol.h>

@class NSString;

@interface CSLProcessCPUStatisticsSnapshot : NSObject <CSLProcessCPUStatisticsSnapshot>
{
    double _totalElapsedTime;
    double _totalElapsedUserTime;
    double _totalElapsedSystemTime;
    double _totalElapsedIdleTime;
    double _applicationCPUTime;
}

@property(nonatomic) double applicationCPUTime; // @synthesize applicationCPUTime=_applicationCPUTime;
@property(nonatomic) double totalElapsedIdleTime; // @synthesize totalElapsedIdleTime=_totalElapsedIdleTime;
@property(nonatomic) double totalElapsedSystemTime; // @synthesize totalElapsedSystemTime=_totalElapsedSystemTime;
@property(nonatomic) double totalElapsedUserTime; // @synthesize totalElapsedUserTime=_totalElapsedUserTime;
@property(nonatomic) double totalElapsedTime; // @synthesize totalElapsedTime=_totalElapsedTime;
@property(readonly, nonatomic) int busyPercent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

