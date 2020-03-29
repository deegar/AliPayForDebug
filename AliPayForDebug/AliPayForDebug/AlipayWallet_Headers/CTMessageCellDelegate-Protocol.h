//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, PKCell;

@protocol CTMessageCellDelegate <NSObject>

@optional
- (_Bool)matchingOfflineCellTemplate:(NSString *)arg1;
- (_Bool)matchingCellTemplate:(NSString *)arg1 messageMinVersion:(NSString *)arg2;
- (void)tapedCell:(PKCell *)arg1;
- (_Bool)becomFristRespond:(PKCell *)arg1;
- (void)cellMenuTypeTaped:(PKCell *)arg1 type:(int)arg2;
- (void)voiceDownloadTapedWithCell:(PKCell *)arg1;
@end

