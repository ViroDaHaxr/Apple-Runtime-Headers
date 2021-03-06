//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IKImageCell : NSObject
{
    id _reserved;
}

+ (BOOL)delegatesImageManagementToDatasource;
+ (void)setDelegatesImageManagementToDatasource:(BOOL)arg1;
+ (void)setCurrentRequestingViewIdentifier:(id)arg1;
+ (BOOL)allowsIconSharingForThumbnailRequest:(id)arg1;
+ (BOOL)trackingOfRequestingViewsEnabled;
+ (void)setTrackingOfRequestingViewsEnabled:(BOOL)arg1;
+ (id)currentRequestingViewIdentifier;
- (id)_delegatedImageToDraw;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)inlinePreviewQuickLookProperties;
- (struct CGRect)inlinePreviewFrameForImageFrame:(struct CGRect)arg1;
- (id)dataSourcePath;
- (id)dataSourceURL;
- (id)dataSourceImageRepresentationType;
- (void)reloadData;
- (void)validateDatasource;
- (void)setContentCanBePlayed:(BOOL)arg1;
- (BOOL)imageIsImported;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (BOOL)_representationTypeCanBePlayed:(id)arg1;
- (id)imageWrapperForType:(id)arg1 representation:(id)arg2;
- (int)bestImageSizeForRenderingSize:(struct CGSize)arg1 renderLevel:(int)arg2 renderType:(unsigned int)arg3;
- (unsigned long long)version;
- (id)thumbnailImage;
- (id)image;
- (BOOL)datasourceIsParsed;
- (BOOL)isAnIcon;
- (void)setAlpha:(float)arg1;
- (float)alpha;
- (void)setDataSourceIndex:(unsigned long long)arg1;
- (unsigned long long)dataSourceIndex;
- (id)dataSource;
- (id)subtitleString;
- (id)titleString;
- (unsigned long long)indexOfRepresentedItem;
- (id)representedItem;
- (void)setDataSource:(id)arg1;
- (id)sourceUID;
- (id)parent;
- (void)setParent:(id)arg1;
- (int)lastRenderedSize;
- (void)setLastRenderedSize:(int)arg1;
- (BOOL)canDisplayInlinePreview;
- (void)dealloc;
- (BOOL)_shareIconRef:(struct OpaqueIconRef *)arg1;
- (BOOL)shareIconIfPossible:(id)arg1;
- (BOOL)_shareIconIfPossible:(id)arg1;
- (void)parentWillDie:(id)arg1;
- (void)setSourceUID:(id)arg1;
- (unsigned long long)cacheIndex;
- (unsigned long long)cacheIndexValidateIfNeeded:(BOOL)arg1;
- (unsigned long long)_createNewEntryInCache:(id)arg1;
- (id)cacheDatabase;
- (void)invalidate;
- (void)didRecoverImageFromCache;
- (void)imageDidChange;
- (void)datasourceItemDidChange;
- (id)init;
- (id)initWithConcreteInstance:(id)arg1;

@end

