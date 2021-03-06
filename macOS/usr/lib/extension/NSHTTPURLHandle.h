//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLHandle.h>

@class NSDictionary, NSMutableData;

__attribute__((visibility("hidden")))
@interface NSHTTPURLHandle : NSURLHandle
{
    struct __CFHTTPMessage *request;
    struct __CFReadStream *httpStream;
    NSMutableData *errorPage;
    unsigned char examinedHeaders;
    char _padding[3];
    NSDictionary *proxyConfig;
}

+ (id)cachedHandleForURL:(id)arg1;
+ (BOOL)canInitWithURL:(id)arg1;
+ (id)canonicalHTTPURLForURL:(id)arg1;
+ (void)initialize;
- (void)performStreamRead;
- (void)_processHeaders:(struct __CFHTTPMessage *)arg1;
- (long long)expectedResourceDataSize;
- (void)reportStreamError;
- (void)endLoadInBackground;
- (void)beginLoadInBackground;
- (id)loadInForeground;
- (void)_configureStreamDetails:(struct __CFReadStream *)arg1;
- (void)populateCacheFromStream:(struct __CFReadStream *)arg1 data:(id)arg2;
- (void)flushCachedData;
- (BOOL)writeProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKeyIfAvailable:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (BOOL)writeData:(id)arg1;
- (id)_URL;
- (void)dealloc;
- (id)initWithURL:(id)arg1 cached:(BOOL)arg2;
- (struct __CFHTTPMessage *)_constructRequestForURL:(id)arg1 isHead:(BOOL)arg2;

@end

