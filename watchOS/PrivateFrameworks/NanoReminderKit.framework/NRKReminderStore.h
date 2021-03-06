//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore, NEKSignalCoalescer, NRKGateKeeperReferenceCounter, NRKReloadShuttle, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface NRKReminderStore : NSObject
{
    _Bool _dataLoaded;
    _Bool _autoLoadJustScheduledList;
    unsigned int _numScheduledReminders;
    unsigned int _numReminderLists;
    unsigned int _uncompletedReminderListFilterTimeDelta;
    NSMutableArray *_reminderLists;
    NSMutableDictionary *_remindersByListId;
    NSMutableSet *_fetchIds;
    EKEventStore *_eventKitStore;
    NRKGateKeeperReferenceCounter *_fetchActiveCounter;
    NRKReloadShuttle *_waitingReloadShuttle;
    CDUnknownBlockType _loadTimingTestBlock;
    id _initialDataLoadedEventCallerToken;
    CDUnknownBlockType _initialDataLoadedEventBlock;
    NEKSignalCoalescer *_signalCoalescer;
    NRKGateKeeperReferenceCounter *_clientActiveUseCounter;
    NSObject<OS_dispatch_queue> *_fetchDispatchQ;
}

+ (id)_propertySetForPreload;
+ (int)compareForSortByDisplayOrder:(int)arg1 obj1Title:(id)arg2 obj2DisplayOrder:(int)arg3 obj2Title:(id)arg4;
+ (id)sharedInstanceWithAutoLoadHint:(_Bool)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchDispatchQ; // @synthesize fetchDispatchQ=_fetchDispatchQ;
@property(retain, nonatomic) NRKGateKeeperReferenceCounter *clientActiveUseCounter; // @synthesize clientActiveUseCounter=_clientActiveUseCounter;
@property(retain, nonatomic) NEKSignalCoalescer *signalCoalescer; // @synthesize signalCoalescer=_signalCoalescer;
@property(copy, nonatomic) CDUnknownBlockType initialDataLoadedEventBlock; // @synthesize initialDataLoadedEventBlock=_initialDataLoadedEventBlock;
@property(retain, nonatomic) id initialDataLoadedEventCallerToken; // @synthesize initialDataLoadedEventCallerToken=_initialDataLoadedEventCallerToken;
@property(copy, nonatomic) CDUnknownBlockType loadTimingTestBlock; // @synthesize loadTimingTestBlock=_loadTimingTestBlock;
@property(nonatomic) _Bool autoLoadJustScheduledList; // @synthesize autoLoadJustScheduledList=_autoLoadJustScheduledList;
@property(retain, nonatomic) NRKReloadShuttle *waitingReloadShuttle; // @synthesize waitingReloadShuttle=_waitingReloadShuttle;
@property(retain, nonatomic) NRKGateKeeperReferenceCounter *fetchActiveCounter; // @synthesize fetchActiveCounter=_fetchActiveCounter;
@property(retain, nonatomic) EKEventStore *eventKitStore; // @synthesize eventKitStore=_eventKitStore;
@property(retain, nonatomic) NSMutableSet *fetchIds; // @synthesize fetchIds=_fetchIds;
@property(retain, nonatomic) NSMutableDictionary *remindersByListId; // @synthesize remindersByListId=_remindersByListId;
@property(retain, nonatomic) NSMutableArray *reminderLists; // @synthesize reminderLists=_reminderLists;
@property(nonatomic) unsigned int uncompletedReminderListFilterTimeDelta; // @synthesize uncompletedReminderListFilterTimeDelta=_uncompletedReminderListFilterTimeDelta;
@property(nonatomic) unsigned int numReminderLists; // @synthesize numReminderLists=_numReminderLists;
@property(nonatomic) unsigned int numScheduledReminders; // @synthesize numScheduledReminders=_numScheduledReminders;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
- (void)_applyUIListAdjustments:(id)arg1;
- (void)_reconnectWriteCacheToNewDatabase:(id)arg1;
- (id)_createReminderListArrayWithEKCalendars:(id)arg1 andListDictionary:(id)arg2;
- (void)_setNewListsFromShuttle:(id)arg1;
- (id)_createNRKReminderListWithEKReminders:(id)arg1 eKCalendar:(id)arg2 listId:(id)arg3 enumerateOptions:(unsigned int)arg4;
- (id)_sortEKReminders:(id)arg1;
- (id)_sortEKCalendars:(id)arg1;
- (void)_updateListItemsWithIndeces:(id)arg1;
- (id)_createNewReminderListsFromDict:(id)arg1 calendars:(id)arg2;
- (void)_processFreshEKReminderList:(id)arg1 calendar:(id)arg2 remindersById:(id)arg3;
- (id)_fetchReminderListWithPredicate:(id)arg1 dispatchGroup:(id)arg2 EKCalendar:(id)arg3 activeReferenceCounter:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_fetchScheduledList:(id)arg1;
- (void)_fetchReminderLists:(id)arg1;
- (void)_fetchReminderData;
- (void)_fetchReminderData:(id)arg1 fetchCompletionBlock:(CDUnknownBlockType)arg2;
- (void)abandonReloadForReason:(id)arg1;
- (void)reloadForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleEventStoreChangedNotification:(id)arg1;
- (void)_initialSetup;
- (void)cancelTriggerOnInitialDataLoaded;
- (void)triggerOnceWhenInitialDataLoaded:(id)arg1 registerTriggeredBlock:(CDUnknownBlockType)arg2;
- (void)startLoadTimingTestWithCompletion:(CDUnknownBlockType)arg1;
- (void)commitReminderList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteReminder:(id)arg1 commitImmediate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)simpleCommitReminder:(id)arg1 commitImmediately:(_Bool)arg2 error:(id *)arg3;
- (void)commitReminder:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *defaultListNameForNewReminders;
- (id)reminderListIdForReminderId:(id)arg1;
- (id)reminderListByIndex:(unsigned int)arg1;
- (id)reminderListByIdentifier:(id)arg1;
- (_Bool)simpleCommitAllChanges:(id *)arg1;
- (void)commitAllChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteReminderList:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)enumerateReminderListsUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAutoLoadHint:(_Bool)arg1;

@end

