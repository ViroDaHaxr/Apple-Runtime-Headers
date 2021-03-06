//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface SCNHitTestResult : NSObject
{
    struct __C3DHitTestResult *_result;
}

+ (id)hitTestResultsFromHitTestResultRef:(struct __CFArray *)arg1;
- (id)description;
@property(readonly, nonatomic) struct SCNMatrix4 modelTransform;
- (struct CGPoint)textureCoordinate;
- (struct CGPoint)textureCoordinatesWithMappingChannel:(int)arg1;
@property(readonly, nonatomic) struct SCNVector3 worldNormal;
@property(readonly, nonatomic) struct SCNVector3 localNormal;
@property(readonly, nonatomic) struct SCNVector3 worldCoordinates;
@property(readonly, nonatomic) struct SCNVector3 localCoordinates;
@property(readonly, nonatomic) int faceIndex;
@property(readonly, nonatomic) int geometryIndex;
@property(readonly, nonatomic) SCNNode *boneNode;
@property(readonly, nonatomic) SCNNode *node;
- (void)dealloc;
- (id)initWithResult:(struct __C3DHitTestResult *)arg1;
// Error parsing type for property simdModelTransform:
// Property attributes: T{?=[4]},R,N

// Error parsing type for property simdWorldNormal:
// Property attributes: T,R,N

// Error parsing type for property simdLocalNormal:
// Property attributes: T,R,N

// Error parsing type for property simdWorldCoordinates:
// Property attributes: T,R,N

// Error parsing type for property simdLocalCoordinates:
// Property attributes: T,R,N


@end

