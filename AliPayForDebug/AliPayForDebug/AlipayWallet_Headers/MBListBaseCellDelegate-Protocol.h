//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBSwipeTableCellDelegate-Protocol.h"

@class MBListBaseCell, NSDictionary, NSIndexPath, NSObject, WKEasyViewBuilder;

@protocol MBListBaseCellDelegate <MBSwipeTableCellDelegate>
- (_Bool)mbListCell:(MBListBaseCell *)arg1 indexPath:(NSIndexPath *)arg2 eventAction:(NSDictionary *)arg3;
- (NSObject *)monitorViewId;
- (WKEasyViewBuilder *)getWKBuilder:(MBListBaseCell *)arg1;
@end

