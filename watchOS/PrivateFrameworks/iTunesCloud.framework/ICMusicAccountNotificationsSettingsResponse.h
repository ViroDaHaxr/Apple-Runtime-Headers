//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject
{
    NSDictionary *_responseDictionary;
    _Bool _wasSuccessful;
}

+ (id)createResponseBodyWithSwitches:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wasSuccessful; // @synthesize wasSuccessful=_wasSuccessful;
@property(readonly, nonatomic) NSArray *settingsSwitches;
- (id)initWithResponseDictionary:(id)arg1;

@end

