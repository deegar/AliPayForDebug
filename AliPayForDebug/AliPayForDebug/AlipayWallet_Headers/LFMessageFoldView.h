//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LFInfoSubviewProtocol-Protocol.h"

@class LFInfoView, LifeHomeResult, NSString, UIImageView, UILabel, UIViewController;

@interface LFMessageFoldView : UIView <LFInfoSubviewProtocol>
{
    UIView *_pannelView;
    _Bool _exposured;
    UILabel *_timeLabel;
    UIView *_moreMsgView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIImageView *_msgImgView;
    UIViewController *_controller;
    LFInfoView *_infoView;
    LifeHomeResult *_lifeInfo;
}

@property(nonatomic) _Bool exposured; // @synthesize exposured=_exposured;
@property(retain, nonatomic) LifeHomeResult *lifeInfo; // @synthesize lifeInfo=_lifeInfo;
@property(nonatomic) __weak LFInfoView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UIImageView *msgImgView; // @synthesize msgImgView=_msgImgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *moreMsgView; // @synthesize moreMsgView=_moreMsgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)updateWithHomeInfo:(id)arg1;
- (void)loadCacheDataFinished:(id)arg1;
- (id)displayInfo:(id)arg1;
- (void)refreshLifeInfo:(id)arg1;
- (void)gotoMsgList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lifeInfo:(id)arg2 infoView:(id)arg3 controller:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

