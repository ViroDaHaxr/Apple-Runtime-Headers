//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider
{
    _Bool _includeCurrentUser;
    unsigned int _nameStyle;
    HMHome *_home;
    NSMutableSet *_userItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *userItems; // @synthesize userItems=_userItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) unsigned int nameStyle; // @synthesize nameStyle=_nameStyle;
@property(nonatomic) _Bool includeCurrentUser; // @synthesize includeCurrentUser=_includeCurrentUser;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1;
- (id)init;

@end

