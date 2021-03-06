//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FHTemplateStockInfoDataModel, UILabel;

@interface FHTemplateStockInfoView : UIView
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_priceChangeAmountLabel;
    UILabel *_priceChangePercentLabel;
    UILabel *_currentTradingStatusNoticeLabel;
    FHTemplateStockInfoDataModel *_currentData;
}

@property(retain, nonatomic) FHTemplateStockInfoDataModel *currentData; // @synthesize currentData=_currentData;
@property(retain, nonatomic) UILabel *currentTradingStatusNoticeLabel; // @synthesize currentTradingStatusNoticeLabel=_currentTradingStatusNoticeLabel;
@property(retain, nonatomic) UILabel *priceChangePercentLabel; // @synthesize priceChangePercentLabel=_priceChangePercentLabel;
@property(retain, nonatomic) UILabel *priceChangeAmountLabel; // @synthesize priceChangeAmountLabel=_priceChangeAmountLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutFitWithoutAmountChange;
- (void)layoutFit;
- (void)layoutSubviews;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

