//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BLListFilterView, UITapGestureRecognizer;
@protocol BLFilterFloatViewDelegate;

@interface BLFilterFloatView : UIView
{
    id <BLFilterFloatViewDelegate> _delegate;
    UIView *_contentView;
    UIView *_mask;
    BLListFilterView *_targetView;
    UITapGestureRecognizer *_tapMask;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapMask; // @synthesize tapMask=_tapMask;
@property(nonatomic) __weak BLListFilterView *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) UIView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <BLFilterFloatViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateOriginY;
- (double)getOriginY;
- (id)initWithTargetView:(id)arg1;

@end

