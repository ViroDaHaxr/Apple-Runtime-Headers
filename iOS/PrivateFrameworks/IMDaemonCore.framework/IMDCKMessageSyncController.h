//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/IMDCKAbstractSyncController.h>

@class CKServerChangeToken, IMDCKMessageSyncCKOperationFactory, IMDRecordZoneManager, NSMutableDictionary, NSObject;
@protocol IMDCKSyncTokenStore, OS_dispatch_queue, OS_xpc_object;

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController
{
    CKServerChangeToken *_archivedRecordSyncToken;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDRecordZoneManager *_recordZoneManager;
    id <IMDCKSyncTokenStore> _syncTokenStore;
    IMDCKMessageSyncCKOperationFactory *_CKOperationFactory;
    NSObject<OS_xpc_object> *_activity;
    unsigned long long _deviceConditionsToCheck;
    NSMutableDictionary *_visitedChats;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *visitedChats; // @synthesize visitedChats=_visitedChats;
@property(nonatomic) unsigned long long deviceConditionsToCheck; // @synthesize deviceConditionsToCheck=_deviceConditionsToCheck;
@property NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory; // @synthesize CKOperationFactory=_CKOperationFactory;
@property(retain, nonatomic) id <IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;
@property(retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
- (void)syncDeletedMessagesToCloudKitWithCompletion:(CDUnknownBlockType)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_sharedIMDMessageStore;
- (void)_deleteMessagesWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)deleteMessagesZone;
- (void)deleteMessageSyncToken;
- (void)syncMessagesWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_kickOffWriteOnCKQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)_hasMarkedAllMessagesAsNeedingSync;
- (void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
- (_Bool)_shouldMarkAllMessagesAsNeedingSync;
- (void)_needsToMarkAllMessagesAsNeedingSync;
- (void)_noteSyncEnded;
- (void)_fetchMessageZoneChangesSyncType:(long long)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)_isDiskSpaceAvailableForSyncType:(long long)arg1 currentBatchCount:(long long)arg2;
- (_Bool)_doesAnyRecordZoneIDHavePendingArchivedRecords:(long long)arg1;
- (_Bool)_shouldFetchArchivedRecords:(id)arg1;
- (void)_processFetchRecordZoneChangesCompletionWithError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processRecordZoneFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(_Bool)arg4 NSError:(id)arg5 syncType:(long long)arg6 currentBatchCount:(long long)arg7 maxNumberOfBatches:(long long)arg8 shouldFetchArchivedRecords:(_Bool)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (void)_processFetchArchivedRecordCompletionWithError:(id)arg1 WithCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_fetchArchivedRecordsIfNeeded:(_Bool)arg1 currentBatchCount:(long long)arg2 maxNumberOfBatches:(long long)arg3 WithCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_processArchivedRecordsFetchCompletionZoneID:(id)arg1 serverChangeToken:(id)arg2 moreComing:(_Bool)arg3 currentBatchCount:(long long)arg4 maxNumberOfBatches:(long long)arg5 NSError:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)_resetSyncToken;
- (void)_deleteStingRaySyncToken;
@property(retain, nonatomic) CKServerChangeToken *latestSyncToken;
- (id)_changeTokenKey;
- (void)_resetArvchivedRecordSyncToken;
@property(retain, nonatomic) CKServerChangeToken *archivedRecordSyncToken; // @synthesize archivedRecordSyncToken=_archivedRecordSyncToken;
- (void)_migrateSyncTokens;
- (_Bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;
- (_Bool)_isCoreDuetSyncForMaxBatchCount:(long long)arg1;
- (_Bool)_shouldDeferCoreDuetMessagesSync;
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (void)_processRecordChange:(id)arg1;
- (void)_writeDirtyMessagesToCloudKitWithCompletion:(CDUnknownBlockType)arg1;
- (id)_syncOperationGroupName;
- (void)_processModifyRecordsCompletion:(id)arg1 deletedRecordIDs:(id)arg2 operationError:(id)arg3 isLastBatchOfWrite:(_Bool)arg4 writeCompletionBlock:(CDUnknownBlockType)arg5;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (id)_ckUtilitiesInstance;
- (void)_processRecordWriteCompletionForRecord:(id)arg1 NSError:(id)arg2;
- (void)_scheduleOperation:(id)arg1;
- (_Bool)_messageZoneCreated;
- (id)_recordsToSave;
- (id)_recordsToSaveWithAttemptCount:(unsigned long long)arg1;
- (_Bool)_isValidCKRecordToSync:(id)arg1;
- (long long)_numberOfBatchesOfMessagesToFetchInInitialSync;
- (unsigned long long)_messageDeleteBatchSize;
- (unsigned long long)_numberOfRecordsToFetchForSyncType:(long long)arg1;
- (unsigned long long)_numberOfMessagesToUpload;
- (id)_messageRecordSalt;
- (id)_recordKeyManagerSharedInstance;
- (id)_messageZoneID;
- (long long)syncControllerRecordType;
- (id)_chatRegistry;
- (void)dealloc;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;

@end

