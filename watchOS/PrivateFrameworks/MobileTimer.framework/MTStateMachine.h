//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTStateMachineEventHandler-Protocol.h>

@class MTStateMachineState, NSString;
@protocol MTStateMachineDelegate, MTStateMachineInfoProvider;

@interface MTStateMachine : NSObject <MTStateMachineEventHandler>
{
    MTStateMachineState *_currentState;
    id <MTStateMachineDelegate> _delegate;
    id <MTStateMachineInfoProvider> _infoProvider;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MTStateMachineInfoProvider> infoProvider; // @synthesize infoProvider=_infoProvider;
@property(nonatomic) __weak id <MTStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTStateMachineState *currentState; // @synthesize currentState=_currentState;
@property(readonly, copy) NSString *description;
- (id)stateMachineName;
- (id)stateMachineLog;
- (void)enterState:(id)arg1;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

