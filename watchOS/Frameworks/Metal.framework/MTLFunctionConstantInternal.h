//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLFunctionConstant.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLFunctionConstantInternal : MTLFunctionConstant
{
    NSString *_name;
    unsigned int _type;
    unsigned int _index;
    _Bool _required;
}

- (_Bool)required;
- (unsigned int)index;
- (unsigned int)type;
- (id)name;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(unsigned int)arg2 index:(unsigned int)arg3 required:(_Bool)arg4;

@end

