//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKeyboardKeyplaneTransformation-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBContinuousPathModalKeysTransformation : NSObject <UIKeyboardKeyplaneTransformation>
{
}

+ (id)transformationIdentifier;
+ (id)rollbackKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)transformKeyplane:(id)arg1 withTransformationContext:(id)arg2;
+ (id)_donorControlKeysForLastDisplayRowForKeyplane:(id)arg1 transformationContext:(id)arg2;
+ (id)_donorKeyplaneForKeyplane:(id)arg1 transformationContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

