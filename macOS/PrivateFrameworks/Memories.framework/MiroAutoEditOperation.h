//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MiroAutoEditController, MiroAutoEditor, MiroCloudDownloader, MiroMemory;

__attribute__((visibility("hidden")))
@interface MiroAutoEditOperation : NSOperation
{
    BOOL _isFinished;
    BOOL _isExecuting;
    BOOL _shouldSave;
    int _requestID;
    MiroAutoEditor *_autoEditorParent;
    MiroMemory *_memory;
    CDUnknownBlockType _cleanupHandler;
    MiroCloudDownloader *_cloudDownloader;
    MiroAutoEditController *_autoEditController;
}

- (void).cxx_destruct;
@property(nonatomic) int requestID; // @synthesize requestID=_requestID;
@property(retain) MiroAutoEditController *autoEditController; // @synthesize autoEditController=_autoEditController;
@property(retain, nonatomic) MiroCloudDownloader *cloudDownloader; // @synthesize cloudDownloader=_cloudDownloader;
@property BOOL shouldSave; // @synthesize shouldSave=_shouldSave;
@property(copy) CDUnknownBlockType cleanupHandler; // @synthesize cleanupHandler=_cleanupHandler;
@property(retain) MiroMemory *memory; // @synthesize memory=_memory;
@property(retain) MiroAutoEditor *autoEditorParent; // @synthesize autoEditorParent=_autoEditorParent;
- (void)_downloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finished;
- (void)start;
- (void)performAutoEditAsynchronously;
- (BOOL)shouldCancelOnNonLocalAssets;
- (BOOL)shouldDownload;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;

@end

