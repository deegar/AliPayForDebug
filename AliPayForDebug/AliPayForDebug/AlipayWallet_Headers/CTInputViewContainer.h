//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CTActionToolViewActionDelegate-Protocol.h"
#import "CTGrowingTextViewDelegate-Protocol.h"
#import "CTInputViewGroupActionDelegate-Protocol.h"
#import "CTInputViewRecodActionDelegate-Protocol.h"
#import "CTInputViewSnapChatGroupActionDelegate-Protocol.h"
#import "CTInputViewSnapChatRecordActionDelegate-Protocol.h"
#import "CTPasteboardDelegate-Protocol.h"

@class CTChatViewClassPairProvider, NSMutableDictionary, NSString, UIPageControl;
@protocol CTInputViewContainerDelegate, CTInputViewGeneralProtocol, CTInputViewGroupInputProtocol;

@interface CTInputViewContainer : UIView <CTGrowingTextViewDelegate, CTPasteboardDelegate, CTInputViewGroupActionDelegate, CTInputViewSnapChatGroupActionDelegate, CTInputViewRecodActionDelegate, CTInputViewSnapChatRecordActionDelegate, CTActionToolViewActionDelegate>
{
    UIView<CTInputViewGeneralProtocol> *_generalTextInputView;
    CTChatViewClassPairProvider *_inputViewClassPair;
    NSMutableDictionary *_viewInfoDic;
    NSMutableDictionary *_draftDic;
    _Bool _hideInputBox;
    _Bool _isShowRedDot;
    _Bool _hasSetSafeAreaView;
    int _inputMode;
    id <CTInputViewContainerDelegate> _delegate;
    id <CTInputViewContainerDelegate> _alternateDelegate;
    id _currentSession;
    NSString *_inputStyle;
    NSString *_business;
    UIView<CTInputViewGeneralProtocol> *_generalInputView;
    UIView *_accessoryView;
    UIPageControl *_pageControl;
    UIView *_redDot;
    UIView *_safeAreaView;
    UIView *_topBorderView;
}

@property(retain, nonatomic) UIView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(nonatomic) _Bool hasSetSafeAreaView; // @synthesize hasSetSafeAreaView=_hasSetSafeAreaView;
@property(retain, nonatomic) UIView *safeAreaView; // @synthesize safeAreaView=_safeAreaView;
@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) int inputMode; // @synthesize inputMode=_inputMode;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIView<CTInputViewGeneralProtocol> *generalInputView; // @synthesize generalInputView=_generalInputView;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) _Bool hideInputBox; // @synthesize hideInputBox=_hideInputBox;
@property(copy, nonatomic) NSString *inputStyle; // @synthesize inputStyle=_inputStyle;
@property(nonatomic) __weak id currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) __weak id <CTInputViewContainerDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property(nonatomic) __weak id <CTInputViewContainerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCheckFindPerson:(id)arg1 range:(struct _NSRange)arg2 text:(id)arg3;
- (void)actionToolView:(id)arg1 didPerformSEL:(int)arg2;
- (void)configActionToolShouldDisableActions:(_Bool)arg1;
- (void)actionToolViewShouldShowAllButtons:(_Bool)arg1;
- (void)configDraft:(id)arg1 command:(id)arg2;
- (void)updateText:(id)arg1 animated:(_Bool)arg2;
- (void)enterTextInputMode;
- (_Bool)isTextInputFirstResponder;
- (void)clearTextInput;
@property(readonly, copy, nonatomic) NSString *draft;
@property(readonly, copy, nonatomic) NSString *text;
- (id)createInputViewIfNotExist:(id)arg1 params:(id)arg2 viewInfo:(id)arg3;
- (id)createInputViewIfNotExist:(id)arg1 params:(id)arg2;
- (id)transformInputView:(id)arg1 params:(id)arg2;
- (void)pasteItem:(id)arg1 type:(id)arg2;
- (void)groupInputViewEmojiBecomeFirstResponser;
- (void)groupInputViewBecomeFirstResponser;
- (void)inputViewGroupToolsViewDisappear:(id)arg1;
- (void)inputViewGroupToolsViewWakeupHideEmoji:(id)arg1;
- (void)inputViewGroupToolsViewWakeupEmoji:(id)arg1;
- (void)inputViewGroupToolsViewWakeup:(id)arg1;
- (void)refreshCTInputBoxRedDotView;
- (void)refreshRedDot:(_Bool)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)dealBackString:(id)arg1 range:(struct _NSRange)arg2 compelete:(CDUnknownBlockType)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)inputView:(id)arg1 willChangeHeight:(double)arg2;
- (void)pMsgToolsTapped:(id)arg1;
- (void)recordInputViewBeginRecord:(id)arg1;
- (void)recordInputView:(id)arg1 finishRecord:(id)arg2;
- (void)submitTaped:(id)arg1;
- (void)inputView:(id)arg1 emojiButtonTapped:(id)arg2;
- (void)inputView:(id)arg1 groupToolsButtonTapped:(id)arg2;
- (void)inputView:(id)arg1 recordButtonTapped:(id)arg2;
- (void)recordInputView:(id)arg1 writeButtonTapped:(id)arg2;
- (void)recordInputView:(id)arg1 toolsButtonTapped:(id)arg2;
- (void)recordInputView:(id)arg1 emojiButtonTapped:(id)arg2;
- (void)recordInputView:(id)arg1 exitSnapChatButtonTapped:(id)arg2;
- (void)recordInputView:(id)arg1 picVideoEntryButtonTapped:(id)arg2;
- (void)inputView:(id)arg1 exitSnapChatButtonTapped:(id)arg2;
- (void)inputView:(id)arg1 picVideoEntryButtonTapped:(id)arg2;
- (void)onSnapChatPicTapped:(id)arg1;
- (void)onExitSnapChatTapped:(id)arg1;
- (void)hideTopBorderLine;
- (void)showTopBorderLine;
- (void)closeToolsView;
- (void)setInputStyle:(id)arg1 oldInputMode:(int)arg2 newInputMode:(int)arg3;
- (void)layoutSubviews;
- (void)showVoiceToWorldMarginBottom:(_Bool)arg1;
- (double)inputViewHeightForShowSafeArea:(_Bool)arg1;
- (double)adjustHeightForSafeArea;
- (void)adjustSafeAearViewForHeight:(struct UIEdgeInsets)arg1;
- (void)safeAreaInsetsDidChange;
@property(readonly, nonatomic) UIView<CTInputViewGroupInputProtocol> *generalTextInputView;
- (void)adjustUI;
- (id)init;
- (id)initWithInputStyle:(id)arg1 inputMode:(int)arg2 business:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

