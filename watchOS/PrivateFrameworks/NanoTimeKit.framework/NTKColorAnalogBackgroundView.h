//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, UIColor;

@interface NTKColorAnalogBackgroundView : UIView
{
    CALayer *_tickContainerLayer;
    NSArray *_tickLayers;
    CALayer *_circleLayer;
    CALayer *_fullscreenLayer;
    CLKDevice *_device;
    UIColor *_color;
    unsigned int _style;
}

- (void).cxx_destruct;
- (void)applyToTritiumTransitionFraction:(float)arg1;
- (void)updateLayerVisibilityForStyles:(id)arg1;
- (void)applyTransitionFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)applyStyle:(unsigned int)arg1;
- (void)cleanupAfterZoom;
- (void)applyZoomFraction:(float)arg1;
- (void)applyTransitionFraction:(float)arg1 fromScheme:(id)arg2 toScheme:(id)arg3;
- (void)applyColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;

@end

