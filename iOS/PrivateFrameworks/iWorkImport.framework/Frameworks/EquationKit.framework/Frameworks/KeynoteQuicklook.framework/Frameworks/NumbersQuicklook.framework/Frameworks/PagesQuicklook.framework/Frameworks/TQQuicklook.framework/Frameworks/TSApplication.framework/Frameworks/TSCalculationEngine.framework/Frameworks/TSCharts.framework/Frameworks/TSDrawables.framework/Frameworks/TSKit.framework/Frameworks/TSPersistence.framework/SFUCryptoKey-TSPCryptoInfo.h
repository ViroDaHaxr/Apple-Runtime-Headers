//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSUtility/SFUCryptoKey.h>

#import <TSPersistence/TSPMutableCryptoInfo-Protocol.h>

@class NSArray, NSString;

@interface SFUCryptoKey (TSPCryptoInfo) <TSPMutableCryptoInfo>
- (void)incrementDecodedLengthBy:(unsigned long long)arg1;
- (void)addBlockInfo:(id)arg1;
- (void)reset;
- (id)mutableCryptoInfoCopy;
@property(readonly, nonatomic) unsigned long long decodedLength;
@property(readonly, nonatomic) _Bool hasDecodedLength;
@property(readonly, nonatomic) NSArray *blockInfos;
@property(readonly, nonatomic) unsigned long long preferredBlockSize;
@property(readonly, nonatomic) SFUCryptoKey *cryptoKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

