//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKHealthPrivacyServicePromptController-Protocol.h>
#import <HealthUI/HKSwitchTableViewCellDelegate-Protocol.h>
#import <HealthUI/UITableViewDataSource-Protocol.h>
#import <HealthUI/UITableViewDelegate-Protocol.h>

@class HKClinicalAuthorizationBinaryChoiceFooterView, HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, HKLookUpAppPrivacyPolicyURLOperation, NSArray, NSString, UITableView;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationSettingsViewController : HKViewController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate, HKHealthPrivacyServicePromptController>
{
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    int _style;
    HKClinicalAuthorizationSequenceContext *_context;
    HKClinicalAuthorizationDisplayController *_displayController;
    int _authorizationMode;
    UITableView *_tableView;
    HKClinicalAuthorizationBinaryChoiceFooterView *_allowButtonsFooterView;
    NSArray *_sections;
    NSArray *_appInformationSectionCells;
    HKLookUpAppPrivacyPolicyURLOperation *_lookUpAppPrivacyPolicyURLOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKLookUpAppPrivacyPolicyURLOperation *lookUpAppPrivacyPolicyURLOperation; // @synthesize lookUpAppPrivacyPolicyURLOperation=_lookUpAppPrivacyPolicyURLOperation;
@property(copy, nonatomic) NSArray *appInformationSectionCells; // @synthesize appInformationSectionCells=_appInformationSectionCells;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) HKClinicalAuthorizationBinaryChoiceFooterView *allowButtonsFooterView; // @synthesize allowButtonsFooterView=_allowButtonsFooterView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int authorizationMode; // @synthesize authorizationMode=_authorizationMode;
@property(readonly, nonatomic) HKClinicalAuthorizationDisplayController *displayController; // @synthesize displayController=_displayController;
@property(readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) __weak id <HKHealthPrivacyServicePromptControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=shouldCommitUpdatesImmediately) _Bool commitUpdatesImmediately;
@property(readonly, nonatomic) _Bool isPrompting;
@property(readonly, copy, nonatomic) NSString *readUsageDescription;
- (id)authorizationController;
- (id)source;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentContentSizeCategory;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_reloadViewAppPrivacyPolicyCell;
- (void)_fetchPrivacyPolicyURLForSource:(id)arg1;
- (id)_privacyPolicyURL;
- (id)_messageForStopSharingConfirmation;
- (void)_presentConfirmationForStopSharingIfNeededWithAcceptHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldPresentStopSharingDialogueBeforeDisallowing;
- (id)_doNotAllowButtonTitle;
- (id)_titleForShareAuthorizationModeFooter;
- (id)_formatStringForShareAuthorizationModeFooterWithMode:(int)arg1;
- (id)_titleForShareDataTypesFooter;
- (id)_titleForAppInformationFooter;
- (id)_visibleShareAuthorizationModeCellForMode:(int)arg1;
- (id)_shareAuthorizationModeCellForIndexPath:(id)arg1;
- (id)_indexPathForShareAuthorizationMode:(int)arg1;
- (int)_shareAuthorizationModeForIndexPath:(id)arg1;
- (id)_shareDataTypeCellForIndexPath:(id)arg1;
- (id)_viewAppPrivacyPolicyCellForIndexPath:(id)arg1;
- (_Bool)_shouldHighlightViewAppPrivacyPolicyCellAtIndexPath:(id)arg1;
- (_Bool)_cellAtIndexPathIsViewAppPrivacyPolicyCell:(id)arg1;
- (id)_indexPathForViewAppPrivacyPolicyCell;
- (id)_shareUsageDescriptionCellForIndexPath:(id)arg1;
- (id)_appInformationCellForIndexPath:(id)arg1;
- (_Bool)_shouldHighlightAppInformationCellAtIndexPath:(id)arg1;
- (void)_verifySections:(id)arg1 isEqualToSections:(id)arg2 afterInsertingSection:(id)arg3;
- (void)_updateShareAuthorizationModeSectionFooter;
- (void)_updateShareAuthorizationModeSectionVisibilityIfNeeded;
- (void)_hideShareAuthorizationModeSectionIfNeeded;
- (void)_showShareAuthorizationModeSectionIfNeeded;
- (_Bool)_isShowingShareAuthorizationModeSection;
- (int)_defaultShareAuthorizationMode;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)_finishWithError:(id)arg1;
- (void)_presentViewAppPrivacyPolicyURLErrorAlert;
- (void)_viewAppPrivacyPolicyCellPressed:(id)arg1;
- (void)_doNotAllowButtonPressed:(id)arg1;
- (void)_shareAuthorizationModeCellPressed:(id)arg1;
- (void)_allowButtonPressed:(id)arg1;
- (_Bool)_shouldDisplayShareAuthorizationModeSection;
- (_Bool)_shouldDisplayShareDataTypes;
- (_Bool)_shouldDisplayAppInformationSection;
- (id)_sectionsForAuthorizationController:(id)arg1;
- (id)_createAppInformationSectionCells;
- (int)_tableViewSectionForSection:(int)arg1;
- (int)_sectionForTableViewSection:(int)arg1;
- (_Bool)_tableViewSection:(int)arg1 isEqualToSection:(int)arg2;
- (id)_typeForIndexPath:(id)arg1;
- (id)_createAllowButtonsFooterView;
- (void)_updateTableViewBottomPadding;
- (id)_createHeaderViewWithSource:(id)arg1;
- (void)_configureTableView;
- (void)_updateAllowButtonEnabledStateAnimated:(_Bool)arg1;
- (void)_updateFooterButtonsTitles;
- (void)_configureInitialAuthorizationSettingsForPrompting;
- (void)_configureNavigationItemWithSource:(id)arg1;
- (void)reloadAuthorizationSettings;
- (void)_reloadSections;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(id)arg1 style:(int)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

