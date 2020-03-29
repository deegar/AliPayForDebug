//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SUContactActionSheet, UIColor;

@protocol SUContactActionSheetDataSource <NSObject>

@optional
- (_Bool)actionSheet:(SUContactActionSheet *)arg1 forceHideActiveIconAtIndex:(long long)arg2;
- (_Bool)actionSheet:(SUContactActionSheet *)arg1 forceHideTitleDescriptionAtIndex:(long long)arg2;
- (UIColor *)actionSheet:(SUContactActionSheet *)arg1 backgroundColorAtIndex:(long long)arg2;
- (UIColor *)actionSheet:(SUContactActionSheet *)arg1 subTitleColorAtIndex:(long long)arg2;
- (UIColor *)actionSheet:(SUContactActionSheet *)arg1 titleDescriptionColorAtIndex:(long long)arg2;
- (UIColor *)actionSheet:(SUContactActionSheet *)arg1 titleColorAtIndex:(long long)arg2;
@end

