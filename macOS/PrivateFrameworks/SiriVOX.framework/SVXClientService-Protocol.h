//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriVOX/NSObject-Protocol.h>

@class SVXActivationContext, SVXDeactivationContext, SVXDeviceSetupContext, SVXSpeechSynthesisRequest;

@protocol SVXClientService <NSObject>
- (oneway void)prepareForDeviceSetupWithContext:(SVXDeviceSetupContext *)arg1 completion:(void (^)(SVXDeviceSetupFlow *, NSError *))arg2;
- (oneway void)setDeviceSetupContext:(SVXDeviceSetupContext *)arg1;
- (oneway void)stopSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)cancelPendingSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)enqueueSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1 completion:(void (^)(SVXSpeechSynthesisResult *))arg2;
- (oneway void)fetchAudioPowerWithType:(long long)arg1 completion:(void (^)(AFXPCWrapper *, NSError *))arg2;
- (oneway void)transitToAutomaticEndpointing;
- (oneway void)performManualEndpointing;
- (oneway void)deactivateWithContext:(SVXDeactivationContext *)arg1 completion:(void (^)(void))arg2;
- (oneway void)activateWithContext:(SVXActivationContext *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)prewarmWithContext:(SVXActivationContext *)arg1 completion:(void (^)(void))arg2;
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)fetchSessionActivityStateWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (oneway void)fetchSessionStateWithCompletion:(void (^)(long long, NSError *))arg1;
- (oneway void)pingWithReply:(void (^)(NSError *))arg1;
@end

