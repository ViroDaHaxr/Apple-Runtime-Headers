//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RVSLogger : NSObject
{
    NSString *_name;
}

+ (id)loggerWithName:(id)arg1;
+ (id)defaultLogger;
- (void).cxx_destruct;
- (void)debug:(id)arg1;
- (void)_logMessage:(id)arg1 values:(struct __va_list_tag [1])arg2;
- (id)_initWithName:(id)arg1;

@end

