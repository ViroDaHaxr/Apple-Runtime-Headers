//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElement, NSDictionary, VUIRouterDataSource;

__attribute__((visibility("hidden")))
@interface VUIViewElementDataSource : NSObject
{
    NSDictionary *_dataDictionary;
    VUIRouterDataSource *_routerDataSource;
    IKViewElement *_viewElement;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIRouterDataSource *routerDataSource; // @synthesize routerDataSource=_routerDataSource;
@property(copy, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
- (id)initWithDataDictionary:(id)arg1 viewElement:(id)arg2;

@end

