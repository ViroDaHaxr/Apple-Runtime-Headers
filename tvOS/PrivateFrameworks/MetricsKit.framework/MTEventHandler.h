//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricsKit/MTEventDataProvider.h>

@protocol MTEventHandlerDelegate;

@interface MTEventHandler : MTEventDataProvider
{
}

+ (id)cachableWithKey:(id)arg1 onBackgroundThread:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
+ (void)clearEventContextCache;
+ (void)createEventContextCache;
+ (id)currentEventContextCache;
- (id)eventVersion:(id)arg1;
- (id)eventType;
- (_Bool)mtIncludeBaseFields;
- (id)knownFields;
- (id)metricsDataWithCallerSuppliedFields:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <MTEventHandlerDelegate> delegate; // @dynamic delegate;

@end

