//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitServices/BSXPCCoding-Protocol.h>
#import <UIKitServices/NSCopying-Protocol.h>

@class NSString;

@interface UISApplicationSupportDisplayEdgeInsetsWrapper : NSObject <BSXPCCoding, NSCopying>
{
    float _topInset;
    float _leftInset;
    float _bottomInset;
    float _rightInset;
}

@property(nonatomic) float rightInset; // @synthesize rightInset=_rightInset;
@property(nonatomic) float bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) float leftInset; // @synthesize leftInset=_leftInset;
@property(nonatomic) float topInset; // @synthesize topInset=_topInset;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithTop:(float)arg1 left:(float)arg2 bottom:(float)arg3 right:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

