//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <CoreAudioKit/AUAudioUnitHostViewProtocol-Protocol.h>

@class NSString;

@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitHostViewProtocol>
{
}

+ (void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)isIOSMacExtension:(id)arg1;
+ (void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

