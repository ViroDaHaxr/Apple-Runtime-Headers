//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareFileIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBShareFileIntentResponse : PBCodable <_INPBShareFileIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int confirm:1;
        unsigned int shareMode:1;
        unsigned int success:1;
    } _has;
    BOOL _confirm;
    BOOL _success;
    BOOL __encodeLegacyGloryData;
    int _shareMode;
    NSArray *_recipients;
}

+ (BOOL)supportsSecureCoding;
+ (Class)recipientsType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) BOOL success; // @synthesize success=_success;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) BOOL confirm; // @synthesize confirm=_confirm;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasSuccess;
- (int)StringAsShareMode:(id)arg1;
- (id)shareModeAsString:(int)arg1;
@property(nonatomic) BOOL hasShareMode;
- (id)recipientsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
@property(nonatomic) BOOL hasConfirm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

