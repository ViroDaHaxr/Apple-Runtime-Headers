//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol P256PublicKeyProtocol;

__attribute__((visibility("hidden")))
@interface PublicKey : NSObject
{
    id <P256PublicKeyProtocol> _key;
}

- (void).cxx_destruct;
@property(retain) id <P256PublicKeyProtocol> key; // @synthesize key=_key;
- (id)description;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)initWithKey:(id)arg1;

@end

