//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISInvocationRecorder.h>

@class Protocol;

@interface SUResponderChainInvocationRecorder : ISInvocationRecorder
{
    Protocol *_protocol;
}

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)invokeInvocation:(id)arg1;
- (id)adjustedTargetForSelector:(SEL)arg1;
- (id)_targetForSelector:(SEL)arg1 sender:(id)arg2;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;

@end

