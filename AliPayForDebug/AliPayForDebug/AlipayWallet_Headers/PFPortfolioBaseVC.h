//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BEEBaseController.h"

@class NSMutableArray, NSMutableSet, PFTable;

@interface PFPortfolioBaseVC : BEEBaseController
{
    _Bool _isOnScreen;
    CDUnknownBlockType _pushDataBlock;
    PFTable *_showingTable;
    NSMutableSet *_exposureDB;
    NSMutableArray *_notificationObservers;
    struct CGPoint _touchPoint;
}

@property(retain, nonatomic) NSMutableArray *notificationObservers; // @synthesize notificationObservers=_notificationObservers;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen=_isOnScreen;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(readonly, nonatomic) NSMutableSet *exposureDB; // @synthesize exposureDB=_exposureDB;
@property(readonly, nonatomic) PFTable *showingTable; // @synthesize showingTable=_showingTable;
@property(copy, nonatomic) CDUnknownBlockType pushDataBlock; // @synthesize pushDataBlock=_pushDataBlock;
- (void).cxx_destruct;
- (void)observeNotificationForName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)doExposureLog:(id)arg1 logAction:(CDUnknownBlockType)arg2;
- (void)onShowMenu:(id)arg1;
- (id)getLongTouchStockModel;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (long long)getIndexForLongTouchRow;
- (void)suspendTask;
- (void)updateData;
- (void)updateLayout;
- (void)setup;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

@end

