//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LaunchServices/_LSDBEnumerator.h>

__attribute__((visibility("hidden")))
@interface _LSExtensionPointEnumerator : _LSDBEnumerator
{
    struct vector<const LSExtensionPointData *, std::__1::allocator<const LSExtensionPointData *>> _extensionDatas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_getObject:(id *)arg1 atIndex:(unsigned long long)arg2 context:(struct LSContext *)arg3;
- (BOOL)_prepareWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end

