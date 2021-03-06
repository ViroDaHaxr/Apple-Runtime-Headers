//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CIImageProcessorKernel : NSObject
{
}

+ (id)applyWithExtent:(struct CGRect)arg1 inputs:(id)arg2 arguments:(id)arg3 error:(id *)arg4;
+ (unsigned long long)_digestForArgs:(id)arg1;
+ (BOOL)skipFormatChecks;
+ (_Bool)synchronizeInputs;
+ (BOOL)allowPartialOutputRegion;
+ (_Bool)outputIsOpaque;
+ (_Bool)canReduceOutputChannels;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (int)outputFormat;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (int)formatForInputAtIndex:(int)arg1;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;

@end

