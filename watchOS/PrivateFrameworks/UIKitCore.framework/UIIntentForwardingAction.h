//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class INIntent;

@interface UIIntentForwardingAction : BSAction
{
    INIntent *_cachedIntent;
}

- (void).cxx_destruct;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (int)UIActionType;
@property(readonly, nonatomic) INIntent *intent;
- (id)initWithIntent:(id)arg1 reply:(CDUnknownBlockType)arg2;

@end

