//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailCore/ECLocalMessageActionBuilder-Protocol.h>

@class NSArray, NSSet;

@protocol ECLabelChangeMessageActionBuilder <ECLocalMessageActionBuilder>
@property(copy, nonatomic) NSSet *labelsToRemove;
@property(copy, nonatomic) NSSet *labelsToAdd;
@property(copy, nonatomic) NSArray *messages;
@property(copy, nonatomic) NSSet *remoteIDs;
@end

