//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPMusicNowPlayingImage-Protocol.h>

@class MPArtworkCatalog, NSString, UIImage;

@interface _TVPMusicNowPlayingArtworkCatalogImage : NSObject <TVPMusicNowPlayingImage>
{
    _Bool _loading;
    MPArtworkCatalog *_artworkCatalog;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)loadWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGSize desiredImageSize;
- (id)initWithArtworkCatalog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

