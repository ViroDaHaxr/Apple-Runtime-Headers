//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface VKLabelExternalTextElement : NSObject <NSSecureCoding>
{
    struct LabelExternalTextElement _element;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct LabelExternalTextElement *)element;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextElement:(const struct LabelExternalTextElement *)arg1;

@end

