//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>

@class NSString;

@interface IBICAppearancePlatformSpecification : NSObject <IBBinaryArchiving>
{
    NSString *_appearanceName;
    long long _identifier;
}

- (void).cxx_destruct;
@property(readonly) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *appearanceName; // @synthesize appearanceName=_appearanceName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToAppearancePlatformSpecification:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)initWithAppearanceName:(id)arg1 identifier:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

