//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AFWEditCellData <NSObject>
- (void)onUpdateItemMode:(int)arg1;
- (int)modeForCell;
- (_Bool)holdingPosition;
- (NSString *)dataMarket;
- (NSString *)dataIdForCell;
- (NSString *)symbolForCell;
- (NSString *)titleForCell;
@end
