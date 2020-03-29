//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APShareServiceCardView.h"

@class APShareServiceImageView, UILabel;

@interface APShareServiceCardPhotoView : APShareServiceCardView
{
    APShareServiceImageView *_imageView;
    UILabel *_subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) APShareServiceImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)reloadImageView;
- (struct CGSize)imgSizeFromCardInfo:(id)arg1 withMaxSize:(struct CGSize)arg2 withMinSize:(struct CGSize)arg3;
- (struct CGSize)imgSizeFromCardInfo:(id)arg1;
- (struct CGSize)imgSubLabelSizeFromCardInfo:(id)arg1;
- (void)refreshImgSubLabel:(id)arg1 labelSize:(struct CGSize)arg2 yTop:(long long)arg3;
- (double)refreshCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

