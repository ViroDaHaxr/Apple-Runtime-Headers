//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoRegistry/NRDiffBase.h>

#import <NanoRegistry/NSFastEnumeration-Protocol.h>

@class NRPBDeviceDiff, NSDictionary;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration>
{
    NSDictionary *_diffPropertyDiffs;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *diffPropertyDiffs; // @synthesize diffPropertyDiffs=_diffPropertyDiffs;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) NRPBDeviceDiff *protobuf;
- (id)initWithProtobuf:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_createIndex;
- (id)allPropertyNames;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)diffPropertyDiffForName:(id)arg1;
- (id)initWithDiffPropertyDiffs:(id)arg1;

@end

