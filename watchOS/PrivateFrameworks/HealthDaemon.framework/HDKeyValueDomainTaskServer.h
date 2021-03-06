//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKKeyValueDomainServerInterface-Protocol.h>

@class HDKeyValueDomain;

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface>
{
    HDKeyValueDomain *_keyValueDomain;
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (Class)configurationClass;
+ (id)_entitlementForCategory:(int)arg1;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)remote_allValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_dataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_stringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_dateForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_numberForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setValuesWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setData:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)_unitTest_overrideKeyValueDomainCategory:(int)arg1;
- (_Bool)_performDatabaseTransactionWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (Class)_keyValueEntityClass;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;

@end

