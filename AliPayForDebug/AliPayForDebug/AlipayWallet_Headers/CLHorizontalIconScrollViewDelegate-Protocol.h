//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLHorizontalIconScrollView, NSString, UIView;

@protocol CLHorizontalIconScrollViewDelegate <NSObject>
- (NSString *)cellClassName;
- (double)tableView:(CLHorizontalIconScrollView *)arg1 widthForColumnAtIndex:(long long)arg2;
- (UIView *)tableView:(CLHorizontalIconScrollView *)arg1 viewForColumnAtIndex:(long long)arg2;
- (long long)numberOfColumnsInTableView:(CLHorizontalIconScrollView *)arg1;

@optional
- (void)didSelectViewAtIndex:(long long)arg1;
@end

