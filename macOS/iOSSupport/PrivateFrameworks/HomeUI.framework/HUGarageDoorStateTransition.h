//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUGarageDoorStateTransition : NSObject
{
    BOOL _fromOpenState;
    BOOL _toOpenState;
}

+ (id)transitionFromState:(BOOL)arg1 toState:(BOOL)arg2;
@property(nonatomic) BOOL toOpenState; // @synthesize toOpenState=_toOpenState;
@property(nonatomic) BOOL fromOpenState; // @synthesize fromOpenState=_fromOpenState;

@end

