//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DEContext : NSObject
{
    void *_This;
}

+ (id)globalParameters;
@property void *This; // @synthesize This=_This;
@property(readonly) NSString *locale;
@property(readonly) NSString *loadStatus;
- (void)setTemplateDir:(id)arg1;
- (id)getFile;
- (void)setFile:(id)arg1;
- (id)findVariable:(id)arg1;
- (void)addVariable:(id)arg1;
- (_Bool)load:(id)arg1 locale:(id)arg2;
- (void)dealloc;
- (id)init;

@end

