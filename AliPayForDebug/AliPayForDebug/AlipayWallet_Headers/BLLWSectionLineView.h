//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BLLWRenderProtocol-Protocol.h"

@class NSString, UIColor;

@interface BLLWSectionLineView : UIView <BLLWRenderProtocol>
{
    _Bool _needShowDashLine;
    UIColor *_lineColor;
    UIColor *_lineShadowColor;
}

@property(nonatomic) _Bool needShowDashLine; // @synthesize needShowDashLine=_needShowDashLine;
@property(retain, nonatomic) UIColor *lineShadowColor; // @synthesize lineShadowColor=_lineShadowColor;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
- (void).cxx_destruct;
- (void)setBLLWData:(id)arg1;
- (void)setBLLWLayout:(id)arg1;
- (void)setBLLWStyle:(id)arg1;
- (void)drawLine:(struct CGContext *)arg1 StartPoint:(struct CGPoint)arg2 EndPoint:(struct CGPoint)arg3 Color:(id)arg4 LineWidth:(double)arg5;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

