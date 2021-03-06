//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PETotalCollectMessage, TTTAttributedLabel, UILabel;

@interface PECollectTotalHeadView : UIView
{
    _Bool _initHead;
    PETotalCollectMessage *_totalCollect;
    UIView *_contentView;
    UILabel *_totalIndicatorLabel;
    TTTAttributedLabel *_totalAmountLabel;
    UIView *_topLine;
}

+ (double)headViewHeight;
+ (id)totalHeadViewWithCollectMessage:(id)arg1;
@property(nonatomic) _Bool initHead; // @synthesize initHead=_initHead;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) TTTAttributedLabel *totalAmountLabel; // @synthesize totalAmountLabel=_totalAmountLabel;
@property(retain, nonatomic) UILabel *totalIndicatorLabel; // @synthesize totalIndicatorLabel=_totalIndicatorLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PETotalCollectMessage *totalCollect; // @synthesize totalCollect=_totalCollect;
- (void).cxx_destruct;
- (void)buildTopLine;
- (void)runAnimation;
- (void)updateAmount;
- (void)buildHeadView;
- (void)didMoveToSuperview;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

