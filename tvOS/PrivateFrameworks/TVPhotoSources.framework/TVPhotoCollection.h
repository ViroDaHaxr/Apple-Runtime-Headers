//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPhotoSources/NSCopying-Protocol.h>
#import <TVPhotoSources/NSMutableCopying-Protocol.h>
#import <TVPhotoSources/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, TVPhotoSource;

@interface TVPhotoCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    NSString *_remoteURL;
    _Bool _hasExternalURLs;
    TVPhotoSource *_photoSource;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(readonly, nonatomic) _Bool hasExternalURLs; // @synthesize hasExternalURLs=_hasExternalURLs;
@property(retain, nonatomic) TVPhotoSource *photoSource; // @synthesize photoSource=_photoSource;
@property(readonly, copy, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(readonly, copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSDictionary *providerInfo;

@end

