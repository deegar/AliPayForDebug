//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ACCResultMainServiceCombinedModel, NSString, UIButton, UILabel;

@interface ACCResultMainStationLineView : UIView
{
    CDUnknownBlockType _blockActionAll;
    ACCResultMainServiceCombinedModel *_data;
    NSString *_title;
    UILabel *_labelTitle;
    UIButton *_btnMore;
}

@property(retain, nonatomic) UIButton *btnMore; // @synthesize btnMore=_btnMore;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ACCResultMainServiceCombinedModel *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType blockActionAll; // @synthesize blockActionAll=_blockActionAll;
- (void).cxx_destruct;
- (void)actionAll:(id)arg1;
- (void)createLines;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1 linesInfo:(id)arg2 withTitlt:(id)arg3;

@end
