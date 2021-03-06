//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@interface MLImageSize : NSObject <NSSecureCoding>
{
    int _pixelsWide;
    int _pixelsHigh;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) int pixelsHigh; // @synthesize pixelsHigh=_pixelsHigh;
@property(readonly) int pixelsWide; // @synthesize pixelsWide=_pixelsWide;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToImageSize:(id)arg1;
- (unsigned int)hash;
- (id)initWithPixelsWide:(int)arg1 pixelsHigh:(int)arg2;

@end

