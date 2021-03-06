//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying>
{
    HKMedicalDate *_startDate;
    HKMedicalDate *_endDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id *)arg3;
+ (id)medicalDateIntervalWithEndDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) HKMedicalDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) HKMedicalDate *startDate; // @synthesize startDate=_startDate;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;

@end

