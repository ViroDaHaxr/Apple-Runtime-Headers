//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOSuggestionItem : PBCodable <NSCopying>
{
    NSString *_suggestionString;
    int _tappingCount;
    BOOL _eventuallyVisible;
    BOOL _initiallyVisible;
    struct {
        unsigned int has_tappingCount:1;
        unsigned int has_eventuallyVisible:1;
        unsigned int has_initiallyVisible:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTappingCount;
@property(nonatomic) int tappingCount;
@property(nonatomic) BOOL hasEventuallyVisible;
@property(nonatomic) BOOL eventuallyVisible;
@property(nonatomic) BOOL hasInitiallyVisible;
@property(nonatomic) BOOL initiallyVisible;
@property(retain, nonatomic) NSString *suggestionString;
@property(readonly, nonatomic) BOOL hasSuggestionString;

@end

