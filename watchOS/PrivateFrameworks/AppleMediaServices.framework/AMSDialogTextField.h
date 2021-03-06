//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AMSDialogTextField : NSObject <NSSecureCoding>
{
    _Bool _secure;
    int _keyboardType;
    NSString *_placeholder;
    int _tag;
    NSString *_text;
}

+ (_Bool)supportsSecureCoding;
+ (id)textFieldWithPlaceholder:(id)arg1 secure:(_Bool)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool secure; // @synthesize secure=_secure;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

