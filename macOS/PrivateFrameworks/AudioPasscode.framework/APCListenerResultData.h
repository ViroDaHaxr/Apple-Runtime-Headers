//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APCListenerResultData : NSObject
{
    unsigned long long _completionTime;
}

@property(nonatomic) unsigned long long completionTime; // @synthesize completionTime=_completionTime;
- (void)reset;
- (BOOL)isValid;
- (id)initWithPasscodeDurationNSec:(unsigned long long)arg1;

@end

