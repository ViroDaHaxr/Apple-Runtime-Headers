//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCCache.h>

__attribute__((visibility("hidden")))
@interface QCProviderImageCache : QCCache
{
    QCCache *_imageCache;
    QCCache *_representationCache;
}

- (void)_collectResourcesForSize;
- (void)_removeResourceAtIndex:(unsigned long long)arg1;
- (void)addResource:(id)arg1 withSize:(double)arg2 cost:(double)arg3 md5List:(CDStruct_bdcb2b0d *)arg4 count:(unsigned long long)arg5;
- (void)dealloc;
- (id)_copyCacheWithFunction:(CDUnknownFunctionPointerType)arg1 userInfo:(void *)arg2 userInfoReleaseCallback:(CDUnknownFunctionPointerType)arg3 md5List:(CDStruct_bdcb2b0d *)arg4 md5Indices:(unsigned long long *)arg5 md5Count:(unsigned long long)arg6;
- (id)initWithMaximumSize:(double)arg1 maximumResourceAge:(double)arg2 options:(id)arg3;

@end

