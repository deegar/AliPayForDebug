//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavBaseCellView.h"

@class MFAttributeLabel, MOBILECHATFAVCollectionVO, NSLayoutConstraint, UIImageView;

@interface FavTextCellView : FavBaseCellView
{
    MFAttributeLabel *_textContentLabel;
    UIImageView *_textDecorateImageView;
    NSLayoutConstraint *_textContentLabelHeight;
    MOBILECHATFAVCollectionVO *_collectionVO;
}

+ (double)cellHeight:(id)arg1;
+ (id)favEmojiLabel;
@property(retain, nonatomic) MOBILECHATFAVCollectionVO *collectionVO; // @synthesize collectionVO=_collectionVO;
@property(retain, nonatomic) NSLayoutConstraint *textContentLabelHeight; // @synthesize textContentLabelHeight=_textContentLabelHeight;
@property(retain, nonatomic) UIImageView *textDecorateImageView; // @synthesize textDecorateImageView=_textDecorateImageView;
@property(retain, nonatomic) MFAttributeLabel *textContentLabel; // @synthesize textContentLabel=_textContentLabel;
- (void).cxx_destruct;
- (id)customContentAccessibilityLabel;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buildCell:(id)arg1;
- (void)buildConstraint;
- (void)buildSubView;

@end

