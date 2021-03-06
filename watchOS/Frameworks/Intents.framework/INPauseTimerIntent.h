//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntent.h>

#import <Intents/INPauseTimerIntentExport-Protocol.h>

@class INTimer, NSNumber, NSString;

@interface INPauseTimerIntent : INIntent <INPauseTimerIntentExport>
{
}

- (void)setParametersByName:(id)arg1;
- (id)parametersByName;
- (void)setVerb:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)domain;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1 containingAppBundleId:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)setPauseMultiple:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *pauseMultiple;
- (void)setTargetTimer:(id)arg1;
@property(readonly, copy, nonatomic) INTimer *targetTimer;
- (id)initWithTargetTimer:(id)arg1 pauseMultiple:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_metadata;
- (id)_typedBackingStore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

