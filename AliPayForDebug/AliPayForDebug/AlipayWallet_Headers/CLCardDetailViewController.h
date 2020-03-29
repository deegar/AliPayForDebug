//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "detailBaseCtr.h"

#import "CCardUpdateProtocol-Protocol.h"
#import "HCCommentHasMoreViewDelegate-Protocol.h"

@class CCardUpdateManager, CLDetailHeaderView, CLDetailShareManeger, COMQueryFeedDetailInfoResp, NSDictionary, NSString;

@interface CLCardDetailViewController : detailBaseCtr <HCCommentHasMoreViewDelegate, CCardUpdateProtocol>
{
    COMQueryFeedDetailInfoResp *_result;
    NSDictionary *_options;
    NSString *_feedId;
    NSString *_lastReplyId;
    _Bool _viewHasDidAppear;
    _Bool _needPopupKeyBoard;
    _Bool _requestingReply;
    CCardUpdateManager *_cardUpdateManager;
    CLDetailHeaderView *_headerView;
    CLDetailShareManeger *_detaiShareManager;
}

@property(retain, nonatomic) CLDetailShareManeger *detaiShareManager; // @synthesize detaiShareManager=_detaiShareManager;
@property(retain, nonatomic) CLDetailHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CCardUpdateManager *cardUpdateManager; // @synthesize cardUpdateManager=_cardUpdateManager;
- (void).cxx_destruct;
- (_Bool)gotoProfile:(id)arg1 source:(unsigned long long)arg2;
- (id)processLinkData:(id)arg1 originData:(id)arg2;
- (long long)topicpageIndex;
- (void)didClickAttributeLabel:(id)arg1 OnLink:(id)arg2;
- (id)infosListViewController:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (_Bool)infosListViewController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)headBrowserViewDidTapMoreButton:(id)arg1;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)handleCommOp:(id)arg1 indexSub:(long long)arg2;
- (id)gotoProfileBizExtendMap:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)menuDelReportClicked:(id)arg1;
- (void)menuDelBlackClicked:(id)arg1;
- (id)cc_requireCustomItems:(id)arg1;
- (void)commLongPressShowPopMenus:(int)arg1 target:(id)arg2 rectView:(id)arg3 fromView:(id)arg4 commOption:(id)arg5;
- (_Bool)handlePopMenusRespond:(id)arg1 extDic:(id)arg2;
- (void)doOptionChange:(int)arg1 option:(id)arg2;
- (void)onJoinedClub:(id)arg1;
- (void)notiOptionChange:(id)arg1;
- (void)gotoReport:(id)arg1;
- (void)commentHasMoreDidClick:(id)arg1;
- (id)functionHook;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)resetSelect;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleRewardOp:(id)arg1 indexSub:(long long)arg2;
- (void)refreshDetailContentView:(id)arg1 sync:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)rightButtonAction:(id)arg1;
- (_Bool)permissionAccessForType:(int)arg1;
- (void)requestEarlierComment:(CDUnknownBlockType)arg1;
- (void)requestAllowReply;
- (void)requestForbiddenReply;
- (void)requestReply:(id)arg1;
- (void)postCurrentCommentCount;
- (void)requestDeleteReply:(id)arg1 pushToBlack:(_Bool)arg2 sucess:(CDUnknownBlockType)arg3;
- (void)requestDeleteReply:(id)arg1 pushToBlack:(_Bool)arg2 blackReason:(id)arg3 sucess:(CDUnknownBlockType)arg4;
- (void)requestCancelStick;
- (void)requestStick;
- (void)requestDeleteFeed:(_Bool)arg1 blackReason:(id)arg2;
- (void)requestDeleteFeed:(_Bool)arg1;
- (void)resetCommetView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)requestData;
- (void)dealloc;
- (void)resetSceneData;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (id)pageType;
- (id)complainSubScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

