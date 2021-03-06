//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXComponentMask.h>

@class NSString;

@interface SXCornersComponentMask : SXComponentMask
{
}

@property(readonly, nonatomic) unsigned long long cornerMask;
- (id)curveWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)cornerWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)bottomLeftWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)bottomRightWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)topRightWithValue:(id)arg1 withType:(int)arg2;
- (BOOL)topLeftWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) BOOL bottomLeft; // @dynamic bottomLeft;
@property(readonly, nonatomic) BOOL bottomRight; // @dynamic bottomRight;
@property(readonly, nonatomic) NSString *curve; // @dynamic curve;
@property(readonly, nonatomic) struct _SXConvertibleValue radius; // @dynamic radius;
@property(readonly, nonatomic) BOOL topLeft; // @dynamic topLeft;
@property(readonly, nonatomic) BOOL topRight; // @dynamic topRight;

@end

