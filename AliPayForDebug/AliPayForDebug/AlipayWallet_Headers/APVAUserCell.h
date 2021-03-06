//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WKFlyBirdCellProtocol-Protocol.h"

@class FBDocument, NSString, UIImageView, UILabel, UIView, WKTableCellModel;

@interface APVAUserCell : UITableViewCell <WKFlyBirdCellProtocol>
{
    UIView *_cellContentView;
    UILabel *_titleLabel;
    UILabel *_midDescLabel;
    UILabel *_descLabel;
    UIImageView *_iconImageView;
    UIImageView *_genderImageView;
    NSString *_schema;
}

+ (double)cellHeight:(id)arg1 viewBuilder:(id)arg2;
@property(retain, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *midDescLabel; // @synthesize midDescLabel=_midDescLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *cellContentView; // @synthesize cellContentView=_cellContentView;
- (void).cxx_destruct;
- (void)buildCell:(id)arg1 viewBuilder:(id)arg2;
- (void)layoutWithDescText:(_Bool)arg1;
- (void)customInit;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) WKTableCellModel *cellModel;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) FBDocument *document;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

