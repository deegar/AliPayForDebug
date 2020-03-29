//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FeedbackReportData, NSMutableDictionary, UIButton, UIImageView;

@interface ASFeedBackView : UIView
{
    CDUnknownBlockType _clickCallBack;
    NSMutableDictionary *_feedBackInfo;
    UIImageView *_screenImageView;
    UIButton *_feedBackButton;
    FeedbackReportData *_msg;
}

@property(retain, nonatomic) FeedbackReportData *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) UIButton *feedBackButton; // @synthesize feedBackButton=_feedBackButton;
@property(retain, nonatomic) UIImageView *screenImageView; // @synthesize screenImageView=_screenImageView;
@property(retain, nonatomic) NSMutableDictionary *feedBackInfo; // @synthesize feedBackInfo=_feedBackInfo;
@property(copy, nonatomic) CDUnknownBlockType clickCallBack; // @synthesize clickCallBack=_clickCallBack;
- (void).cxx_destruct;
- (id)sourceid;
- (id)getCurrentSpmID;
- (void)getFeedBackMsg;
- (void)submitFeedBack;
- (void)initData;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithParams:(id)arg1 andOnClickBlock:(CDUnknownBlockType)arg2;

@end

