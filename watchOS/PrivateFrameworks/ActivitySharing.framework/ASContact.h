//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASRelationship, CNContactStore, NSSet, NSString, NSUUID;

@interface ASContact : NSObject <NSCopying>
{
    CNContactStore *_contactStore;
    NSString *_linkedContactStoreIdentifier;
    NSString *_fullName;
    NSString *_shortName;
    NSSet *_destinations;
    ASRelationship *_relationship;
    ASRelationship *_remoteRelationship;
}

+ (id)contactWithCodableContact:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) ASRelationship *remoteRelationship; // @synthesize remoteRelationship=_remoteRelationship;
@property(copy, nonatomic) ASRelationship *relationship; // @synthesize relationship=_relationship;
@property(copy, nonatomic) NSSet *destinations; // @synthesize destinations=_destinations;
@property(copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *linkedContactStoreIdentifier; // @synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier;
- (id)_bestDestinationForContact:(id)arg1;
- (id)_bestDestinationFromKnownDestinations;
@property(readonly, copy, nonatomic) NSString *primaryDestinationForMessaging;
- (id)contactStore;
- (void)setContactStore:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSUUID *UUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)codableContactIncludingCloudKitFields:(_Bool)arg1;

@end

