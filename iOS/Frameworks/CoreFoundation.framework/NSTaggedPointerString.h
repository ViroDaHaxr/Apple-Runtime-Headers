//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSTaggedPointerString : NSObject
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_setAsTaggedStringClass;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)lowercaseStringWithLocale:(id)arg1;
- (_Bool)getBytes:(void *)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long *)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange)arg6 remainingRange:(struct _NSRange *)arg7;
- (_Bool)_getCString:(char *)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned int)arg3;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)smallestEncoding;
- (unsigned long long)fastestEncoding;
- (_Bool)_isCString;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const unsigned short *)_fastCharacterContents;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (_Bool)isEqualToString:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (const char *)UTF8String;
- (id)substringWithRange:(struct _NSRange)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)autorelease;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isNSString__;

@end

