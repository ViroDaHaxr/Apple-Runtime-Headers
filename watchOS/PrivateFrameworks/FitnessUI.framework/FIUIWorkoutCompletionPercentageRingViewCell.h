//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ARUIRingsView, FIUIDividerView, HKWorkout, UIImageView, UILabel;

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell
{
    HKWorkout *_workout;
    ARUIRingsView *_ringsView;
    UIImageView *_gradientBackgroundImageView;
    UIImageView *_iconImageView;
    UILabel *_typeLabel;
    UILabel *_secondaryLabel;
    FIUIDividerView *_separatorView;
    double _currentCompletionFactor;
}

+ (float)rowHeightForWorkout:(id)arg1 width:(float)arg2;
+ (float)_secondaryLabelToSeparatorSpacing;
+ (float)_typeToSecondaryLabelSpacing;
+ (float)_ringToTypeSpacing;
+ (float)_ringDiameter;
+ (float)_ringTopPadding;
- (void).cxx_destruct;
@property(retain, nonatomic) FIUIDividerView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *gradientBackgroundImageView; // @synthesize gradientBackgroundImageView=_gradientBackgroundImageView;
@property(retain, nonatomic) ARUIRingsView *ringsView; // @synthesize ringsView=_ringsView;
@property(nonatomic) double currentCompletionFactor; // @synthesize currentCompletionFactor=_currentCompletionFactor;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void)layoutSubviews;
- (void)animateRingWithCompletion:(CDUnknownBlockType)arg1;
- (void)setWorkout:(id)arg1 fillRing:(_Bool)arg2;
- (void)setWorkoutWithoutFillingRing:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ringsViewRenderer:(id)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

