//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString, NSString;

@interface ENEncryptedContentInfo : NSObject
{
    NSString *_hint;
    NSString *_cipher;
    int _keyLength;
    NSMutableString *_cipherText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *cipherText; // @synthesize cipherText=_cipherText;
@property int keyLength; // @synthesize keyLength=_keyLength;
@property(copy, nonatomic) NSString *cipher; // @synthesize cipher=_cipher;
@property(copy, nonatomic) NSString *hint; // @synthesize hint=_hint;
- (id)init;

@end

