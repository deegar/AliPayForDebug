//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AFWStockSignalView, NSMutableArray, UIView, finscbffTendencyAdvancedObjPB;

@interface AFWStockTendencyContentCell : UITableViewCell
{
    _Bool _isBigStyle;
    finscbffTendencyAdvancedObjPB *_model;
    NSMutableArray *_productViewList;
    AFWStockSignalView *_singalView;
    UIView *_line;
}

+ (double)cellHeight:(id)arg1 isBigStyle:(_Bool)arg2;
@property(nonatomic) _Bool isBigStyle; // @synthesize isBigStyle=_isBigStyle;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) AFWStockSignalView *singalView; // @synthesize singalView=_singalView;
@property(retain, nonatomic) NSMutableArray *productViewList; // @synthesize productViewList=_productViewList;
@property(readonly, nonatomic) finscbffTendencyAdvancedObjPB *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setupView;
- (void)setModel:(id)arg1 BigStyle:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

