//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WAKView.h>

@interface WAKClipView : WAKView
{
    _Bool _copiesOnScroll;
    WAKView *_documentView;
}

@property(nonatomic) _Bool copiesOnScroll; // @synthesize copiesOnScroll=_copiesOnScroll;
@property(readonly, nonatomic) WAKView *documentView; // @synthesize documentView=_documentView;
- (struct CGRect)documentVisibleRect;
- (void)_setDocumentView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

