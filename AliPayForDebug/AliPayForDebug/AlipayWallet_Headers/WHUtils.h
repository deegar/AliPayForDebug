//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WHUtils : NSObject
{
}

+ (_Bool)isSwitchNewEdition;
+ (void)startABTestTracking;
+ (void)makeBadgeAndDescNeedShow:(id)arg1 desc:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)defaultHeadIconImage;
+ (void)reportLoadInModelLog:(long long)arg1;
+ (_Bool)isSameDay:(long long)arg1 time2:(long long)arg2;
+ (_Bool)canShowNewCommerGuidance;
+ (void)markNewComerFlag;
+ (id)mainWindow;
+ (double)propRatio;
+ (void)openAppWithUrl:(id)arg1;
+ (id)urlAppendBadgeInfo:(id)arg1 badgeInfo:(id)arg2;
+ (id)urlAppendChannel:(id)arg1;
+ (id)extractBadgeExtParams:(id)arg1;
+ (_Bool)openAppWithDictionary:(id)arg1;
+ (_Bool)openAppWithCellModel:(id)arg1;
+ (void)showBadgeOnMyTab:(id)arg1 extInfo:(id)arg2;
+ (_Bool)isShieldInReview:(id)arg1;
+ (_Bool)defaultRpcToastConfigDisabled;
+ (id)assetSubtitleColor;
+ (_Bool)richTextConfigEnabled;
+ (id)validatePromotionKeys;
+ (_Bool)isSchemaAppendPromotionCallback;
+ (id)getUserVipView:(id)arg1;
+ (_Bool)isNumberOrDecimalWithString:(id)arg1;
+ (_Bool)isValidString:(id)arg1;

@end

