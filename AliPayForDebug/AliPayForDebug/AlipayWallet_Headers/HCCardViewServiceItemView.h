//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, SUImageView, UILabel, UITapGestureRecognizer;
@protocol HCCardViewServiceItemViewDelegate;

@interface HCCardViewServiceItemView : UIView
{
    UILabel *_titleLab;
    SUImageView *_imageView;
    NSDictionary *_dict;
    id <HCCardViewServiceItemViewDelegate> _delegate;
    UITapGestureRecognizer *_tabGesture;
}

+ (double)serviceItemHeightWithDict:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *tabGesture; // @synthesize tabGesture=_tabGesture;
@property(nonatomic) __weak id <HCCardViewServiceItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) SUImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)layout;
- (void)loadWithDict:(id)arg1 withBizType:(id)arg2;
- (void)tapGestureAction:(id)arg1;
- (void)addTabGesture;
- (id)initWithFrame:(struct CGRect)arg1;

@end

