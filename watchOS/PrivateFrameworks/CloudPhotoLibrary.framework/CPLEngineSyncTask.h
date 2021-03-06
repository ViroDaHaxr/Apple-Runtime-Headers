//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineLibrary, CPLSyncSession, NSString;
@protocol CPLEngineSyncTaskDelegate, NSCoding;

@interface CPLEngineSyncTask : NSObject
{
    _Bool _foreground;
    _Bool _forceSync;
    _Bool _cancelled;
    id <CPLEngineSyncTaskDelegate> _delegate;
    CPLEngineLibrary *_engineLibrary;
    CPLSyncSession *_session;
    id <NSCoding> _transportUserIdentifier;
    NSString *_phaseDescription;
}

+ (id)taskWithEngineLibrary:(id)arg1 session:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *phaseDescription; // @synthesize phaseDescription=_phaseDescription;
@property(getter=isCancelled, setter=_setCancelled:) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool forceSync; // @synthesize forceSync=_forceSync;
@property(nonatomic) _Bool foreground; // @synthesize foreground=_foreground;
@property(retain, nonatomic) id <NSCoding> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;
@property(readonly, nonatomic) CPLSyncSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(retain) id <CPLEngineSyncTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;
- (void)taskDidFinishWithError:(id)arg1;
- (void)cancel;
- (void)launch;
@property(readonly, nonatomic) NSString *taskIdentifier;
- (unsigned int)diskPressureState;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

@end

