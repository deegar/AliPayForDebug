//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavListViewController.h"

#import "APShareServiceCardControlDelegate-Protocol.h"

@class APBarButtonItem, APShareServiceCardControl, NSString;

@interface FavPresentListViewController : FavListViewController <APShareServiceCardControlDelegate>
{
    APBarButtonItem *w_leftBarBtnItem;
    NSString *_toUid;
    NSString *_userType;
    APShareServiceCardControl *_cardControl;
}

@property(retain, nonatomic) APShareServiceCardControl *cardControl; // @synthesize cardControl=_cardControl;
@property(copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;
- (void).cxx_destruct;
- (void)shareCommonFavItem:(id)arg1;
- (void)gotoDetailViewControllerLogic:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)leftBarBtnItem;
- (id)initWithToUid:(id)arg1 userType:(id)arg2 dataManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

