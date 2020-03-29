//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlipayLifeCBBaseVC.h"

#import "AlipayLifeListManagerCallbackDelegate-Protocol.h"
#import "CRouterCenterOpenHandler-Protocol.h"

@class AUBarButtonItem, AlipayLifeListModel, NSDictionary, NSString, UIImageView, UILabel;
@protocol AlipayLifeListManagerDelegate;

@interface AlipayLifeListTransparentNavVC : AlipayLifeCBBaseVC <AlipayLifeListManagerCallbackDelegate, CRouterCenterOpenHandler>
{
    double _currentNavAlpha;
    NSDictionary *_paramDic;
    NSString *_previewId;
    NSString *_extParams;
    UIImageView *_topBackgroudImageView;
    UILabel *_topicTitleLabel;
    UILabel *_topicDescLabel;
    AlipayLifeListModel *_listModel;
    AUBarButtonItem *_cancelItem;
    id <AlipayLifeListManagerDelegate> _listManager;
}

@property(retain, nonatomic) id <AlipayLifeListManagerDelegate> listManager; // @synthesize listManager=_listManager;
@property(retain, nonatomic) AUBarButtonItem *cancelItem; // @synthesize cancelItem=_cancelItem;
@property(retain, nonatomic) AlipayLifeListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) UILabel *topicDescLabel; // @synthesize topicDescLabel=_topicDescLabel;
@property(retain, nonatomic) UILabel *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(retain, nonatomic) UIImageView *topBackgroudImageView; // @synthesize topBackgroudImageView=_topBackgroudImageView;
@property(retain, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *previewId; // @synthesize previewId=_previewId;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
- (void).cxx_destruct;
- (_Bool)openRouterCenterURLString:(id)arg1 params:(id)arg2 context:(id)arg3;
- (void)handleMFWidgetEvent:(id)arg1 target:(id)arg2;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (id)configRefreshView;
- (id)cellBackgroundColor;
- (void)reloadList:(id)arg1 sync:(_Bool)arg2;
- (void)registerEventHandlers;
- (id)dataManager;
- (void)dataChangedWithType:(unsigned long long)arg1 atIndex:(long long)arg2 changeFrom:(id)arg3;
- (void)refreshTableFooter;
- (void)refreshAnimationDidFinished;
- (void)didTriggerLoadMore;
- (void)didTriggerRefresh:(_Bool)arg1;
- (_Bool)shouldAutoRefresh;
- (void)cardboard:(id)arg1 settings:(CDUnknownBlockType)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)rightBarItemAciton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)topBackgroudView:(id)arg1;
- (id)headerView:(id)arg1 subTitle:(id)arg2 backgroudUrl:(id)arg3;
- (id)makeCustomCard:(id)arg1;
- (void)updateVC:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

