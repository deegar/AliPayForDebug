//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PPChatMessage, PPChatMessageBaseView, UILongPressGestureRecognizer;
@protocol PPChatMessageCellDelegate, PPChatMessageDataSource;

@interface PPChatMessageCell : UITableViewCell
{
    _Bool _lockHighlight;
    _Bool _isGestureAdd;
    PPChatMessage *_message;
    id <PPChatMessageCellDelegate> _cellDelegate;
    id <PPChatMessageDataSource> _dataSource;
    UILongPressGestureRecognizer *_gr;
    PPChatMessageBaseView *_bgView;
    struct CGRect _menuRect;
}

+ (double)cellHeightForData:(id)arg1 ofMessage:(id)arg2;
@property(nonatomic) _Bool isGestureAdd; // @synthesize isGestureAdd=_isGestureAdd;
@property(nonatomic) struct CGRect menuRect; // @synthesize menuRect=_menuRect;
@property(nonatomic) _Bool lockHighlight; // @synthesize lockHighlight=_lockHighlight;
@property(retain, nonatomic) PPChatMessageBaseView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UILongPressGestureRecognizer *gr; // @synthesize gr=_gr;
@property(nonatomic) __weak id <PPChatMessageDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PPChatMessageCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) PPChatMessage *message; // @synthesize message=_message;
- (void)onLongPress:(id)arg1;
- (void)setHighlightedFinally:(_Bool)arg1;
- (void)prepareForReuse;
- (void)forceHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBaseColor:(id)arg1;
- (void)dealloc;
- (void)loadData:(id)arg1;
- (void)layoutSubviews;
- (id)getPPCellContentView;
- (void)setContentViewProperty;
- (void)loadContentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

