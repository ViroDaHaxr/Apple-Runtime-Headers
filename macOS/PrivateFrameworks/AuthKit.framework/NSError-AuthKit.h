//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (AuthKit)
+ (id)ak_wrappedAnisetteError:(int)arg1;
+ (id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1;
- (BOOL)ak_isAuthenticationErrorWithCode:(long long)arg1;
- (BOOL)ak_isServiceError;
- (BOOL)ak_isUserInitiatedError;
- (BOOL)ak_isUserTryAgainError;
- (BOOL)ak_isUserSkippedError;
- (BOOL)ak_isUserCancelError;
- (id)ak_errorByAppendingUserInfo:(id)arg1;
@end

