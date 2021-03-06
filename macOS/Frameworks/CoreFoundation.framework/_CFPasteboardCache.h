//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardCache : NSObject
{
    struct __CFArray *orderedEntries;
    struct __CFDictionary *entriesByItemIdentifier;
    struct __CFDictionary *indexesByItemIdentifier;
    struct __CFArray *itemArray;
    int generation;
    int changeCount;
}

@property(readonly) const struct __CFArray *orderedEntries; // @synthesize orderedEntries;
@property int changeCount; // @synthesize changeCount;
@property(readonly) int generation; // @synthesize generation;
- (void)bumpChangeCount;
- (int)indexForItem:(int)arg1;
- (CDStruct_6ea78fe2)copyFlavorsForItemIdentifier:(long long)arg1;
- (CDStruct_b6748e3c)flavorCountForItemIdentifier:(long long)arg1;
- (CDStruct_b6748e3c)itemAtIndex:(long long)arg1;
- (CDStruct_b6748e3c)itemCount;
- (CDStruct_9e943ef1)copyItemsAndFlavors;
- (id)entryForGeneration:(int)arg1 itemIdentifier:(int)arg2 flavor:(struct __CFString *)arg3 errorCode:(int *)arg4;
- (void)clearForGeneration:(int)arg1;
- (id)updateEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)prepareDataForItemIdentifier:(long long)arg1 flavor:(struct __CFString *)arg2;
- (void)prepareMetadata;

@end

