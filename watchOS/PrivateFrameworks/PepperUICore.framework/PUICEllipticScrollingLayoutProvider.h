//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol PUICEllipticScrollingLayoutProviderDelegate;

@interface PUICEllipticScrollingLayoutProvider : NSObject
{
    float _flattenExtremesProgress;
    int _deviceVariant;
    NSMutableDictionary *_cachedEllipticScrollingParameters;
    struct {
        unsigned int convertPointToContainingView:1;
    } _delegateFlags;
    _Bool _flattenExtremesTop;
    _Bool _flattenExtremesBottom;
    _Bool _adjustsInterCellSpacing;
    _Bool _curvesTop;
    _Bool _forceCurvesTop;
    _Bool _curvesBottom;
    _Bool _forceCurvesBottom;
    id <PUICEllipticScrollingLayoutProviderDelegate> _delegate;
    float _intraCellPadding;
    float _threshold;
    float _scaleExponent;
    float _scaleAccentuate;
    float _alphaExponent;
    float _alphaAccentuate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceCurvesBottom; // @synthesize forceCurvesBottom=_forceCurvesBottom;
@property(nonatomic) _Bool curvesBottom; // @synthesize curvesBottom=_curvesBottom;
@property(nonatomic) _Bool forceCurvesTop; // @synthesize forceCurvesTop=_forceCurvesTop;
@property(nonatomic) _Bool curvesTop; // @synthesize curvesTop=_curvesTop;
@property(nonatomic) float alphaAccentuate; // @synthesize alphaAccentuate=_alphaAccentuate;
@property(nonatomic) float alphaExponent; // @synthesize alphaExponent=_alphaExponent;
@property(nonatomic) float scaleAccentuate; // @synthesize scaleAccentuate=_scaleAccentuate;
@property(nonatomic) float scaleExponent; // @synthesize scaleExponent=_scaleExponent;
@property(nonatomic) float threshold; // @synthesize threshold=_threshold;
@property(nonatomic) float intraCellPadding; // @synthesize intraCellPadding=_intraCellPadding;
@property(nonatomic) _Bool adjustsInterCellSpacing; // @synthesize adjustsInterCellSpacing=_adjustsInterCellSpacing;
@property(nonatomic) _Bool flattenExtremesBottom; // @synthesize flattenExtremesBottom=_flattenExtremesBottom;
@property(nonatomic) _Bool flattenExtremesTop; // @synthesize flattenExtremesTop=_flattenExtremesTop;
@property(nonatomic) __weak id <PUICEllipticScrollingLayoutProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)parametersForIdentifier:(id)arg1;
- (void)invalidate;
- (void)_rebuildScrollingParameters;
- (float)bottomThreshold:(float)arg1;
- (float)bottomThreshold;
- (float)topThreshold:(float)arg1;
- (float)topThreshold;
@property(readonly, nonatomic) _Bool shouldCurve;
- (id)initWithDelegate:(id)arg1;

@end

