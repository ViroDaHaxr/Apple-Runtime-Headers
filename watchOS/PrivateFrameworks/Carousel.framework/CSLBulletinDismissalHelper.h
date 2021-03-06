//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUISAlertViewController, NSMutableArray;
@protocol CSLBulletinPresenter, CSLBulletinPresenterDelegate;

@interface CSLBulletinDismissalHelper : NSObject
{
    _Bool _shouldNotifyFactoryOfDismissal;
    id <CSLBulletinPresenterDelegate> _delegate;
    unsigned int _coalesceDismissReason;
    NSMutableArray *_dismissedItems;
    CUISAlertViewController<CSLBulletinPresenter> *_alertViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CUISAlertViewController<CSLBulletinPresenter> *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(retain, nonatomic) NSMutableArray *dismissedItems; // @synthesize dismissedItems=_dismissedItems;
@property(nonatomic) _Bool shouldNotifyFactoryOfDismissal; // @synthesize shouldNotifyFactoryOfDismissal=_shouldNotifyFactoryOfDismissal;
@property(nonatomic) unsigned int coalesceDismissReason; // @synthesize coalesceDismissReason=_coalesceDismissReason;
@property(nonatomic) __weak id <CSLBulletinPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logAggDWithReason:(unsigned int)arg1;
- (void)_snapshotOnDismissItem:(id)arg1 withReason:(unsigned int)arg2;
- (void)sendDismissActionForItem:(id)arg1 shouldDeactivate:(_Bool)arg2;
- (void)dismissalDidCompleteForAllItems;
- (void)dismissalDidCompleteForItem:(id)arg1;
- (id)_wrapperForItem:(id)arg1;
- (unsigned int)reasonForDismissingItem:(id)arg1;
- (void)setReason:(unsigned int)arg1 forItem:(id)arg2;
- (id)initWithAlertViewController:(id)arg1;

@end

