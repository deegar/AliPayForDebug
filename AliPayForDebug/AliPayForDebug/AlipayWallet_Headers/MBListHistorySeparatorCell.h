//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBListBaseCell.h"

@class UILabel, UIView;

@interface MBListHistorySeparatorCell : MBListBaseCell
{
    UIView *_subView;
    UILabel *_contentLabel;
    UIView *_lineView;
}

+ (id)simulationTemplateId;
+ (double)cellHeightWithData:(id)arg1;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *subView; // @synthesize subView=_subView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 delegate:(id)arg3;

@end

