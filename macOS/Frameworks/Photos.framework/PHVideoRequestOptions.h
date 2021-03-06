//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHMediaRequestThreadingOptions-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PHVideoRequestOptions : NSObject <PHMediaRequestThreadingOptions>
{
    BOOL _networkAccessAllowed;
    BOOL _streamingAllowed;
    BOOL _videoComplementAllowed;
    BOOL _allowMediumHighQuality;
    BOOL _restrictToPlayableOnCurrentDevice;
    long long _version;
    long long _deliveryMode;
    CDUnknownBlockType _progressHandler;
    long long _streamingVideoIntent;
    long long _contentMode;
    NSObject<OS_dispatch_queue> *_resultHandlerQueue;
    struct CGSize _targetSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue; // @synthesize resultHandlerQueue=_resultHandlerQueue;
@property(nonatomic) BOOL restrictToPlayableOnCurrentDevice; // @synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic, getter=isMediumHighQualityAllowed) BOOL allowMediumHighQuality; // @synthesize allowMediumHighQuality=_allowMediumHighQuality;
@property(nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed; // @synthesize videoComplementAllowed=_videoComplementAllowed;
@property(nonatomic) long long streamingVideoIntent; // @synthesize streamingVideoIntent=_streamingVideoIntent;
@property(nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isSynchronous;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

