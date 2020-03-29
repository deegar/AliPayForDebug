//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "H5KeyboardTextViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class H5KeyboardTextView, NSDictionary, NSNotification, NSNumber, NSString, PSDContentView;
@protocol H5NumKeyboardDelegate;

@interface H5TextAreaKeyboard : NSObject <UITextViewDelegate, H5KeyboardTextViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _shouldUseInpageRenderMode;
    _Bool _shouldIgnorKeyBoardShow;
    _Bool _shouldIgnorKeyBoardNotify;
    _Bool _isModifyContentInset;
    _Bool _isResizeWebViewFrameHeight;
    _Bool _hasClickReturn;
    float _initPadding;
    H5KeyboardTextView *_activeTextView;
    NSString *_currentAppId;
    id <H5NumKeyboardDelegate> _delegate;
    PSDContentView *_curWebview;
    NSDictionary *_currentActiveInputData;
    double _mMoveDistance;
    NSNumber *_lastTapKeyCode;
    NSString *_lastTapKey;
    double _currentWebViewSourceHeight;
    NSNotification *_lastNotification;
    double _originWebViewScrollViewOffsetY;
    long long _lineCount;
    double _lastCursorPosition;
}

@property(nonatomic) double lastCursorPosition; // @synthesize lastCursorPosition=_lastCursorPosition;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(nonatomic) double originWebViewScrollViewOffsetY; // @synthesize originWebViewScrollViewOffsetY=_originWebViewScrollViewOffsetY;
@property(retain, nonatomic) NSNotification *lastNotification; // @synthesize lastNotification=_lastNotification;
@property(nonatomic) double currentWebViewSourceHeight; // @synthesize currentWebViewSourceHeight=_currentWebViewSourceHeight;
@property(nonatomic) _Bool hasClickReturn; // @synthesize hasClickReturn=_hasClickReturn;
@property(nonatomic) _Bool isResizeWebViewFrameHeight; // @synthesize isResizeWebViewFrameHeight=_isResizeWebViewFrameHeight;
@property(nonatomic) _Bool isModifyContentInset; // @synthesize isModifyContentInset=_isModifyContentInset;
@property(nonatomic) _Bool shouldIgnorKeyBoardNotify; // @synthesize shouldIgnorKeyBoardNotify=_shouldIgnorKeyBoardNotify;
@property(nonatomic) _Bool shouldIgnorKeyBoardShow; // @synthesize shouldIgnorKeyBoardShow=_shouldIgnorKeyBoardShow;
@property(retain, nonatomic) NSString *lastTapKey; // @synthesize lastTapKey=_lastTapKey;
@property(retain, nonatomic) NSNumber *lastTapKeyCode; // @synthesize lastTapKeyCode=_lastTapKeyCode;
@property(nonatomic) double mMoveDistance; // @synthesize mMoveDistance=_mMoveDistance;
@property(retain, nonatomic) NSDictionary *currentActiveInputData; // @synthesize currentActiveInputData=_currentActiveInputData;
@property(nonatomic) __weak PSDContentView *curWebview; // @synthesize curWebview=_curWebview;
@property(nonatomic) float initPadding; // @synthesize initPadding=_initPadding;
@property(nonatomic) _Bool shouldUseInpageRenderMode; // @synthesize shouldUseInpageRenderMode=_shouldUseInpageRenderMode;
@property(nonatomic) __weak id <H5NumKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *currentAppId; // @synthesize currentAppId=_currentAppId;
@property(retain, nonatomic) H5KeyboardTextView *activeTextView; // @synthesize activeTextView=_activeTextView;
- (void).cxx_destruct;
- (void)updateInputFrame;
- (void)updateKeyBoardInputCursor:(long long)arg1;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lineChange;
- (void)updateKeyBoardInputColor:(id)arg1;
- (void)updateKeyBoardInputVal:(id)arg1;
- (void)_dispatchEventWithElement:(id)arg1 keyCode:(id)arg2 strKey:(id)arg3 marked:(_Bool)arg4 range:(id)arg5 extData:(id)arg6;
- (void)_updateValueByText:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setactiveTextViewRange;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)updateAtrributedTextWithTextView:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldComplete:(id)arg1;
- (void)adjustScrollViewWithMaxY:(double)arg1 notification:(id)arg2 toobarHeight:(float)arg3;
- (double)getKeyBoardHeightWithNotify:(id)arg1;
- (void)doAdjustScrollViewWithNotification:(id)arg1 toobarHeight:(float)arg2 isFromReset:(_Bool)arg3;
- (void)keyboardShowNotification:(id)arg1 toobarHeight:(float)arg2;
- (_Bool)canfindFirstResponser;
- (void)resizeKeyBoardInput:(id)arg1;
- (void)resetKeyBoardInput:(id)arg1;
- (void)hideKeyBoard;
- (id)createNativeInputWithParam:(id)arg1 idx:(unsigned long long)arg2 isFromReset:(_Bool)arg3;
- (void)updateInputFrameWithParam:(id)arg1;
- (_Bool)checkInputDataParam:(id)arg1;
- (void)dealloc;
- (void)keyboardDidHide:(id)arg1;
- (void)willEnterForegroundNotification:(id)arg1;
- (void)didEnterBackgroundNotification:(id)arg1;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

