//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/SCNSceneRendererDelegate-Protocol.h>

@class NSString, OFNSImageView, OFNSView, OKSCNOrigamiNode, SCNView;

@interface OKWidgetSCNOrigamiViewProxy : OKWidgetView <SCNSceneRendererDelegate>
{
    OKWidgetView *_frontWidgetView;
    OKWidgetView *_backWidgetView;
    NSString *_backSnapshotWidgetName;
    OKWidgetView *_backSnapshotWidgetView;
    OFNSImageView *_backSnapshotView;
    OFNSView *_backContents;
    SCNView *_sceneView;
    OKSCNOrigamiNode *_origamiNode;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
@property(nonatomic) OKSCNOrigamiNode *origamiNode; // @synthesize origamiNode=_origamiNode;
@property(nonatomic) SCNView *sceneView; // @synthesize sceneView=_sceneView;
- (void)toggleAnimation;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload:(BOOL)arg1;
- (BOOL)prepareForWarmup:(BOOL)arg1;
- (BOOL)prepareForDisplay:(BOOL)arg1;
- (void)_prepare:(BOOL)arg1;
- (void)_widgetViewReadinessNotification:(id)arg1;
- (void)setSettingDefaultState:(id)arg1;
- (void)setSettingBackSnapshotWidgetName:(id)arg1;
- (void)_prepareBackSnapshotWidgetView;
- (void)setSettingBackWidget:(id)arg1;
- (void)_prepareBackContentsIfNeeded;
- (void)_updateBackSnapshotView;
- (void)setSettingFrontWidget:(id)arg1;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

