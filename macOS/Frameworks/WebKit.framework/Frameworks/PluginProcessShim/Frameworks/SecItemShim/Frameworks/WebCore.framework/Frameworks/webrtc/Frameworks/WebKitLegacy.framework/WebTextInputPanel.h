//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebCore/WebPanel.h>

@class NSTextView;

__attribute__((visibility("hidden")))
@interface WebTextInputPanel : WebPanel
{
    NSTextView *_inputTextView;
}

- (id)_inputContext;
- (BOOL)_interpretKeyEvent:(id)arg1 string:(id *)arg2;
- (void)_keyboardInputSourceChanged:(id)arg1;
- (id)init;
- (void)dealloc;

@end

