//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACCSwipeTableViewCell, UIScrollView;

@protocol ACCSwipeTableViewCellDelegate <NSObject>

@optional
- (void)swipeableTableViewCell:(ACCSwipeTableViewCell *)arg1 didScroll:(UIScrollView *)arg2;
- (void)swipeableTableViewCellDidEndScrolling:(ACCSwipeTableViewCell *)arg1;
- (_Bool)swipeableTableViewCell:(ACCSwipeTableViewCell *)arg1 canSwipeToState:(long long)arg2;
- (_Bool)swipeableTableViewCellShouldHideUtilityButtonsOnSwipe:(ACCSwipeTableViewCell *)arg1;
- (void)swipeableTableViewCell:(ACCSwipeTableViewCell *)arg1 scrollingToState:(long long)arg2;
- (void)swipeableTableViewCell:(ACCSwipeTableViewCell *)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (void)swipeableTableViewCell:(ACCSwipeTableViewCell *)arg1 didTriggerLeftUtilityButtonWithIndex:(long long)arg2;
@end

