//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

@class PUEditableMediaProviderAdjustmentDataNode, PUEditableMediaProviderImageDataNode, PUEditableMediaProviderVideoAssetNode, PUPhotoEditBaseMediaNode;

__attribute__((visibility("hidden")))
@interface PUPhotoEditSnapshotFinishingNode : PXRunNode
{
    PUEditableMediaProviderAdjustmentDataNode *_adjustmentNode;
    PUPhotoEditBaseMediaNode *_baseMediaNode;
    PUEditableMediaProviderImageDataNode *_currentImageNode;
    PUEditableMediaProviderVideoAssetNode *_currentVideoNode;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) PUEditableMediaProviderVideoAssetNode *currentVideoNode; // @synthesize currentVideoNode=_currentVideoNode;
@property(readonly, nonatomic) PUEditableMediaProviderImageDataNode *currentImageNode; // @synthesize currentImageNode=_currentImageNode;
@property(readonly, nonatomic) PUPhotoEditBaseMediaNode *baseMediaNode; // @synthesize baseMediaNode=_baseMediaNode;
@property(readonly, nonatomic) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode; // @synthesize adjustmentNode=_adjustmentNode;
- (void)run;
- (id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

