//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface VNImageRegistrationSignature : NSObject <NSSecureCoding>
{
    struct FastRegistration_Signatures mSignature_;
}

+ (_Bool)supportsSecureCoding;
- (const struct FastRegistration_Signatures *)signature;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id *)arg3;

@end

