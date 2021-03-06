//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding>
{
    _Bool _userNotificationShouldPlaySound;
    NSString *_hostAppIdentifier;
    NSString *_localizedNotificationTitle;
    NSString *_localizedNotificationBody;
    NSString *_reviewActionLabel;
    NSString *_sendActionLabel;
}

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;
- (void).cxx_destruct;
@property _Bool userNotificationShouldPlaySound; // @synthesize userNotificationShouldPlaySound=_userNotificationShouldPlaySound;
@property(retain) NSString *sendActionLabel; // @synthesize sendActionLabel=_sendActionLabel;
@property(retain) NSString *reviewActionLabel; // @synthesize reviewActionLabel=_reviewActionLabel;
@property(retain) NSString *localizedNotificationBody; // @synthesize localizedNotificationBody=_localizedNotificationBody;
@property(retain) NSString *localizedNotificationTitle; // @synthesize localizedNotificationTitle=_localizedNotificationTitle;
@property(retain) NSString *hostAppIdentifier; // @synthesize hostAppIdentifier=_hostAppIdentifier;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostAppIdentifier:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationBody:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

