//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesToGroupsValueTransformer : NSValueTransformer
{
    NSString *_identifierKeyPath;
    NSValueTransformer *_identifierTitleTransformer;
    CDUnknownBlockType _groupsSortComparator;
}

+ (_Bool)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType groupsSortComparator; // @synthesize groupsSortComparator=_groupsSortComparator;
@property(retain, nonatomic) NSValueTransformer *identifierTitleTransformer; // @synthesize identifierTitleTransformer=_identifierTitleTransformer;
@property(copy, nonatomic) NSString *identifierKeyPath; // @synthesize identifierKeyPath=_identifierKeyPath;
- (id)transformedValue:(id)arg1;
- (id)initWithIdentifierKeyPath:(id)arg1;
- (id)init;

@end

