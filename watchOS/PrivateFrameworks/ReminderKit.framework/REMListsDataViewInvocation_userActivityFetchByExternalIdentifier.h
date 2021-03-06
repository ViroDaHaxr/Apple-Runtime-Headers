//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ReminderKit/REMStoreInvocation.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSString, REMObjectID;

@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>
{
    NSString *_externalIdentifier;
    REMObjectID *_accountObjectID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *accountObjectID; // @synthesize accountObjectID=_accountObjectID;
@property(readonly, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 accountObjectID:(id)arg2;

@end

