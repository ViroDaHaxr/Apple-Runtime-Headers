//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKServerChangeToken, NSDate, SCKZoneSchema;
@protocol SCKZoneStore;

@protocol SCKDatabaseStore
@property(nonatomic, getter=isBackupEnabled) _Bool backupEnabled;
@property(copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property(copy, nonatomic) NSDate *lastDirtyDate;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (id <SCKZoneStore>)zoneStoreForSchema:(SCKZoneSchema *)arg1;
@end

