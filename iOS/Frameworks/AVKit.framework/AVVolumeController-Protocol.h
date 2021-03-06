//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class NSString;

@protocol AVVolumeController <NSObject>
+ (id)volumeController;
@property(readonly, nonatomic) _Bool currentRouteHasVolumeControl;
@property(readonly, nonatomic) float effectiveVolumeLimit;
@property(readonly, nonatomic) float volume;
@property(readonly, nonatomic, getter=isChangingVolume) _Bool changingVolume;
- (void)setTargetVolume:(float)arg1;
- (void)endChangingVolume;
- (void)beginChangingVolumeForWindowSceneSessionID:(NSString *)arg1;
- (void)setClientWithIdentifier:(NSString *)arg1 prefersSystemVolumeHUDHidden:(_Bool)arg2 forWindowSceneSessionWithIdentifier:(NSString *)arg3;
@end

