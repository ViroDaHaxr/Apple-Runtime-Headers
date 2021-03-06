//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsFoundation/NSObject-Protocol.h>

@class NSError;

@protocol CNPromise <NSObject>
- (void (^)(NSError *))errorOnlyCompletionHandlerAdapter;
- (void (^)(BOOL, NSError *))boolErrorCompletionHandlerAdapter;
- (void (^)(id, NSError *))completionHandlerAdapterWithDefaultValue:(id)arg1;
- (void (^)(id, NSError *))completionHandlerAdapter;
- (BOOL)finishWithResult:(id)arg1 error:(NSError *)arg2;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithError:(NSError *)arg1;
@end

