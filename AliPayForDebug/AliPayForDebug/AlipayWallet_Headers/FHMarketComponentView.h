//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface FHMarketComponentView : UIView
{
    UILabel *_titleLabel;
    UILabel *_suTitleLabel;
    UIImageView *_arrowImageView;
    UILabel *_arrowLabel;
    UIView *_currentServiceIconView;
    UILabel *_currentServiceLabel;
    UIView *_replaceServiceIconView;
    UILabel *_replaceServiceLabel;
    NSString *_serviceIcon;
    NSString *_replaceServiceIcon;
    NSString *_serviceName;
    NSString *_replaceServiceName;
}

@property(copy, nonatomic) NSString *replaceServiceName; // @synthesize replaceServiceName=_replaceServiceName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) NSString *replaceServiceIcon; // @synthesize replaceServiceIcon=_replaceServiceIcon;
@property(copy, nonatomic) NSString *serviceIcon; // @synthesize serviceIcon=_serviceIcon;
@property(retain, nonatomic) UILabel *replaceServiceLabel; // @synthesize replaceServiceLabel=_replaceServiceLabel;
@property(retain, nonatomic) UIView *replaceServiceIconView; // @synthesize replaceServiceIconView=_replaceServiceIconView;
@property(retain, nonatomic) UILabel *currentServiceLabel; // @synthesize currentServiceLabel=_currentServiceLabel;
@property(retain, nonatomic) UIView *currentServiceIconView; // @synthesize currentServiceIconView=_currentServiceIconView;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *suTitleLabel; // @synthesize suTitleLabel=_suTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)appViewWithIcon:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithServiceIcon:(id)arg1 serviceName:(id)arg2 replaceServiceIcon:(id)arg3 replaceServiceName:(id)arg4;

@end

