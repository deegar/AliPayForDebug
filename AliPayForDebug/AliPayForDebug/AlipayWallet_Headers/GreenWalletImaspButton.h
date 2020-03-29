//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ACCImaspData, UIButton, UIImageView, UILabel;

@interface GreenWalletImaspButton : UIView
{
    ACCImaspData *_data;
    UILabel *_titleLabel;
    UIImageView *_bubbleImageView;
    UILabel *_descLabel;
    UIImageView *_arrowImageView;
    UIButton *_actionButton;
    UIView *_separator;
    CDUnknownBlockType _clickCallBack;
}

@property(copy, nonatomic) CDUnknownBlockType clickCallBack; // @synthesize clickCallBack=_clickCallBack;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ACCImaspData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)click:(id)arg1;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2 clickCallBack:(CDUnknownBlockType)arg3;

@end

