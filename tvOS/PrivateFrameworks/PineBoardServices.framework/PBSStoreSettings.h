//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PBSStoreSettings : NSObject
{
    id _domainObserver;
    _Bool _cachedShowSampleUberRow;
    _Bool _cachedShowSampleFlowcases;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_refreshPropertiesWithPreferences;
@property(nonatomic) _Bool showSampleFlowcases;
@property(nonatomic) _Bool showSampleUberRow;
- (void)dealloc;
- (id)init;

@end

