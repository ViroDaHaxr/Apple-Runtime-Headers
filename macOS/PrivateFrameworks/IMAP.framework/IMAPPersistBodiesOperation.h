//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSOrderedSet;
@protocol IMAPPersistBodiesOperationDelegate;

@interface IMAPPersistBodiesOperation : IMAPPersistenceTaskOperation
{
    NSOrderedSet *_downloads;
    id <IMAPPersistBodiesOperationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IMAPPersistBodiesOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSOrderedSet *downloads; // @synthesize downloads=_downloads;
- (void)main;
- (id)description;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDownloads:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;

@end

