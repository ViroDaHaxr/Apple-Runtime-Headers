//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class REFeature;

@interface REFeatureValuePair : NSObject <NSCopying>
{
    REFeature *_feature;
    unsigned long long _value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
@property(readonly, nonatomic) REFeature *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithFeature:(id)arg1 value:(unsigned long long)arg2;

@end

