//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WKFlyBirdCellProtocol-Protocol.h"

@class FBDocument, NSString, UIImageView, UILabel, UIView, WKTableCellModel;

@interface APVAAnswerCell : UITableViewCell <WKFlyBirdCellProtocol>
{
    UIView *_cellView;
    UILabel *_answerLabel;
    UIImageView *_bubbleView;
}

+ (double)cellHeight:(id)arg1 viewBuilder:(id)arg2;
@property(retain, nonatomic) UIImageView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *answerLabel; // @synthesize answerLabel=_answerLabel;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (void)layoutAnswerSubviews:(id)arg1;
- (id)accessibilityLabel;
- (void)buildCell:(id)arg1 viewBuilder:(id)arg2;
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

