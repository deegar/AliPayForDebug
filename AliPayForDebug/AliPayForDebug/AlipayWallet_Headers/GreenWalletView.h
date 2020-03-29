//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ACCSwipeTableViewCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GreenWalletContentView, GreenWalletFooterRefreshView, NSMutableArray, NSString, UIButton, UIPanGestureRecognizer, UITableView;
@protocol GreenWalletViewDelegate;

@interface GreenWalletView : UIView <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, ACCSwipeTableViewCellDelegate>
{
    _Bool tableNeedShow;
    _Bool tableNeedAdjustPosition;
    _Bool panCardsStartedInCardsAera;
    _Bool _hasMore;
    _Bool _forceShowAllCardBtn;
    _Bool _canShowAllCardBtn;
    _Bool _isHandlingGesture;
    _Bool _isOtherExpanded;
    _Bool _canTriggleLoading;
    GreenWalletFooterRefreshView *_footerMore;
    unsigned long long _status;
    id <GreenWalletViewDelegate> _delegate;
    UIView *_associationView;
    NSMutableArray *_foldedCardList;
    UITableView *_tableView;
    UIButton *_bottomButton;
    UIView *_containerView;
    GreenWalletContentView *_contentView;
    UIView *_bottomCardsContainerView;
    UIButton *_btnBottomAllCard;
    UIPanGestureRecognizer *_panTable;
    struct CGRect _showTableViewRect;
    struct CGRect _hideTableViewRect;
}

@property(nonatomic) __weak UIPanGestureRecognizer *panTable; // @synthesize panTable=_panTable;
@property(nonatomic) _Bool canTriggleLoading; // @synthesize canTriggleLoading=_canTriggleLoading;
@property(retain, nonatomic) UIButton *btnBottomAllCard; // @synthesize btnBottomAllCard=_btnBottomAllCard;
@property(retain, nonatomic) UIView *bottomCardsContainerView; // @synthesize bottomCardsContainerView=_bottomCardsContainerView;
@property(retain, nonatomic) GreenWalletContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGRect hideTableViewRect; // @synthesize hideTableViewRect=_hideTableViewRect;
@property(nonatomic) struct CGRect showTableViewRect; // @synthesize showTableViewRect=_showTableViewRect;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *bottomButton; // @synthesize bottomButton=_bottomButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *foldedCardList; // @synthesize foldedCardList=_foldedCardList;
@property(nonatomic) _Bool isOtherExpanded; // @synthesize isOtherExpanded=_isOtherExpanded;
@property(nonatomic) __weak UIView *associationView; // @synthesize associationView=_associationView;
@property(nonatomic) _Bool isHandlingGesture; // @synthesize isHandlingGesture=_isHandlingGesture;
@property(nonatomic) _Bool canShowAllCardBtn; // @synthesize canShowAllCardBtn=_canShowAllCardBtn;
@property(nonatomic) _Bool forceShowAllCardBtn; // @synthesize forceShowAllCardBtn=_forceShowAllCardBtn;
@property(nonatomic) __weak id <GreenWalletViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) GreenWalletFooterRefreshView *footerMore; // @synthesize footerMore=_footerMore;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (void)deleteCardAt:(id)arg1 cardInfo:(id)arg2;
- (void)managerCardAt:(id)arg1 cardInfo:(id)arg2;
- (id)screenShot:(id)arg1;
- (_Bool)isElderCard;
- (void)exchangeAnimation_default:(_Bool)arg1;
- (void)exchangeAnimation:(_Bool)arg1;
- (void)forceUnfoldWalletWithAnimation:(_Bool)arg1;
- (void)unfoldAnimationUseGesture:(_Bool)arg1;
- (void)foldAnimationUseGesture:(_Bool)arg1;
- (void)foldAnimation;
- (void)startUnfoldUseGesture:(_Bool)arg1;
- (void)actionExpand;
- (void)actionAllCard:(id)arg1;
- (void)actionBottom:(id)arg1;
- (void)endGesture:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)moveSubviewsBy:(struct CGPoint)arg1;
- (void)actionPan:(id)arg1;
- (void)endPanTableWithVelocity:(_Bool)arg1;
- (void)moveTableViewBy:(struct CGPoint)arg1;
- (void)actionPanTable:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(id)arg1;
- (id)rightButtons;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)forceLoadMore;
- (void)selectItemAtIndexPath:(id)arg1 useGesture:(_Bool)arg2;
- (void)selectItemAtIndexPath:(id)arg1;
- (void)reloadDataOfBottomView;
- (void)reloadDataOfContentView;
- (void)reloadDataOfTableView;
- (void)reloadListData;
- (void)reloadAllDataWithFold:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

