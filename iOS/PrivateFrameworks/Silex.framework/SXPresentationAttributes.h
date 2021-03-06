//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SXPresentationAttributes : NSObject
{
    _Bool _fadeInComponents;
    _Bool _enableViewportDebugging;
    _Bool _testingConditionEnabled;
    NSString *_contentSizeCategory;
    unsigned long long _presentationMode;
    double _contentScaleFactor;
    struct CGSize _canvasSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool testingConditionEnabled; // @synthesize testingConditionEnabled=_testingConditionEnabled;
@property(nonatomic) _Bool enableViewportDebugging; // @synthesize enableViewportDebugging=_enableViewportDebugging;
@property(nonatomic) double contentScaleFactor; // @synthesize contentScaleFactor=_contentScaleFactor;
@property(nonatomic) _Bool fadeInComponents; // @synthesize fadeInComponents=_fadeInComponents;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

