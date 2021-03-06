//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol CCardResendRemindViewDelegate;

@interface CCardResendRemindView : UIView
{
    id <CCardResendRemindViewDelegate> _delegate;
    UIImageView *_flagView;
    UILabel *_textView;
    UIButton *_retryButton;
    UIButton *_cleanButton;
    UIView *_bottomLine;
    UIView *_topLine;
    NSString *_strText;
    unsigned long long _bizType;
}

@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *strText; // @synthesize strText=_strText;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *cleanButton; // @synthesize cleanButton=_cleanButton;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *flagView; // @synthesize flagView=_flagView;
@property(nonatomic) __weak id <CCardResendRemindViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cleanButtonAction:(id)arg1;
- (void)retryButtonAction:(id)arg1;
- (void)languageDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andBizType:(unsigned long long)arg2 andText:(id)arg3;

@end

