//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation
{
}

- (_Bool)_canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (_Bool)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double *)arg2;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
@property(readonly, nonatomic) double preferredTimeoutIntervalForRequest;

@end

