//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDQueryServerClientState : NSObject <NSCopying>
{
    unsigned int _applicationState;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isSuspended) _Bool suspended;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
- (id)initWithApplicationState:(unsigned int)arg1;
- (id)init;

@end

