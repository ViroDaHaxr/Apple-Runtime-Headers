//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFVersion;

@interface HMDBackingStoreModelObjectStorageInfo : HMFObject
{
    _Bool _defaultValueSet;
    Class _classObj;
    unsigned int _logging;
    HMFVersion *_readOnly;
    HMFVersion *_unavailable;
    id _defaultValue;
}

+ (id)deprecatedField;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned int)arg3 readOnly:(id)arg4 unavailable:(id)arg5;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned int)arg3 readOnly:(id)arg4;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2 logging:(unsigned int)arg3;
+ (id)infoWithClass:(Class)arg1 defaultValue:(id)arg2;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned int)arg2 readOnly:(id)arg3 unavailable:(id)arg4;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned int)arg2 readOnly:(id)arg3;
+ (id)infoWithClass:(Class)arg1 logging:(unsigned int)arg2;
+ (id)infoWithClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool defaultValueSet; // @synthesize defaultValueSet=_defaultValueSet;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) HMFVersion *unavailable; // @synthesize unavailable=_unavailable;
@property(retain, nonatomic) HMFVersion *readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) unsigned int logging; // @synthesize logging=_logging;
@property(readonly, nonatomic) Class classObj; // @synthesize classObj=_classObj;
- (id)description;
- (id)initWithClass:(Class)arg1 logging:(unsigned int)arg2 readOnly:(id)arg3 unavailable:(id)arg4 defaultSet:(_Bool)arg5 defaultValue:(id)arg6;

@end

