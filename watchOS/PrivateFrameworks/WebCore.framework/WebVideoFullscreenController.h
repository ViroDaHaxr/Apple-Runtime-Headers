//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebVideoFullscreenController : NSObject
{
    struct RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext>> _context;
    struct RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement>> _videoElement;
}

- (id).cxx_construct;
- (void).cxx_destruct;
-     // Error parsing type: v12@0:4^{VideoFullscreenControllerContext=^^?{WeakPtrFactory<WebCore::VideoFullscreenModel>={RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >=^{WeakPtrImpl}}}^^?^^?{WeakPtrFactory<WebCore::VideoFullscreenChangeObserver>={RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >=^{WeakPtrImpl}}}^^?{WeakPtrFactory<WebCore::PlaybackSessionModel>={RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> >=^{WeakPtrImpl}}}^^?{atomic<unsigned int>={__cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> >=AI}}{HashSet<WebCore::PlaybackSessionModelClient *, WTF::PtrHash<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *> >={HashTable<WebCore::PlaybackSessionModelClient *, WebCore::PlaybackSessionModelClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *>, WTF::HashTraits<WebCore::PlaybackSessionModelClient *> >=^^{PlaybackSessionModelClient}}}{HashSet<WebCore::VideoFullscreenModelClient *, WTF::PtrHash<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *> >={HashTable<WebCore::VideoFullscreenModelClient *, WebCore::VideoFullscreenModelClient *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *>, WTF::HashTraits<WebCore::VideoFullscreenModelClient *> >=^^{VideoFullscreenModelClient}}}{RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit> >=^{VideoFullscreenInterfaceAVKit}}{RefPtr<WebCore::VideoFullscreenModelVideoElement, WTF::DumbPtrTraits<WebCore::VideoFullscreenModelVideoElement> >=^{VideoFullscreenModelVideoElement}}{RefPtr<WebCore::PlaybackSessionModelMediaElement, WTF::DumbPtrTraits<WebCore::PlaybackSessionModelMediaElement> >=^{PlaybackSessionModelMediaElement}}{RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >=^{HTMLVideoElement}}{RetainPtr<UIView>=^v}{RetainPtr<WebVideoFullscreenController>=^v}}8, name: didFinishFullscreen:
- (void)requestHideAndExitFullscreen;
- (void)exitFullscreen;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (struct HTMLVideoElement *)videoElement;
- (void)setVideoElement:(struct HTMLVideoElement *)arg1;
- (id)init;

@end

