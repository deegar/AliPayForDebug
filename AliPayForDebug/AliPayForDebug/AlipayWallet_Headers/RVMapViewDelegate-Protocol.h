//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, UIView;
@protocol RVMapViewProtocol;

@protocol RVMapViewDelegate <NSObject>

@optional
- (void)rvMapViewDidFailLoadingMap:(UIView<RVMapViewProtocol> *)arg1 withError:(NSError *)arg2;
- (void)rvMapInitComplete:(UIView<RVMapViewProtocol> *)arg1;
@end

