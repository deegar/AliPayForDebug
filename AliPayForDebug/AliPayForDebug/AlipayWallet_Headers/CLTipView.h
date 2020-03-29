//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLClickView.h"

@class NSString, UILabel, UIView;
@protocol CLTipViewDelegate;

@interface CLTipView : CLClickView
{
    NSString *_tipText;
    UILabel *_textLabel;
    UIView *_badgeView;
    id <CLTipViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CLTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidClicked;
- (void)setTipText:(id)arg1 forWidth:(double)arg2;
- (void)layoutSubviews;
- (id)init;

@end

