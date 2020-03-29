//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, OSPPayChannelModel, UIButton, UILabel, UITableView;
@protocol OSPChannelDlgDelegate;

@interface OSPPayChannelDlg : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIButton *_closeButton;
    id <OSPChannelDlgDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UITableView *_tableView;
    NSArray *_dataSource;
    OSPPayChannelModel *_currChannel;
}

@property(retain, nonatomic) OSPPayChannelModel *currChannel; // @synthesize currChannel=_currChannel;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <OSPChannelDlgDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)onClose;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setData:(id)arg1 title:(id)arg2 desc:(id)arg3;
- (id)createBorder:(double)arg1;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

