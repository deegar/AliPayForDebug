//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BEEResizeControlDelegate-Protocol.h"

@class BEEResizeControl, NSString;
@protocol BEECropRectViewDelegate;

@interface BEECropRectView : UIView <BEEResizeControlDelegate>
{
    _Bool _showsGridMajor;
    _Bool _showsGridMinor;
    id <BEECropRectViewDelegate> _delegate;
    BEEResizeControl *_topLeftCornerView;
    BEEResizeControl *_topRightCornerView;
    BEEResizeControl *_bottomLeftCornerView;
    BEEResizeControl *_bottomRightCornerView;
    BEEResizeControl *_topEdgeView;
    BEEResizeControl *_leftEdgeView;
    BEEResizeControl *_bottomEdgeView;
    BEEResizeControl *_rightEdgeView;
    struct CGRect _cropRectMax;
    struct CGRect _initialRect;
}

@property(nonatomic) struct CGRect initialRect; // @synthesize initialRect=_initialRect;
@property(retain, nonatomic) BEEResizeControl *rightEdgeView; // @synthesize rightEdgeView=_rightEdgeView;
@property(retain, nonatomic) BEEResizeControl *bottomEdgeView; // @synthesize bottomEdgeView=_bottomEdgeView;
@property(retain, nonatomic) BEEResizeControl *leftEdgeView; // @synthesize leftEdgeView=_leftEdgeView;
@property(retain, nonatomic) BEEResizeControl *topEdgeView; // @synthesize topEdgeView=_topEdgeView;
@property(retain, nonatomic) BEEResizeControl *bottomRightCornerView; // @synthesize bottomRightCornerView=_bottomRightCornerView;
@property(retain, nonatomic) BEEResizeControl *bottomLeftCornerView; // @synthesize bottomLeftCornerView=_bottomLeftCornerView;
@property(retain, nonatomic) BEEResizeControl *topRightCornerView; // @synthesize topRightCornerView=_topRightCornerView;
@property(retain, nonatomic) BEEResizeControl *topLeftCornerView; // @synthesize topLeftCornerView=_topLeftCornerView;
@property(nonatomic) struct CGRect cropRectMax; // @synthesize cropRectMax=_cropRectMax;
@property(nonatomic) _Bool showsGridMinor; // @synthesize showsGridMinor=_showsGridMinor;
@property(nonatomic) _Bool showsGridMajor; // @synthesize showsGridMajor=_showsGridMajor;
@property(nonatomic) __weak id <BEECropRectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)cropRectMakeWithResizeControlView:(id)arg1;
- (void)resizeControlViewDidEndResizing:(id)arg1;
- (void)resizeControlViewDidResize:(id)arg1;
- (void)resizeControlViewDidBeginResizing:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

