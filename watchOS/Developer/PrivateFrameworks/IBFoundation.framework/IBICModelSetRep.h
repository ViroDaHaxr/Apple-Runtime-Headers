//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@interface IBICModelSetRep : IBICSlottedAssetRep
{
}

+ (id)contentReferenceTypeName;
+ (Class)repIdentifierClass;
+ (Class)slottedAssetClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(_Bool)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
+ (id)createDefaultInstancesForUnitTesting;
- (_Bool)isEqualForUnitTests:(id)arg1;
- (id)fullyQualifiedRelativePathForFileWriter;
- (id)displayName;
- (CDStruct_2a4d9400)taggingSupport;
- (void)setSlot:(id)arg1;
- (id)structuredIdentifier;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (_Bool)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 withOptions:(id)arg3 error:(id *)arg4;

@end

