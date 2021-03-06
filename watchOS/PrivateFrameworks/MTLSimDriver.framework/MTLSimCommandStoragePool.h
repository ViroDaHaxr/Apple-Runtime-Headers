//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface MTLSimCommandStoragePool : NSObject
{
    struct StorageEntry *head;
    struct StorageEntry *tail;
    unsigned long long storageSize;
    NSObject<OS_dispatch_semaphore> *semaphore;
}

- (void)returnStorage:(struct StorageEntry *)arg1;
- (struct StorageEntry *)getStorage;
- (struct StorageEntry *)allocStorage;
- (void)dealloc;
- (id)initWithEntrySize:(unsigned long long)arg1;

@end

