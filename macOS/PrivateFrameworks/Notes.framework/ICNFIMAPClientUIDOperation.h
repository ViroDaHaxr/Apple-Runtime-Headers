//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Notes/ICNFIMAPClientMailboxOperation.h>

@class NSIndexSet;

@interface ICNFIMAPClientUIDOperation : ICNFIMAPClientMailboxOperation
{
    NSIndexSet *_UIDs;
    CDStruct_f792af56 _range;
}

+ (id)newMessageSetForIndexSet:(id)arg1;
+ (id)newMessageSetForNumbers:(id)arg1 range:(struct _NSRange)arg2;
+ (id)newMessageSetForRange:(CDStruct_f792af56)arg1;
- (void).cxx_destruct;
@property CDStruct_f792af56 range; // @synthesize range=_range;
@property(copy) NSIndexSet *UIDs; // @synthesize UIDs=_UIDs;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)initWithMailboxName:(id)arg1;
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;

@end

