//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface FilterCell : UIView
{
    NSString *_filterKey;
    NSString *_title;
    UIImageView *_iconView;
    UILabel *_filterName;
    NSString *_filterId;
}

@property(retain, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(retain, nonatomic) UILabel *filterName; // @synthesize filterName=_filterName;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *filterKey; // @synthesize filterKey=_filterKey;
- (void).cxx_destruct;
- (void)removeFilterNameShadow;
- (void)addFilterNameShadow;
- (void)configFilterNameShadow;
- (void)setupCell:(double)arg1;
- (id)initWithCellWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

