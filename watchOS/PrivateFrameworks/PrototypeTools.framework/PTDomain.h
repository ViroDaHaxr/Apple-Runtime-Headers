//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTDomainClient-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PTDomainInfo, PTSettings, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient>
{
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    _Bool _registrationRequested;
    _Bool _registrationCompleted;
    _Bool _haveSentProxyDefinition;
    double _delayBeforeRegisteringAfterInterruption;
    _Bool _archiveIsApplied;
}

+ (Class)rootSettingsClass;
+ (id)domainName;
+ (id)domainGroupName;
+ (id)_sharedInstance;
+ (void)registerTestRecipe:(id)arg1;
+ (id)rootSettings;
- (void).cxx_destruct;
- (void)_noteRegistrationCompleted;
- (void)_registerWithServerIfNecessary;
- (void)_handleConnectionInvalidated;
- (void)_handleConnectionInterrupted;
- (void)_tearDownConnection;
- (void)_createConnection;
- (void)_sendProxyDefinitionIfNecessary;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)_disableObservationIfNecessary;
- (void)_restoreDefaultSettings;
- (void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)_applyArchive:(id)arg1;
- (void)_updateActiveTestRecipe;
- (void)_registerTestRecipe:(id)arg1;
- (id)_rootSettings;
- (void)sendActiveTestRecipeEvent:(int)arg1;
- (void)invokeOutletAtKeyPath:(id)arg1;
- (void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2;
- (void)restoreDefaultSettings;
- (void)updateSettingsFromArchive:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

