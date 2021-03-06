//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString, NSURL;

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse
{
    int _status;
    NSArray *_requiredPaymentSetupFields;
    NSString *_productIdentifier;
    NSArray *_possibleProducts;
    NSURL *_learnMoreURL;
    NSString *_nonce;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSURL *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(readonly, copy, nonatomic) NSArray *possibleProducts; // @synthesize possibleProducts=_possibleProducts;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(readonly, copy, nonatomic) NSArray *requiredPaymentSetupFields; // @synthesize requiredPaymentSetupFields=_requiredPaymentSetupFields;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
- (id)initWithRemoteCredential:(id)arg1;
- (id)initWithProvisioningMethodMetadata:(id)arg1;
- (id)initWithProduct:(id)arg1;
- (id)initWithData:(id)arg1;

@end

