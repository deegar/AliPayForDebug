//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MFViewController.h"

#import "BEEPhotoBrowserDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class BEEPhoto, CLoadMoreView, NSMutableArray, NSMutableSet, NSString, UIButton, UIView;

@interface SocialRemindListViewController : MFViewController <UIActionSheetDelegate, BEEPhotoBrowserDelegate>
{
    _Bool _isLoadingMore;
    _Bool _hasMore;
    _Bool _disableScrollLoadMore;
    int _remindListType;
    NSMutableSet *_remindScenes;
    NSMutableArray *_dataList;
    NSMutableArray *_remindList;
    NSMutableSet *_pageUserIdCache;
    CLoadMoreView *_loadMoreView;
    UIView *_maskView;
    BEEPhoto *_thumbPhoto;
    BEEPhoto *_curPhoto;
    UIButton *_rightClearBtn;
}

@property(retain, nonatomic) UIButton *rightClearBtn; // @synthesize rightClearBtn=_rightClearBtn;
@property(nonatomic) _Bool disableScrollLoadMore; // @synthesize disableScrollLoadMore=_disableScrollLoadMore;
@property(retain, nonatomic) BEEPhoto *curPhoto; // @synthesize curPhoto=_curPhoto;
@property(retain, nonatomic) BEEPhoto *thumbPhoto; // @synthesize thumbPhoto=_thumbPhoto;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) CLoadMoreView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) NSMutableSet *pageUserIdCache; // @synthesize pageUserIdCache=_pageUserIdCache;
@property(retain, nonatomic) NSMutableArray *remindList; // @synthesize remindList=_remindList;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) NSMutableSet *remindScenes; // @synthesize remindScenes=_remindScenes;
@property(nonatomic) int remindListType; // @synthesize remindListType=_remindListType;
- (void).cxx_destruct;
- (void)goToCommentDetailViewController:(id)arg1;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (id)topView;
- (void)goToPhotBrowser:(id)arg1 photoSender:(id)arg2;
- (id)makeThumbPhoto:(id)arg1 photoSender:(id)arg2;
- (id)photoBrowser:(id)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
- (void)goToRemindScheme:(id)arg1;
- (void)goToORewardScheme:(id)arg1;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)didClickAnimation:(id)arg1;
- (void)convertRemindDataList:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didTapLoadMore;
- (void)refreshRemindListUIWithRemindList:(id)arg1 type:(int)arg2 index:(int)arg3 sync:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)loadMoreRemindsAsync;
- (_Bool)hasMoreUnread;
- (void)loadMoreRemindsSync;
- (void)loadUnreadRemindsAsyncALL;
- (void)loadUnreadReminds;
- (void)clearAllRemind;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)clickClearAllRemindAction:(id)arg1;
- (void)refreshClearBarItem;
- (void)resetRemindListView;
- (void)addReminListNoti;
- (void)remindListNoti:(id)arg1;
- (void)setupRightItem;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)userInfoChange:(id)arg1;
- (void)notiLanguageChange:(id)arg1;
- (void)setCurrentTitle;
- (void)removeNotify;
- (void)setupNotify;
- (void)setupUI;
- (id)init;
- (void)viewWillDestroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

