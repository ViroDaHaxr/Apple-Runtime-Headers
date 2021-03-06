//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3ProcessDownloadedAssetsOperation : ML3DatabaseOperation
{
}

- (long long)_artworkSourceFromTrackSource:(int)arg1;
- (BOOL)_processGeniusPlist:(id)arg1 geniusIDString:(id)arg2 geniusChecksum:(long long)arg3;
- (double)_videoSnapshotTimeForMediaType:(unsigned int)arg1;
- (BOOL)_processArtworkIdentifier:(id)arg1 artworkToken:(id)arg2 artworkType:(long long)arg3 mediaType:(unsigned int)arg4 sourceType:(long long)arg5;
- (BOOL)_processContainerAsset:(id)arg1 forSource:(int)arg2 withError:(id *)arg3;
- (BOOL)_processTrackAsset:(id)arg1 forSource:(int)arg2 withError:(id *)arg3;
- (BOOL)_execute:(id *)arg1;
- (unsigned long long)type;
- (id)initWithLibrary:(id)arg1 writer:(id)arg2;

@end

