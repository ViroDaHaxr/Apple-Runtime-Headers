//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSException.h>

@interface NSException (ISDFriendlyException)
+ (BOOL)_isdFriendlyExceptionsIsEnabled;
+ (void)_isdUseFriendlyExceptions:(BOOL)arg1;
- (void)_friendlyRaise;
- (id)_friendlyInitWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)_isdErrorWithCode:(long long)arg1 domain:(id)arg2;
@end

