//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDate, NSString;

@protocol IDSSocketPairMessage

@optional
@property(retain, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSString *messageUUID;
@property(readonly, nonatomic) NSString *peerResponseIdentifier;
@property(readonly, nonatomic) BOOL expectsPeerResponse;
@property(readonly, nonatomic) BOOL wantsAppAck;
@property(readonly, nonatomic) NSData *data;
@property(nonatomic) unsigned short streamID;
@property(nonatomic) unsigned int sequenceNumber;
@end

