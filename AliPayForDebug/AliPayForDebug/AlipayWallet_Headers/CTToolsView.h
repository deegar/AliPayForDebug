//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CTCenterScrollViewDelegate-Protocol.h"
#import "EmotionBoardViewDelegate-Protocol.h"

@class ACAppManager, APChatAppManager, CTCenterScrollView, CTSessionModel, EmotionBoardView, NSString;
@protocol CTToolsViewDelegate;

@interface CTToolsView : UIView <CTCenterScrollViewDelegate, EmotionBoardViewDelegate>
{
    _Bool _isShowSendMessage;
    _Bool _isGroup;
    _Bool _isDiscussGroup;
    _Bool _showRedDot;
    id <CTToolsViewDelegate> _delegate;
    EmotionBoardView *_emojiView;
    CTCenterScrollView *_scrollView;
    CTSessionModel *_sessionModel;
    ACAppManager *_appManager;
    APChatAppManager *_promotionManager;
}

@property(retain, nonatomic) APChatAppManager *promotionManager; // @synthesize promotionManager=_promotionManager;
@property(retain, nonatomic) ACAppManager *appManager; // @synthesize appManager=_appManager;
@property(retain, nonatomic) CTSessionModel *sessionModel; // @synthesize sessionModel=_sessionModel;
@property(retain, nonatomic) CTCenterScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(retain, nonatomic) EmotionBoardView *emojiView; // @synthesize emojiView=_emojiView;
@property(nonatomic) _Bool isDiscussGroup; // @synthesize isDiscussGroup=_isDiscussGroup;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isShowSendMessage; // @synthesize isShowSendMessage=_isShowSendMessage;
@property(nonatomic) __weak id <CTToolsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getAppOrderInfosForSessionType:(id)arg1;
- (_Bool)shouldAdjustAppsPositionForSessionType:(id)arg1;
- (id)adjustAppsPositionInPlatform:(id)arg1;
- (void)resetTouchEnableStatus;
- (void)emojiTextViewHasText:(_Bool)arg1;
- (void)deleteButtonPressed;
- (void)sendButtonPressed;
- (void)emotionToSend:(id)arg1;
- (void)appInserted:(id)arg1;
- (void)appInserting:(id)arg1;
- (double)emojiBoardHeight;
- (void)showEmojiView:(_Bool)arg1 animation:(_Bool)arg2;
- (void)openAppItem:(id)arg1;
- (void)jumpRedDotPage;
- (void)reloadAppCenterData;
- (id)filterPermission:(id)arg1;
- (id)currentApps:(id)arg1 bizCode:(id)arg2;
- (id)currentApps;
- (void)dealloc;
- (id)initWithContactInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

