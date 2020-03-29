//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SUImageView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSShadow, NSString, UIColor, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface MFImageView : SUImageView <UIGestureRecognizerDelegate>
{
    _Bool _touchEnabled;
    double _cornerRadius;
    double _borderWidth;
    UIColor *_borderColor;
    NSShadow *_boxShadow;
    UITapGestureRecognizer *_singleTap;
    UILongPressGestureRecognizer *_longTap;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longTap; // @synthesize longTap=_longTap;
@property(retain, nonatomic) UITapGestureRecognizer *singleTap; // @synthesize singleTap=_singleTap;
@property(retain, nonatomic) NSShadow *boxShadow; // @synthesize boxShadow=_boxShadow;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) _Bool touchEnabled; // @synthesize touchEnabled=_touchEnabled;
- (void).cxx_destruct;
- (void)specialHandleing;
- (void)setImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)handleLongPressEvent:(id)arg1;
- (void)handleSingleFingerEvent:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)releaseTapGestureRecognizer;
- (void)setupTapGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

