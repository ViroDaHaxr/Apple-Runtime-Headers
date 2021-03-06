//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLClockHostViewDelegate-Protocol.h>
#import <Carousel/FBSceneHostManagerObserver-Protocol.h>
#import <Carousel/FBSceneLayerManagerObserver-Protocol.h>

@class CSLClockHostView, CSLClockManager, FBScene, NSMapTable, NSString;
@protocol CSLClockHostingManagerDelegate;

@interface CSLClockHostingManager : NSObject <FBSceneHostManagerObserver, FBSceneLayerManagerObserver, CSLClockHostViewDelegate>
{
    CSLClockManager *_clockManager;
    id <CSLClockHostingManagerDelegate> _delegate;
    FBScene *_scene;
    NSMapTable *_viewMap;
    CSLClockHostView *_activeHostView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSLClockHostView *activeHostView; // @synthesize activeHostView=_activeHostView;
@property(retain, nonatomic) NSMapTable *viewMap; // @synthesize viewMap=_viewMap;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <CSLClockHostingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CSLClockManager *clockManager; // @synthesize clockManager=_clockManager;
- (void)hostViewLayerHostingStateDidChange:(id)arg1;
- (void)hostViewDidMoveToWindow:(id)arg1;
- (void)hostViewDidInvalidate:(id)arg1;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)sceneHostManager:(id)arg1 willDeactivateRequester:(id)arg2;
- (void)sceneHostManager:(id)arg1 willActivateRequester:(id)arg2;
- (void)sceneHostManagerDidInvalidate:(id)arg1;
- (id)snapshotContextForCurrentRequester;
- (void)updateActiveHostView;
- (id)mostActiveHostView;
- (_Bool)wantsFilteredLayersForRequester:(id)arg1;
- (int)priorityForRequester:(id)arg1;
- (void)prepareHostView:(id)arg1 forRequester:(id)arg2;
- (id)hostViewForRequester:(id)arg1;
- (void)configureWithScene:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

