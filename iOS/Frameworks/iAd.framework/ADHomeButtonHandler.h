//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iAd/SBSHardwareButtonEventConsuming-Protocol.h>

@class NSString;
@protocol BSInvalidatable;

@interface ADHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming>
{
    CDUnknownBlockType _homeButtonHandlerCallback;
    id <BSInvalidatable> _homeButtonAssertion;
}

+ (id)handlerWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <BSInvalidatable> homeButtonAssertion; // @synthesize homeButtonAssertion=_homeButtonAssertion;
@property(copy, nonatomic) CDUnknownBlockType homeButtonHandlerCallback; // @synthesize homeButtonHandlerCallback=_homeButtonHandlerCallback;
- (void)consumeSinglePressUpForButtonKind:(long long)arg1;
- (void)stopConsumingHardwarePresses;
- (void)startConsumingHardwarePresses:(CDUnknownBlockType)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

