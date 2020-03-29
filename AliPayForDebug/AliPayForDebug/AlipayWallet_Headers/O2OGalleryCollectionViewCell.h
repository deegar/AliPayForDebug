//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class O2OGalleryCellTagLabel, UIImageView, UILabel, UIView;

@interface O2OGalleryCollectionViewCell : UICollectionViewCell
{
    UIImageView *_imageView;
    O2OGalleryCellTagLabel *_tagLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UIView *_dimmingView;
    struct CGRect _imageFrame;
}

@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) O2OGalleryCellTagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct CGRect imageFrame; // @synthesize imageFrame=_imageFrame;
- (void).cxx_destruct;
- (void)configure:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

