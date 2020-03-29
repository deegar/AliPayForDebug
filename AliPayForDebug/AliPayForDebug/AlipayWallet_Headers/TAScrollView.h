//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBComponent.h"

@class CALayer, UIScrollView;

@interface TAScrollView : NBComponent
{
    UIScrollView *_scrollView;
    CALayer *_borderLayer;
}

@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)contentView;
- (id)transforColorStrToArgbWithColorStr:(id)arg1;
- (void)componentDataDidChangeWithData:(id)arg1;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;

@end

