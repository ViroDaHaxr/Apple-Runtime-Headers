//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class CSSearchableIndex, FPXDomainContext, NSString;

__attribute__((visibility("hidden")))
@interface FPXDropSpotlightIndexOperation : FPOperation
{
    CSSearchableIndex *_index;
    NSString *_reason;
    NSString *_domainID;
    FPXDomainContext *_domainContext;
}

+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)arg1 index:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)main;
- (id)operationDescription;
- (id)initWithIndex:(id)arg1 context:(id)arg2 domainID:(id)arg3 reason:(id)arg4;

@end

