//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AUButton, MASConstraint, UIImageView, UILabel, UIView;

@interface TFToCardConfirmTableViewCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_amountLabel;
    UILabel *_feeLabel;
    UILabel *_bankLabel;
    UIView *_bankInfoView;
    UIImageView *_bankIcon;
    AUButton *_leadingBtn;
    MASConstraint *_leadingBtnHeightConstraint;
}

@property(retain, nonatomic) MASConstraint *leadingBtnHeightConstraint; // @synthesize leadingBtnHeightConstraint=_leadingBtnHeightConstraint;
@property(retain, nonatomic) AUButton *leadingBtn; // @synthesize leadingBtn=_leadingBtn;
@property(retain, nonatomic) UIImageView *bankIcon; // @synthesize bankIcon=_bankIcon;
@property(retain, nonatomic) UIView *bankInfoView; // @synthesize bankInfoView=_bankInfoView;
@property(retain, nonatomic) UILabel *bankLabel; // @synthesize bankLabel=_bankLabel;
@property(retain, nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property(retain, nonatomic) UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)reloadData:(id)arg1 leadingInfoTitle:(id)arg2;
- (void)reloadData:(id)arg1;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

