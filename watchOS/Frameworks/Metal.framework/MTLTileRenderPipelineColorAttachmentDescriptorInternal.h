//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor
{
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate _private;
}

- (const struct MTLTileRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;
- (void)setPixelFormat:(unsigned int)arg1;
- (unsigned int)pixelFormat;
- (id)description;
- (id)formattedDescription:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

