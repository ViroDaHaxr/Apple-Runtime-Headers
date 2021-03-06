//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTransientOverlayTransitionContextProviding-Protocol.h>

@class NSMutableArray, NSString;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding>
{
    _Bool _didPerformAlongsideTransitions;
    _Bool _isCompleted;
    NSMutableArray *_transitionBlocks;
    NSMutableArray *_transitionCompletionBlocks;
    _Bool _transitionCompletedSuccessfully;
    _Bool animated;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated;
- (void)transitionAlongsideUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAlongsideTransitions;
- (void)completeTransition:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

