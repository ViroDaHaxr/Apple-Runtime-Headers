//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VisualTestKit/NSObject-Protocol.h>

@class NSString, UIImage, XCTestCase;
@protocol VTKAssertID;

@protocol VTKReferenceItemsSource <NSObject>
- (UIImage *)referenceImageWithID:(id <VTKAssertID>)arg1 testCase:(XCTestCase *)arg2 error:(id *)arg3;

@optional
@property(copy, nonatomic) NSString *itemsDirectory;
@end

