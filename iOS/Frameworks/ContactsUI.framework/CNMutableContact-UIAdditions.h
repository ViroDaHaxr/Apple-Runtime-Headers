//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Contacts/CNMutableContact.h>

@class NSArray;

@interface CNMutableContact (UIAdditions)
- (void)updateImageInfoWithType:(unsigned long long)arg1;
- (void)removePhoto;
@property(copy, nonatomic) NSArray *birthdays;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3 request:(id)arg4;
- (_Bool)saveContactInStore:(id)arg1 group:(id)arg2 container:(id)arg3;
- (void)updateContactTypeWithPolicy:(id)arg1;
- (id)addProperties:(id)arg1 excludingProperties:(id)arg2 fromContact:(id)arg3;
- (id)addAllPropertiesFromContact:(id)arg1;
- (_Bool)hasNonPersistedData;
@end

