//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, SUImageView, UILabel;

@interface HCCardKoubeiElemeRetailItemView : UIView
{
    NSDictionary *_itemData;
    SUImageView *_mainImageView;
    UILabel *_itemNameLabel;
    UILabel *_itemDescLabel;
}

@property(retain, nonatomic) UILabel *itemDescLabel; // @synthesize itemDescLabel=_itemDescLabel;
@property(retain, nonatomic) UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(retain, nonatomic) SUImageView *mainImageView; // @synthesize mainImageView=_mainImageView;
@property(retain, nonatomic) NSDictionary *itemData; // @synthesize itemData=_itemData;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

