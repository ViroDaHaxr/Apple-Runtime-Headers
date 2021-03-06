//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@class NSObject, PKHostPlugIn;
@protocol OS_dispatch_queue;

@interface PKHostDefaults : NSUserDefaults
{
    PKHostPlugIn *_plugin;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak PKHostPlugIn *plugin; // @synthesize plugin=_plugin;
- (void)registerDefaults:(id)arg1;
- (_Bool)synchronize;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initWithPlugIn:(id)arg1;

@end

