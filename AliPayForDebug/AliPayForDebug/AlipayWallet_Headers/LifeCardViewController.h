//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCardBaseViewController.h"

#import "AUDialogDelegate-Protocol.h"
#import "CPopMenuManagerDelegate-Protocol.h"
#import "CRouterCenterOpenHandler-Protocol.h"
#import "LifeHomeCustomCellViewDelegate-Protocol.h"

@class CPopMenuManager, NSString;

@interface LifeCardViewController : CCardBaseViewController <CRouterCenterOpenHandler, CPopMenuManagerDelegate, LifeHomeCustomCellViewDelegate, AUDialogDelegate>
{
    unsigned long long _position;
    NSString *_publicId;
    NSString *_sourceId;
    CPopMenuManager *_menuManger;
}

+ (id)birdNestWKBuilderFromVC;
@property(retain, nonatomic) CPopMenuManager *menuManger; // @synthesize menuManger=_menuManger;
@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
- (void).cxx_destruct;
- (void)handleBirdNestCardActionButtonClickLog:(id)arg1 andDocument:(id)arg2 templateId:(id)arg3 actionUrl:(id)arg4 extendParams:(id)arg5;
- (void)handleBirdNestCardArticleClickLog:(id)arg1 andDocument:(id)arg2 templateId:(id)arg3 actionUrl:(id)arg4 extendParams:(id)arg5;
- (void)handleCommJumupUrlClick:(id)arg1 actionType:(id)arg2 andDocument:(id)arg3 actionUrl:(id)arg4;
- (void)handlePopMenuClick:(id)arg1 actionType:(id)arg2 andDocument:(id)arg3 templateId:(id)arg4 extendParams:(id)arg5;
- (void)handleBirdNestCardClickLog:(id)arg1 andDocument:(id)arg2 templateId:(id)arg3 linkUrl:(id)arg4;
- (void)updateNoticeSingleTemplateCardList:(_Bool)arg1;
- (void)changeMessageStatus:(unsigned long long)arg1;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2 templateId:(id)arg3;
- (void)onExposeLogData:(id)arg1;
- (void)dealloc;
- (void)handlePopMenuClick:(id)arg1 sectionIndex:(long long)arg2 rowIndex:(long long)arg3 cardModel:(id)arg4 sourceId:(id)arg5 bizMonitor:(id)arg6 templateId:(id)arg7 extendParams:(id)arg8;
- (void)respondCollectClick:(id)arg1 selectIndex:(long long)arg2 widgetIndexPath:(id)arg3;
- (id)pageType;
- (id)complainSubScene;
- (void)popMenuManager:(id)arg1 didSelectAtIndex:(unsigned long long)arg2 withPopMenuItem:(id)arg3;
- (void)complainClicked_old:(long long)arg1 logMapDict:(id)arg2 selectCard:(id)arg3 sourceId:(id)arg4;
- (void)complainClicked:(long long)arg1 logMapDict:(id)arg2 selectCard:(id)arg3 sourceId:(id)arg4;
- (_Bool)handleNativeEvent:(id)arg1 target:(id)arg2;
- (void)loadMoreCardWithList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)refreshCardWithList:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeNotify;
- (void)setupNotify;
- (void)setupUI;
- (id)functionHook;
- (void)viewWillDestroy;
- (id)logBizs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

