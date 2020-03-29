//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, SUImageView, UIButton, UILabel;

@interface SCTransferCardView : UIView
{
    UILabel *_lblTitle;
    UILabel *_lblDesc;
    SUImageView *_imgViewAvatar;
    UIView *_viewLine;
    UILabel *_lblAppDesc;
    UIButton *_btnAction;
    NSDictionary *_chatDataSource;
}

+ (struct CGSize)sizeOfChatDataSource:(id)arg1 viewWidth:(double)arg2;
@property(copy, nonatomic) NSDictionary *chatDataSource; // @synthesize chatDataSource=_chatDataSource;
@property(retain, nonatomic) UIButton *btnAction; // @synthesize btnAction=_btnAction;
@property(retain, nonatomic) UILabel *lblAppDesc; // @synthesize lblAppDesc=_lblAppDesc;
@property(retain, nonatomic) UIView *viewLine; // @synthesize viewLine=_viewLine;
@property(retain, nonatomic) SUImageView *imgViewAvatar; // @synthesize imgViewAvatar=_imgViewAvatar;
@property(retain, nonatomic) UILabel *lblDesc; // @synthesize lblDesc=_lblDesc;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
- (void).cxx_destruct;
- (id)generateFinalActionText:(id)arg1;
- (void)setupSubviews;
- (void)btnActionTouchHandler;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)bindData:(id)arg1;

@end

