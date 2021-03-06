//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNEncodedFetchCursor-Protocol.h>

@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration, NSString;
@protocol CNContactsLogger, CNEncodedFetchCursor;

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor>
{
    void *_addressBook;
    CNContactFetchRequest *_contactFetchRequest;
    CNContactsEnvironment *_environment;
    CDUnknownBlockType _completionHandler;
    id <CNEncodedFetchCursor> _cursor;
    id <CNContactsLogger> _logger;
    CNManagedConfiguration *_managedConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNManagedConfiguration *managedConfiguration; // @synthesize managedConfiguration=_managedConfiguration;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <CNEncodedFetchCursor> cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) CNContactFetchRequest *contactFetchRequest; // @synthesize contactFetchRequest=_contactFetchRequest;
@property(readonly, nonatomic) void *addressBook; // @synthesize addressBook=_addressBook;
- (void)fetchNextBatchWithReply:(CDUnknownBlockType)arg1;
- (_Bool)fetchEncodedPeopleWithError:(id *)arg1 cancelationToken:(id)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (id)cursorWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 managedConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 environment:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

