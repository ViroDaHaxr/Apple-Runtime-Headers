//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface PXDebug : NSView
{
    struct CGImage *_previewImage;
    struct CGColor *_backgroundColor;
    NSString *_name;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct CGImage *previewImage; // @synthesize previewImage=_previewImage;
- (void)drawRect:(struct CGRect)arg1;
- (id)__dbg_formattedDisplayName;
- (id)description;

@end

