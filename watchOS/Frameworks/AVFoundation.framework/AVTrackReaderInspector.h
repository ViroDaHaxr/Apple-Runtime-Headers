//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector : AVAssetTrackInspector
{
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigTrackReader *_trackReader;
    int _trackID;
    unsigned long _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isExcludedFromAutoselectionInTrackGroup;
- (id)_trackReferences;
- (int)provisionalAlternateGroupID;
- (int)defaultAlternateGroupID;
- (int)alternateGroupID;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)minSampleDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (float)preferredVolume;
- (int)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)extendedLanguageTag;
- (id)mediaCharacteristics;
- (id)languageCode;
- (float)peakDataRate;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (_Bool)hasAudioSampleDependencies;
- (_Bool)requiresFrameReordering;
- (CDStruct_e83c9415)timeRange;
- (long long)totalSampleDataLength;
- (long)decodabilityValidationResult;
- (_Bool)isDecodable;
- (long)playabilityValidationResult;
- (_Bool)isPlayable;
- (_Bool)isSelfContained;
- (_Bool)isEnabled;
- (id)formatDescriptions;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (id)mediaType;
- (unsigned long)_figMediaType;
- (int)trackID;
- (id)asset;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;

@end

