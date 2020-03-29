//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCWidgetView.h"

@class HCCountDownView, MFImageView;

@interface HCCountDownBarWidgetView : CCWidgetView
{
    MFImageView *_leftImageView;
    HCCountDownView *_countDownView;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
+ (struct CGSize)sizeForIconWithData:(id)arg1;
@property(retain, nonatomic) HCCountDownView *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) MFImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

