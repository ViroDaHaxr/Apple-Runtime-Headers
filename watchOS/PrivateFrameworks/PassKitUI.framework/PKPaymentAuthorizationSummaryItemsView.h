//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, PKPaymentAuthorizationLayout, UILabel;

@interface PKPaymentAuthorizationSummaryItemsView : UIView
{
    NSMutableArray *_labelViews;
    NSMutableArray *_valueViews;
    NSMutableArray *_hasBottomPadding;
    UILabel *_titleLabel;
    _Bool _showsBoldValueText;
    PKPaymentAuthorizationLayout *_layout;
    NSString *_title;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsBoldValueText; // @synthesize showsBoldValueText=_showsBoldValueText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) PKPaymentAuthorizationLayout *layout; // @synthesize layout=_layout;
- (id)_valueAttributedStringWithString:(id)arg1 type:(unsigned int)arg2;
- (id)_labelAttributedStringWithString:(id)arg1 withDarkColor:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 andLayout:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addLabel:(id)arg1 value:(id)arg2 itemType:(unsigned int)arg3 maxLabelLines:(int)arg4 maxValueLines:(int)arg5 hasBottomPadding:(_Bool)arg6 useDarkColor:(_Bool)arg7;
- (void)removeLabelsAndValues;
- (id)titleLabel;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

