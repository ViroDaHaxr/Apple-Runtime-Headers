//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedImage : CUINamedLookup
{
    float _scale;
    struct _cuiniproperties {
        unsigned int isVectorBased:1;
        unsigned int hasSliceInformation:1;
        unsigned int hasAlignmentInformation:1;
        unsigned int resizingMode:2;
        unsigned int templateRenderingMode:3;
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isFlippable:1;
        unsigned int isTintable:1;
        unsigned int preservedVectorRepresentation:1;
        unsigned int _reserved:16;
    } _imageProperties;
}

@property(readonly, nonatomic) float scale; // @synthesize scale=_scale;
- (struct CGRect)alphaCroppedRect;
- (struct CGSize)originalUncroppedSize;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(float)arg1;
- (id)baseKey;
- (id)description;
@property(readonly, nonatomic) _Bool isAlphaCropped;
@property(readonly, nonatomic) int exifOrientation;
@property(readonly, nonatomic) _Bool preservedVectorRepresentation;
@property(readonly, nonatomic) _Bool isFlippable;
@property(readonly, nonatomic) _Bool isStructured;
@property(readonly, nonatomic) int templateRenderingMode;
@property(readonly, nonatomic) _Bool isTemplate;
@property(readonly, nonatomic) _Bool isVectorBased;
@property(readonly, nonatomic) _Bool hasAlignmentInformation;
@property(readonly, nonatomic) _Bool hasSliceInformation;
- (int)resizingModeWithSubtype:(int)arg1;
@property(readonly, nonatomic) int resizingMode;
@property(readonly, nonatomic) int blendMode;
@property(readonly, nonatomic) float opacity;
@property(readonly, nonatomic) CDStruct_fd71c141 alignmentEdgeInsets;
@property(readonly, nonatomic) CDStruct_fd71c141 edgeInsets;
- (float)positionOfSliceBoundary:(unsigned int)arg1;
@property(readonly, nonatomic) int imageType;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGImage *croppedImage;
@property(readonly, nonatomic) struct CGImage *image;
- (_Bool)_cacheRenditionProperties;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned int)arg3;

@end

