//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGTextFeature : NSObject
{
    float _weight;
    NSString *_string;
    NSString *_originalString;
    unsigned long long _type;
    unsigned long long _origin;
}

+ (unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)arg1;
+ (id)vipTextFeatureTypes;
+ (id)mergedTextFeatureFromTextFeatures:(id)arg1;
+ (id)stringForFeatureType:(unsigned long long)arg1;
+ (id)stringForFeatureOrigin:(unsigned long long)arg1;
+ (id)graphNamesForNode:(id)arg1;
+ (id)_localizedNameForLocalizableNode:(id)arg1;
+ (id)textFeaturesFromString:(id)arg1 synonyms:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 options:(unsigned long long)arg5;
+ (id)_tokensFromString:(id)arg1 lemmatize:(BOOL)arg2;
+ (id)textFeaturesFromString:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;
+ (id)_stringToIndexFromTokens:(id)arg1;
+ (id)textFeaturesFromNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3 options:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void)markAsStrippedOut;
- (id)description;
- (id)initWithString:(id)arg1 originalString:(id)arg2 type:(unsigned long long)arg3 weight:(float)arg4 origin:(unsigned long long)arg5;

@end

