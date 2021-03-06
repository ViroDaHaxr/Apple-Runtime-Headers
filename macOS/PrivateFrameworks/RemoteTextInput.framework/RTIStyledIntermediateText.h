//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteTextInput/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSString;

@interface RTIStyledIntermediateText : NSObject <NSSecureCoding>
{
    unsigned long long _selectionOffset;
    NSString *_inputString;
    NSAttributedString *_displayString;
    NSString *_searchString;
    long long _cursorVisibility;
}

+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3;
+ (id)intermediateTextWithInputString:(id)arg1 displayString:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long cursorVisibility; // @synthesize cursorVisibility=_cursorVisibility;
@property(readonly, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) NSAttributedString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *inputString; // @synthesize inputString=_inputString;
@property(readonly, nonatomic) struct _NSRange selectedRange;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputString:(id)arg1 displayString:(id)arg2 selectionLocation:(unsigned long long)arg3 searchString:(id)arg4;

@end

