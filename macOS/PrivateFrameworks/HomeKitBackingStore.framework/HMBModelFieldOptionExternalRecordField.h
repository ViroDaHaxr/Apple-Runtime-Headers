//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption
{
    BOOL _encrypted;
    NSString *_fieldName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (void)applyTo:(id)arg1;
- (id)initWithExternalRecordField:(id)arg1 encrypted:(BOOL)arg2;

@end

