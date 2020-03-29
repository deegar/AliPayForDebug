//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBasicInfoView.h"

@class NSArray, SPActionButton, SPBasicInfoRowsModel, UIView;

@interface SPSelfBasicInfoView : SPBasicInfoView
{
    SPActionButton *_addOrEditBtn;
    SPActionButton *_accountDetailBtn;
    UIView *_accountDetailSectionView;
    SPBasicInfoRowsModel *_rowsModel2;
    NSArray *_rows_View2;
    NSArray *_rows_Data2;
    UIView *_topLine;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) NSArray *rows_Data2; // @synthesize rows_Data2=_rows_Data2;
@property(retain, nonatomic) NSArray *rows_View2; // @synthesize rows_View2=_rows_View2;
@property(retain, nonatomic) SPBasicInfoRowsModel *rowsModel2; // @synthesize rowsModel2=_rowsModel2;
@property(retain, nonatomic) UIView *accountDetailSectionView; // @synthesize accountDetailSectionView=_accountDetailSectionView;
@property(retain, nonatomic) SPActionButton *accountDetailBtn; // @synthesize accountDetailBtn=_accountDetailBtn;
@property(retain, nonatomic) SPActionButton *addOrEditBtn; // @synthesize addOrEditBtn=_addOrEditBtn;
- (void).cxx_destruct;
- (_Bool)showAddOrShowEditWith:(id)arg1;
- (void)onAddOrEdit:(id)arg1;
- (void)updateWithData:(id)arg1 isCachedData:(_Bool)arg2;
- (void)updateSubviews;
- (void)layoutSubviews;
- (id)init;

@end

