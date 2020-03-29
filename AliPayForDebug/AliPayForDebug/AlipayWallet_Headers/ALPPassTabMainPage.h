//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPPassListPage.h"

@class UIView;

@interface ALPPassTabMainPage : ALPPassListPage
{
    _Bool _showSpaceView;
    _Bool _preloadRuned;
    _Bool _loationHasGet;
    UIView *_spaceView;
}

@property(nonatomic) _Bool loationHasGet; // @synthesize loationHasGet=_loationHasGet;
@property(nonatomic) _Bool preloadRuned; // @synthesize preloadRuned=_preloadRuned;
@property(retain, nonatomic) UIView *spaceView; // @synthesize spaceView=_spaceView;
@property(nonatomic) _Bool showSpaceView; // @synthesize showSpaceView=_showSpaceView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onEvent:(id)arg1;
- (id)headerView;
- (void)unregistePromotion;
- (void)registePromotion;
- (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
- (void)checkPreload;
- (void)showModel:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)didLoadModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)stopTitleLoading;
- (_Bool)loadCache;
- (_Bool)needLoadMore;
- (void)reload;
- (void)load;
- (void)createMainModel;
- (id)pageTitle;
- (id)pageSpm;
- (void)toInactive;
- (void)toActive;
- (void)queryLocation;
- (id)listModel;
- (void)viewWillDestroy;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

