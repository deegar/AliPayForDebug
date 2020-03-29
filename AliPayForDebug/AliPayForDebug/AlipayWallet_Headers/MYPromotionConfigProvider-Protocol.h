//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MYPromotionConfigModel, NSArray, NSDictionary, NSString, UIViewController;

@protocol MYPromotionConfigProvider <NSObject>
- (NSArray *)configForViewController:(UIViewController *)arg1;
- (NSArray *)configForUri:(NSString *)arg1;
- (NSDictionary *)allConfigs;

@optional
@property(copy, nonatomic) CDUnknownBlockType configDidUpdate;
- (void)promotionFeedback:(MYPromotionConfigModel *)arg1;
- (void)promotionDidShow:(MYPromotionConfigModel *)arg1;
@end

