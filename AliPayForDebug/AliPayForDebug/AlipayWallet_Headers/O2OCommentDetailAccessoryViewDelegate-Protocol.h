//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, O2OCommentDetailAccessoryView;

@protocol O2OCommentDetailAccessoryViewDelegate <NSObject>
- (NSDictionary *)commentDetailInfoForAccessoryView:(O2OCommentDetailAccessoryView *)arg1;
- (void)accessoryView:(O2OCommentDetailAccessoryView *)arg1 updatePraiseList:(NSArray *)arg2 praised:(NSString *)arg3 praiseCount:(NSString *)arg4;
- (void)accessoryViewDidTapCommentButton:(O2OCommentDetailAccessoryView *)arg1;
@end

