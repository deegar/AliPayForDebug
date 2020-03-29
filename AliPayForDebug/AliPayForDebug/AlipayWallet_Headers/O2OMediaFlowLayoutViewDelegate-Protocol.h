//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class O2OMediaFlowLayoutView, UIImageView;

@protocol O2OMediaFlowLayoutViewDelegate <NSObject>
- (void)flowLayoutView:(O2OMediaFlowLayoutView *)arg1 configImageForImageView:(UIImageView *)arg2 adIndex:(unsigned long long)arg3;
- (long long)numberOfItemsInFlowLayoutView:(O2OMediaFlowLayoutView *)arg1;

@optional
- (void)flowLayoutView:(O2OMediaFlowLayoutView *)arg1 exchangeImageAtIndex:(long long)arg2 withOtherIndex:(long long)arg3;
- (void)flowLayoutView:(O2OMediaFlowLayoutView *)arg1 deleteImageAtIndex:(unsigned long long)arg2;
- (void)flowLayoutViewDidTapBackground:(O2OMediaFlowLayoutView *)arg1;
- (void)flowLayoutView:(O2OMediaFlowLayoutView *)arg1 didTapImageView:(UIImageView *)arg2 atIndex:(unsigned long long)arg3;
@end

