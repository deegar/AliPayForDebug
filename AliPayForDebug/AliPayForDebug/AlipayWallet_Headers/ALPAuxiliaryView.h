//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPCardBlockView.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol ALPAuxiliaryViewDelegate;

@interface ALPAuxiliaryView : ALPCardBlockView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _blockExposure;
    NSArray *_itemList;
    id <ALPAuxiliaryViewDelegate> _delegate;
    NSString *_layoutType;
    UITableView *_tableView;
    NSString *_templateId;
    NSString *_passId;
    NSArray *_gridDataSource;
    double _zoomFactor;
}

@property(nonatomic) _Bool blockExposure; // @synthesize blockExposure=_blockExposure;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(retain, nonatomic) NSArray *gridDataSource; // @synthesize gridDataSource=_gridDataSource;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) __weak id <ALPAuxiliaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (id)pageParams;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)fetchAuxiliaryArrayResult:(id)arg1;
- (id)itemForIndexPath:(id)arg1;
- (void)layoutListAuxiliaryView:(id)arg1;
- (void)layoutGridAuxiliaryView:(id)arg1;
- (void)updateWithCardDetailModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

