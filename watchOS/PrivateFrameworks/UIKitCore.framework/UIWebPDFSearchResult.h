//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject
{
    NSArray *rotationAngles;
    unsigned int pageIndex;
    NSArray *strings;
    NSString *string;
    NSArray *rects;
    struct CGRect boundingBox;
}

@property(retain, nonatomic) NSArray *rects; // @synthesize rects;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox;
@property(retain, nonatomic) NSString *string; // @synthesize string;
@property(retain, nonatomic) NSArray *strings; // @synthesize strings;
@property(nonatomic) unsigned int pageIndex; // @synthesize pageIndex;
@property(retain, nonatomic) NSArray *rotationAngles; // @synthesize rotationAngles;
- (id)description;
- (void)dealloc;

@end

