//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/SSTestingCoordinatorDelegate-Protocol.h>
#import <ScreenshotServices/SSUIServiceServerDelegate-Protocol.h>

@class RCPEventStreamRecorder, RCPScreenRecorder, SSApplicationScreenshotSupplementalDataCapturer, SSDittoRemoteConnection, SSScreenshotsWindow, SSSnapshotter, SSTestingCoordinator, SSUIServiceServer, UIWindow;
@protocol SSScreenCapturerDelegate;

@interface SSScreenCapturer : NSObject <SSUIServiceServerDelegate, SSTestingCoordinatorDelegate>
{
    SSSnapshotter *_snapshotter;
    SSDittoRemoteConnection *_dittoRemoteConnection;
    SSApplicationScreenshotSupplementalDataCapturer *_metadataCapturer;
    SSUIServiceServer *_uiServiceServer;
    SSTestingCoordinator *_testingCoordinator;
    SSScreenshotsWindow *_serviceWindow;
    RCPEventStreamRecorder *_recap;
    RCPScreenRecorder *_recapSnapshotter;
    id <SSScreenCapturerDelegate> _delegate;
}

+ (void)playScreenshotSound;
+ (_Bool)shouldUseScreenCapturerForScreenshots;
+ (id)_currentDisplayLayout;
+ (_Bool)_filesAppExistsOnSystem;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SSScreenCapturerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)testingCoordinator:(id)arg1 requestsTakingScreenshotForRunPPTRequest:(id)arg2;
- (id)_testingCoordinator;
@property(readonly, nonatomic) UIWindow *screenshotsWindow;
- (void)server:(id)arg1 handleRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)_betaFeedbackEnabled:(id)arg1;
- (id)_applicationProxyForCurrentApp;
- (id)_bundleIDForCurrentApplication;
- (id)_betaApplicationName;
- (_Bool)_screenshotWasTakenOverBetaApp;
- (void)_takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (void)_preheatAndTakeScreenshotIfPossibleWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2 appleInternalOptions:(id)arg3;
- (void)_saveImageToPhotoLibrary:(id)arg1 environmentDescription:(id)arg2;
- (void)_captureAndSendMetadataAndDocumentForEnvironmentDescription:(id)arg1;
- (void)_captureAndSendDocumentForEnvironmentElement:(id)arg1;
- (void)_captureAndSendMetadataForEnvironmentElement:(id)arg1 sendCompletion:(CDUnknownBlockType)arg2;
- (void)_sendEnvironmentDescription:(id)arg1 savingImageToPhotos:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)_environmentDescriptionFromImage:(id)arg1;
- (void)takeScreenshot;
- (void)takeScreenshotWithOptionsCollection:(id)arg1 presentationOptions:(id)arg2;
- (void)takeScreenshotWithPresentationOptions:(id)arg1;
- (void)preheatWithPresentationOptions:(id)arg1;
- (void)startRecap;
- (id)init;

@end

