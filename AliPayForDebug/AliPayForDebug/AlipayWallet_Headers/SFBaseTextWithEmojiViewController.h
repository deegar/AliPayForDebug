//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "EmotionBoardViewDelegate-Protocol.h"
#import "SFEditViewDelegate-Protocol.h"
#import "SFEmojiBtnLineViewDelegate-Protocol.h"
#import "SFTopicListViewDelegate-Protocol.h"

@class EmotionBoardView, NSArray, NSString, SFEditView, SFEmojiBtnLineView, SFTopicListView, UIView;

@interface SFBaseTextWithEmojiViewController : DTViewController <SFEditViewDelegate, EmotionBoardViewDelegate, SFEmojiBtnLineViewDelegate, SFTopicListViewDelegate>
{
    _Bool _isViewShow;
    _Bool _keyboardDismissed;
    _Bool _topicNew;
    _Bool _canQuickTopic;
    _Bool _shouldQuickShowTopic;
    _Bool _isViewDidShow;
    _Bool _showAtBottom;
    SFEditView *_textView;
    SFEmojiBtnLineView *_emojiBtnLineView;
    double _keyboardHeight;
    NSString *_toolbar;
    NSString *_topicTitle;
    NSArray *_topics;
    SFTopicListView *_topicListView;
    NSString *_fromId;
    EmotionBoardView *_emojiView;
    UIView *_viewToolbarBottom;
}

@property(retain, nonatomic) UIView *viewToolbarBottom; // @synthesize viewToolbarBottom=_viewToolbarBottom;
@property(nonatomic) _Bool showAtBottom; // @synthesize showAtBottom=_showAtBottom;
@property(retain, nonatomic) EmotionBoardView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) _Bool isViewDidShow; // @synthesize isViewDidShow=_isViewDidShow;
@property(copy, nonatomic) NSString *fromId; // @synthesize fromId=_fromId;
@property(nonatomic) _Bool shouldQuickShowTopic; // @synthesize shouldQuickShowTopic=_shouldQuickShowTopic;
@property(nonatomic) _Bool canQuickTopic; // @synthesize canQuickTopic=_canQuickTopic;
@property(retain, nonatomic) SFTopicListView *topicListView; // @synthesize topicListView=_topicListView;
@property(nonatomic) _Bool topicNew; // @synthesize topicNew=_topicNew;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(copy, nonatomic) NSString *topicTitle; // @synthesize topicTitle=_topicTitle;
@property(copy, nonatomic) NSString *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool keyboardDismissed; // @synthesize keyboardDismissed=_keyboardDismissed;
@property(nonatomic) _Bool isViewShow; // @synthesize isViewShow=_isViewShow;
@property(retain, nonatomic) SFEmojiBtnLineView *emojiBtnLineView; // @synthesize emojiBtnLineView=_emojiBtnLineView;
@property(retain, nonatomic) SFEditView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)editStyleChanged:(id)arg1;
- (void)needResetSendButtonText;
- (void)editViewDone:(id)arg1;
- (void)deleteButtonPressed;
- (void)sendButtonPressed;
- (void)emotionToSend:(id)arg1;
- (void)showTopicListView:(_Bool)arg1 commentViewFollow:(_Bool)arg2 animation:(_Bool)arg3;
- (void)showEmojiView:(_Bool)arg1 commentViewFollow:(_Bool)arg2 animation:(_Bool)arg3;
- (void)dealloc;
- (void)cleanMySelf;
- (void)viewWillDestroy;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)keyboardDidDisappear:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)doKeyboardAnimation:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)editViewDidChange:(id)arg1;
- (void)closeKeyboard:(id)arg1;
- (void)removeKeyboardObserver;
- (void)addKeyboardObserver;
- (void)viewSafeAreaInsetsDidChange;
- (void)beforePushViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)checkKeyBoard;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setUPEmojiBtnLineViewWithHeight:(double)arg1 emojiBtnFrame:(struct CGRect)arg2 showAtBottom:(_Bool)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

