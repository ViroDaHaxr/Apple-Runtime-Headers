//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXPerforming-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface SVXQueuePerformer : NSObject <SVXPerforming>
{
    NSString *_identifier;
    unsigned long long _options;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedMainQueuePerformer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (BOOL)_isExecutingInContext;
- (void)_performBlock:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (id)_initWithIdentifier:(id)arg1 queue:(id)arg2 options:(unsigned long long)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 withOptions:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 options:(unsigned long long)arg4;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

