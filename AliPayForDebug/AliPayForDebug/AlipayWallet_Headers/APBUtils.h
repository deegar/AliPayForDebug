//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APBUtils : NSObject
{
}

+ (id)currentTimeStr;
+ (CDStruct_a846bce0)maxResolution:(long long)arg1;
+ (id)cameraWithPosition:(long long)arg1;
+ (id)appVersion;
+ (id)appName;
+ (id)osVersion;
+ (id)deviceVersion;
+ (_Bool)isWifiConnected;
+ (long long)getAvailableDiskSize;
+ (long long)getTotalDiskSize;
+ (id)currentLanguage;
+ (id)localizedStringForKey:(id)arg1 inBundle:(id)arg2;
+ (id)localizedStringForKey:(id)arg1;
+ (id)convertToJSONString:(id)arg1;
+ (id)dictionaryWithJsonString:(id)arg1;
+ (void)APBMainThread:(CDUnknownBlockType)arg1;
+ (_Bool)isWifi;
+ (id)MD5WithData:(id)arg1;

@end

