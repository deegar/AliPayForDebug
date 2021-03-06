//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactCombinedMultiSelectViewController.h"

@class AUNetErrorView, NSArray, NSMutableDictionary, NSString, UILabel, UIView;

@interface APRelationTagMultiSelectViewController : APContactCombinedMultiSelectViewController
{
    NSString *_queryID;
    AUNetErrorView *_netErrorView;
    UIView *_emptyPageLoadingView;
    UILabel *_emptyErrorTips;
    NSString *_errorTipsText;
    NSArray *_relationInfoArr;
    NSMutableDictionary *_relationListDict;
    NSString *_relationKey;
    NSArray *_relationFriend;
}

@property(retain, nonatomic) NSArray *relationFriend; // @synthesize relationFriend=_relationFriend;
@property(retain, nonatomic) NSString *relationKey; // @synthesize relationKey=_relationKey;
@property(retain, nonatomic) NSMutableDictionary *relationListDict; // @synthesize relationListDict=_relationListDict;
@property(retain, nonatomic) NSArray *relationInfoArr; // @synthesize relationInfoArr=_relationInfoArr;
@property(retain, nonatomic) NSString *errorTipsText; // @synthesize errorTipsText=_errorTipsText;
@property(retain, nonatomic) UILabel *emptyErrorTips; // @synthesize emptyErrorTips=_emptyErrorTips;
@property(retain, nonatomic) UIView *emptyPageLoadingView; // @synthesize emptyPageLoadingView=_emptyPageLoadingView;
@property(retain, nonatomic) AUNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) NSString *queryID; // @synthesize queryID=_queryID;
- (void).cxx_destruct;
- (id)secondaryDataTitlesInCommonView:(id)arg1;
- (id)secondaryDataInCommonView:(id)arg1;
- (void)selectionDidChangeInCommonView:(id)arg1;
- (void)commonView:(id)arg1 configCell:(id)arg2 item:(id)arg3;
- (id)cellClassNameInCommonView:(id)arg1 item:(id)arg2;
- (id)mainDataIndexCharInCommonView:(id)arg1;
- (id)mainDataInCommonView:(id)arg1;
- (void)emptyPageShow:(_Bool)arg1;
- (void)pressedNetErrorView;
- (void)mergeUserTagInfoWithContactDict:(id)arg1;
- (void)fetchTlouRelationUserListAsync;
- (void)contactCacheUpdate:(id)arg1;
- (void)handleContactDataReslutWithResponseVO:(id)arg1;
- (void)didFinishLoadContact;
- (void)didStartLoadContact;
- (void)reloadContacts;
- (void)loadContact;
- (void)viewDidLoad;
- (void)setupSelectView;
- (void)adjustFrames;
- (void)configWithDict:(id)arg1;

@end

