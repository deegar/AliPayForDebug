//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPSDKUtil : NSObject
{
}

+ (id)toJsonObject:(id)arg1;
+ (id)toJsonData:(id)arg1;
+ (id)toJsonString:(id)arg1;
+ (double)getBrightness;
+ (double)getDpi;
+ (struct CGSize)getResolution;
+ (long long)newtworkType;
+ (unsigned int)CRC32Value:(id)arg1;
+ (unsigned int)CRC32UTDID;
+ (id)getClickIdByType:(id)arg1;
+ (int)currentTimeInseconds;
+ (long long)currentTimeInMilliseconds;
+ (int)getAppNums;
+ (float)getBatteryLevel;
+ (id)getAdId;
+ (id)getIdfa;
+ (id)locationToData:(id)arg1;
+ (id)getLocationData;
+ (id)getLocation;
+ (short)isRoot;
+ (_Bool)isDeviceJailBreak;
+ (int)getSystemVersion;
+ (id)appPackageNameString;
+ (char *)shortToBytes:(short)arg1;
+ (char *)byteToBytes:(short)arg1;
+ (char *)integerToBytes:(unsigned int)arg1;

@end

