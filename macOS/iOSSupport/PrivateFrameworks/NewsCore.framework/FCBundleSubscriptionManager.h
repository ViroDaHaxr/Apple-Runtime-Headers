//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppActivityObserving-Protocol.h>
#import <NewsCore/FCBundleChannelProviderDelegate-Protocol.h>
#import <NewsCore/FCBundleSubscriptionManagerType-Protocol.h>

@class FCBundleSubscription, FCBundleSubscriptionLookUpEntryManager, FCKeyValueStore, FCPurchaseLookupRecordSource, NFMutexLock, NSHashTable, NSString;
@protocol FCBundleChannelProviderType, FCBundleEntitlementsProviderType, FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

@interface FCBundleSubscriptionManager : NSObject <FCAppActivityObserving, FCBundleChannelProviderDelegate, FCBundleSubscriptionManagerType>
{
    BOOL _hasRunEntitlementOnce;
    id <FCBundleEntitlementsProviderType> _bundleEntitlementsProvider;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    FCBundleSubscription *_cachedSubscription;
    FCKeyValueStore *_localStore;
    FCBundleSubscriptionLookUpEntryManager *_bundleSubscriptionLookupEntryManager;
    NSHashTable *_observers;
    NFMutexLock *_accessLock;
    id <FCBundleChannelProviderType> _bundleChannelProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasRunEntitlementOnce; // @synthesize hasRunEntitlementOnce=_hasRunEntitlementOnce;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain, nonatomic) id <FCBundleChannelProviderType> bundleChannelProvider; // @synthesize bundleChannelProvider=_bundleChannelProvider;
@property(retain, nonatomic) NFMutexLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) FCBundleSubscriptionLookUpEntryManager *bundleSubscriptionLookupEntryManager; // @synthesize bundleSubscriptionLookupEntryManager=_bundleSubscriptionLookupEntryManager;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) FCBundleSubscription *cachedSubscription; // @synthesize cachedSubscription=_cachedSubscription;
@property(readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource; // @synthesize purchaseLookupRecordSource=_purchaseLookupRecordSource;
@property(readonly, nonatomic) id <FCBundleEntitlementsProviderType> bundleEntitlementsProvider; // @synthesize bundleEntitlementsProvider=_bundleEntitlementsProvider;
- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) FCBundleSubscription *bundleSubscription;
- (id)changeSetBetween:(id)arg1 newSubscription:(id)arg2;
- (void)notifyObserversForChangeStateWithNewSubscription:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3;
- (void)notifyObserversForExpiredStateWithSubscription:(id)arg1;
- (void)notifyObserversForSubscribedStateWithSubscription:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (id)bundleSubscriptionLookupEntry;
- (void)updateCachedSubscriptionWithSubscription:(id)arg1;
- (void)updateHasRunEntitlementOnce:(BOOL)arg1;
- (void)clearBundleSubscription;
- (void)expireBundleSubscription;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bundleChannelProvider:(id)arg1 bundleChannelIDsDidChangeWithChannelIDs:(id)arg2;
- (void)activityObservingApplicationDidEnterBackground;
@property(retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; // @dynamic entitlementsOverrideProvider;
- (void)setupCachedSubscription;
- (id)initWithPrivateDataDirectory:(id)arg1 configurationManager:(id)arg2 purchaseLookupRecordSource:(id)arg3 appActivityMonitor:(id)arg4 entitlementsProvider:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

