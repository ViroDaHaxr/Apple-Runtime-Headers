//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>
{
}

+ (id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaContentRatingRestrictions;
@property(nonatomic) long long tvRestriction;
@property(nonatomic) long long movieRestriction;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) long long appRestriction;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

