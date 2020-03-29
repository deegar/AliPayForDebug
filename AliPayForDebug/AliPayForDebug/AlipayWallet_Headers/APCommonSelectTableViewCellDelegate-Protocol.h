//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIScrollView, UITableView;
@protocol APCommonItemProtocol;

@protocol APCommonSelectTableViewCellDelegate <NSObject>

@optional
- (NSString *)getTextWithTextKey:(NSString *)arg1 defaultText:(NSString *)arg2 bundleName:(NSString *)arg3;
- (UIImage *)getLocalImageWithName:(NSString *)arg1 stretchLeftCap:(double)arg2 topHeight:(double)arg3;
- (UIImage *)getLocalImageWithName:(NSString *)arg1;
- (UIScrollView *)getScrollView;
- (UITableView *)getTableView;
- (void)didClickAccBtnWithItem:(id <APCommonItemProtocol>)arg1;
- (void)didClickIconWithItem:(id <APCommonItemProtocol>)arg1;
@end
