//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CodeBuilderUtils : NSObject
{
}

+ (double)getQrCodeImageWidth:(id)arg1;
+ (_Bool)isMoreTimesThanTimeLimited:(id)arg1 limitNumKey:(id)arg2 limitPeriodKey:(id)arg3;
+ (long long)getCorrectLevel:(long long)arg1;
+ (_Bool)isCertNeedExtendForKey:(id)arg1 needToRefreshDateKey:(id)arg2;
+ (_Bool)isCertInvalideForKey:(id)arg1 expDateKey:(id)arg2;
+ (unsigned long long)getCommandTypeForKey:(id)arg1 commandKey:(id)arg2;
+ (long long)parseCorrectLevel:(id)arg1;
+ (unsigned long long)getLocalCodeStatusWithKey:(id)arg1 commandKey:(id)arg2 isCertExists:(_Bool)arg3 expDateKey:(id)arg4;
+ (_Bool)isErrorCodeSuccess:(long long)arg1;
+ (id)getCodeType:(_Bool)arg1 institutionKey:(id)arg2;

@end

