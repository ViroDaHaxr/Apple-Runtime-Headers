//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPItem, NSData;
@protocol FPXPCAutomaticErrorProxy><FPXEnumerator;

__attribute__((visibility("hidden")))
@interface FPDItemIteratorEnumState : NSObject
{
    FPItem *_parentItem;
    id <FPXPCAutomaticErrorProxy><FPXEnumerator> _enumerator;
    NSData *_nextPage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) id <FPXPCAutomaticErrorProxy><FPXEnumerator> enumerator; // @synthesize enumerator=_enumerator;
@property(retain, nonatomic) FPItem *parentItem; // @synthesize parentItem=_parentItem;

@end

