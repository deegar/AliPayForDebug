//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, REButton, REThemePreviewViewLayout, UIButton, UICollectionView, UILabel, giftprodGiftHbTemplateViewInfo;

@interface REThemePreviewView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    REThemePreviewViewLayout *_layout;
    UICollectionView *_collectionView;
    UIView *_contentView;
    UIView *_markView;
    UILabel *_navTitleLabel;
    giftprodGiftHbTemplateViewInfo *_curSelectTemplateModel;
    REButton *_actionButton;
    UIButton *_backButton;
    NSString *_interRemark;
    NSString *_interMoney;
}

@property(retain, nonatomic) NSString *interMoney; // @synthesize interMoney=_interMoney;
@property(retain, nonatomic) NSString *interRemark; // @synthesize interRemark=_interRemark;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) REButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) giftprodGiftHbTemplateViewInfo *curSelectTemplateModel; // @synthesize curSelectTemplateModel=_curSelectTemplateModel;
@property(retain, nonatomic) UILabel *navTitleLabel; // @synthesize navTitleLabel=_navTitleLabel;
@property(retain, nonatomic) UIView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) REThemePreviewViewLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)displayWithTemplateModel:(id)arg1 withMoney:(id)arg2 withRemark:(id)arg3;
- (void)didTappedActionButton;
- (void)didTappedBackButton;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

