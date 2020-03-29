//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, TTTAttributedLabel, UIImageView, UILabel, UIView;

@interface PEPayResultCell : UITableViewCell
{
    long long _payResult;
    NSString *_payMemo;
    UIView *_containerView;
    UIImageView *_zfbLogoImgView;
    UILabel *_payResultLabel;
    TTTAttributedLabel *_memoLabel;
    UIView *_btmLineView;
}

+ (double)cellHeight:(long long)arg1;
@property(retain, nonatomic) UIView *btmLineView; // @synthesize btmLineView=_btmLineView;
@property(retain, nonatomic) TTTAttributedLabel *memoLabel; // @synthesize memoLabel=_memoLabel;
@property(retain, nonatomic) UILabel *payResultLabel; // @synthesize payResultLabel=_payResultLabel;
@property(retain, nonatomic) UIImageView *zfbLogoImgView; // @synthesize zfbLogoImgView=_zfbLogoImgView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSString *payMemo; // @synthesize payMemo=_payMemo;
@property(nonatomic) long long payResult; // @synthesize payResult=_payResult;
- (void).cxx_destruct;
- (double)buildFailCell;
- (double)buildSuccessCell;
- (void)buildCell;
- (void)reloadWithpayResult:(long long)arg1 memo:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

