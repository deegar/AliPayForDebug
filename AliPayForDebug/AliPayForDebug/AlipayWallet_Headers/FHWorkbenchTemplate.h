//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHBaseTemplate.h"

#import "FHTemplateClickDelegate-Protocol.h"
#import "FHWealthBenchManagerDelegate-Protocol.h"

@class FHAssetsHeaderMarkModel, FHCellSerperatorModel, FHCellWorkbenchModel, FHWealthBenchManager, NSString, UITableView;

@interface FHWorkbenchTemplate : FHBaseTemplate <FHTemplateClickDelegate, FHWealthBenchManagerDelegate>
{
    NSString *_obFloor;
    FHWealthBenchManager *_wealthBenchManager;
    UITableView *_tableView;
    FHCellWorkbenchModel *_workbenchModel;
    NSString *_cardTypeId;
    NSString *_cardContainerScene;
    FHAssetsHeaderMarkModel *_mark;
    FHCellSerperatorModel *_serperatorModel;
}

@property(retain, nonatomic) FHCellSerperatorModel *serperatorModel; // @synthesize serperatorModel=_serperatorModel;
@property(retain, nonatomic) FHAssetsHeaderMarkModel *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSString *cardContainerScene; // @synthesize cardContainerScene=_cardContainerScene;
@property(retain, nonatomic) NSString *cardTypeId; // @synthesize cardTypeId=_cardTypeId;
@property(retain, nonatomic) FHCellWorkbenchModel *workbenchModel; // @synthesize workbenchModel=_workbenchModel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FHWealthBenchManager *wealthBenchManager; // @synthesize wealthBenchManager=_wealthBenchManager;
@property(retain, nonatomic) NSString *obFloor; // @synthesize obFloor=_obFloor;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)tableViewCellEvaluateExposure:(id)arg1;
- (void)firstCardInSecondScreenDidExposured:(id)arg1;
- (void)contentView:(id)arg1 didClickedFollowAction:(id)arg2 log:(id)arg3 extInfo:(id)arg4;
- (void)handleRPCWithContainer:(id)arg1 params:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)wealthBenchReadyWithContainers:(id)arg1;
- (void)handleRecommandCard:(id)arg1;
- (id)cellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForTemplateItemAtIndex:(unsigned long long)arg1;
- (_Bool)markDataIsValid:(id)arg1;
- (void)updateMark:(id)arg1;
- (long long)numberOfItems;
- (void)setScrollTop:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 card:(id)arg2 obFloor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

