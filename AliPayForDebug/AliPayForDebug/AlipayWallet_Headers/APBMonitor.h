//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface APBMonitor : NSObject
{
    NSString *_token;
    NSDictionary *_bizInfo;
    long long _index;
    NSString *_appid;
    NSMutableDictionary *_publicLogDic;
}

+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 appId:(id)arg3 seed:(id)arg4 ucId:(id)arg5;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 appId:(id)arg3 seed:(id)arg4 ucId:(id)arg5 bizType:(id)arg6 formatterDictionary:(id)arg7;
+ (void)addPrivateMonitorLogWithBisToken:(id)arg1 param2:(id)arg2 param3:(id)arg3 param4:(id)arg4;
@property(retain, nonatomic) NSMutableDictionary *publicLogDic; // @synthesize publicLogDic=_publicLogDic;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSDictionary *bizInfo; // @synthesize bizInfo=_bizInfo;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)addPrivateMonitorLoagWithparam1:(id)arg1 param2:(id)arg2 param3:(id)arg3;
- (void)addMonitorLoagWithActionId:(id)arg1 param3:(id)arg2 param4:(id)arg3 seedId:(id)arg4 ucid:(id)arg5 formattedParam:(id)arg6;
- (void)addMonitorLoagWithActionId:(id)arg1 param1:(id)arg2 param2:(id)arg3 param3:(id)arg4 seedId:(id)arg5 ucid:(id)arg6 formattedParam:(id)arg7;
- (void)addMonitorLoagWithActionId:(id)arg1 param1:(id)arg2 param2:(id)arg3 param3:(id)arg4 seedId:(id)arg5 ucid:(id)arg6;
- (id)allPublicLogs;
- (void)removeAllPublicLog;
- (void)removePublicLogForKey:(id)arg1;
- (void)addPublicLog:(id)arg1;
- (id)initWithBizInfo:(id)arg1 appid:(id)arg2;
- (id)initWithBizInfo:(id)arg1;

@end

