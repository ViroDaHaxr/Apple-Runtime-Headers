//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisualTestKit/VTKColorDifferenceStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VTKCIEDE2000Strategy : NSObject <VTKColorDifferenceStrategy>
{
}

+ (void)getLightness:(double *)arg1 A:(double *)arg2 B:(double *)arg3 alpha:(double *)arg4 fromColor:(id)arg5;
+ (double)CIEDE2000_L1:(double)arg1 A1:(double)arg2 B1:(double)arg3 L2:(double)arg4 A2:(double)arg5 B2:(double)arg6;
- (double)differenceBetweenColor:(id)arg1 andColor:(id)arg2;
@property(readonly, nonatomic) double tolerance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

