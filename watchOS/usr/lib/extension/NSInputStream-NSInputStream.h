//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSInputStream.h>

@interface NSInputStream (NSInputStream)
+ (id)inputStreamWithURL:(id)arg1;
+ (id)inputStreamWithFileAtPath:(id)arg1;
+ (id)inputStreamWithData:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (unsigned long)_cfTypeID;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned int *)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (CDStruct_1ef3fb1f)_cfStreamError;
@end

