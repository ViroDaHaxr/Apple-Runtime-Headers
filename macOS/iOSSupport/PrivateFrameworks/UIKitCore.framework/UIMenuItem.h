//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIMenuItem : NSObject
{
    BOOL _dontDismiss;
    NSString *_title;
    SEL _action;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL dontDismiss; // @synthesize dontDismiss=_dontDismiss;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2;
- (id)init;

@end

