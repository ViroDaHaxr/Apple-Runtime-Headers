//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@interface PKPaymentProvisioningNonceRequest : PKPaymentWebServiceRequest
{
    unsigned int _nonceType;
}

@property(nonatomic) unsigned int nonceType; // @synthesize nonceType=_nonceType;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithNonceType:(unsigned int)arg1;

@end

