//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFSymmetricEncryptionOperation, _SFECDHOperation;
@protocol SFDigestOperation;

@interface SFIESOperation_Ivars : NSObject
{
    int curve;
    _SFECDHOperation *diffieHellmanOperation;
    SFSymmetricEncryptionOperation *encryptionOperation;
    id <SFDigestOperation> digestOperation;
}

- (void).cxx_destruct;

@end

