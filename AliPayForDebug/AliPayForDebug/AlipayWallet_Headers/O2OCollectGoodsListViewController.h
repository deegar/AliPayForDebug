//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OCollectBaseListViewController.h"

@class O2OCollectGoodsListModel, O2OCollectGoodsListViewDataSource, O2OCollectGoodsListViewDelegate, O2OCommonCancelCollectModel;

@interface O2OCollectGoodsListViewController : O2OCollectBaseListViewController
{
    O2OCollectGoodsListModel *_collectGoodsListModel;
    O2OCommonCancelCollectModel *_cancelCollectGoodsListModel;
    O2OCollectGoodsListViewDataSource *_ds;
    O2OCollectGoodsListViewDelegate *_dl;
}

@property(retain, nonatomic) O2OCollectGoodsListViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) O2OCollectGoodsListViewDataSource *ds; // @synthesize ds=_ds;
@property(retain, nonatomic) O2OCommonCancelCollectModel *cancelCollectGoodsListModel; // @synthesize cancelCollectGoodsListModel=_cancelCollectGoodsListModel;
@property(retain, nonatomic) O2OCollectGoodsListModel *collectGoodsListModel; // @synthesize collectGoodsListModel=_collectGoodsListModel;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)collectStatusChanged:(id)arg1;
- (void)viewDidLoad;

@end

