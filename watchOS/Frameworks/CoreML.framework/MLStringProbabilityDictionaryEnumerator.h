//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface MLStringProbabilityDictionaryEnumerator : NSEnumerator
{
    __map_iterator_07bfca81 _iter;
    __map_iterator_07bfca81 _iterEnd;
}

+ (id)enumeratorFromMap:(map_df3cd202 *)arg1;
- (id).cxx_construct;
@property(nonatomic) __map_iterator_07bfca81 iterEnd; // @synthesize iterEnd=_iterEnd;
@property(nonatomic) __map_iterator_07bfca81 iter; // @synthesize iter=_iter;
- (id)nextObject;
- (id)initWithStrMap:(map_df3cd202 *)arg1;

@end

