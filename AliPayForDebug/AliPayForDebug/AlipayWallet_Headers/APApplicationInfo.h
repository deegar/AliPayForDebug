//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APApplicationInfo : NSObject
{
}

+ (_Bool)isNeedForceReset;
+ (void)resetProductInfo;
+ (void)fixProductType;
+ (id)walletAppGroup;
+ (id)originalProductId;
+ (_Bool)canOpenPushSetting;
+ (_Bool)isPushEnabled;
+ (id)originalProductType;
+ (void)updateProductInfo:(id)arg1;
+ (id)productIdByRegion:(id)arg1;
+ (id)productId:(long long)arg1;
+ (id)productId;
+ (id)productNameByRegion:(id)arg1;
+ (id)productName:(long long)arg1;
+ (id)productName;
+ (id)productTypeString;
+ (long long)productType;
+ (void)load;

@end

