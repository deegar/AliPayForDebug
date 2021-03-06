//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class AUScrollView, CDPSpaceView, NSArray, NSSet, NSString, TFHomeHeaderModel;
@protocol TFHomeHeaderViewDelegate;

@interface TFHomeHeaderView : UIView <UIScrollViewDelegate>
{
    _Bool _recommendItemContainerHasScrolled;
    id <TFHomeHeaderViewDelegate> _delegate;
    CDPSpaceView *_bannerView;
    UIView *_colorBgView;
    UIView *_shadowBackgroundView;
    UIView *_contentView;
    NSArray *_topItemViewList;
    UIView *_separatorLine;
    NSArray *_recommendItemViewList;
    AUScrollView *_recommendItemContainer;
    unsigned long long _type;
    TFHomeHeaderModel *_data;
    NSSet *_exposureCdpIdSet;
}

+ (id)simpleHeaderView;
+ (id)defaultHeaderView;
@property(nonatomic) _Bool recommendItemContainerHasScrolled; // @synthesize recommendItemContainerHasScrolled=_recommendItemContainerHasScrolled;
@property(retain, nonatomic) NSSet *exposureCdpIdSet; // @synthesize exposureCdpIdSet=_exposureCdpIdSet;
@property(retain, nonatomic) TFHomeHeaderModel *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) AUScrollView *recommendItemContainer; // @synthesize recommendItemContainer=_recommendItemContainer;
@property(retain, nonatomic) NSArray *recommendItemViewList; // @synthesize recommendItemViewList=_recommendItemViewList;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) NSArray *topItemViewList; // @synthesize topItemViewList=_topItemViewList;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *shadowBackgroundView; // @synthesize shadowBackgroundView=_shadowBackgroundView;
@property(retain, nonatomic) UIView *colorBgView; // @synthesize colorBgView=_colorBgView;
@property(retain, nonatomic) CDPSpaceView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <TFHomeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)handleCdpExposure;
- (void)layoutRecommedItemViewList;
- (void)didClickHeaderItem:(id)arg1;
- (void)updateData:(id)arg1;
- (void)updateHeight;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

