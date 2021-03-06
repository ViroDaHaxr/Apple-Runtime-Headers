//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccessibilitySharedSupport/AXSSMotionTrackingInput.h>

@class NSDictionary, NSNumber, NSString;

@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput
{
    NSString *_deviceUniqueID;
    NSNumber *_productID;
    NSNumber *_vendorID;
    NSString *_deviceName;
}

+ (BOOL)supportsSecureCoding;
+ (id)motionTrackingHIDInputWithDevice:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSNumber *vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSNumber *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
- (BOOL)isHIDDevice;
- (BOOL)supportsExpressions;
- (unsigned long long)trackingType;
- (id)initWithPlistDictionary:(id)arg1;
- (id)plistDictionary;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSDictionary *hidMatchingDictionary;
- (id)uniqueIdentifier;
- (id)name;
- (id)initWithDeviceUniqueID:(id)arg1 productID:(id)arg2 vendorID:(id)arg3 deviceName:(id)arg4;

@end

