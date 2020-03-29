//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockDetailBaseCell.h"

@class AFWSDInfoAttribView, AFWStockPlateInfoHeader, TFRBaseCellHeaderView, UILabel;

@interface AFWStockPlateInfoCell : AFWStockDetailBaseCell
{
    TFRBaseCellHeaderView *_headerView;
    AFWStockPlateInfoHeader *_header;
    UILabel *_changeRateLabel;
    AFWSDInfoAttribView *_upLbl;
    AFWSDInfoAttribView *_downLbl;
    AFWSDInfoAttribView *_drawLbl;
}

@property(retain, nonatomic) AFWSDInfoAttribView *drawLbl; // @synthesize drawLbl=_drawLbl;
@property(retain, nonatomic) AFWSDInfoAttribView *downLbl; // @synthesize downLbl=_downLbl;
@property(retain, nonatomic) AFWSDInfoAttribView *upLbl; // @synthesize upLbl=_upLbl;
@property(retain, nonatomic) UILabel *changeRateLabel; // @synthesize changeRateLabel=_changeRateLabel;
@property(retain, nonatomic) AFWStockPlateInfoHeader *header; // @synthesize header=_header;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
- (id)headerView;
- (id)jobName;
- (id)schedulerKey;
- (void)stopUpdateSchedule;
- (void)startUpdateSchedule;
- (void)startUpdateScheduleIfNeeded;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)updateUI;
- (void)setupViews;
- (id)boardInfo;
- (void)cellEndDisplay;
- (void)cellWillDisplay;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)destory;
- (void)dealloc;

@end

