//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, OCCObserverRequest;

@protocol OCCProtocol <NSObject>
- (NSString *)cpaActived:(NSString *)arg1 pid:(NSString *)arg2 nameSpace:(NSString *)arg3 actionType:(NSString *)arg4 args:(NSDictionary *)arg5;
- (NSDictionary *)taped:(NSString *)arg1 pid:(NSString *)arg2 needOpen:(_Bool)arg3;
- (void)expose:(NSString *)arg1 nameSpace:(NSString *)arg2 pid:(NSString *)arg3 ignoreDuplication:(_Bool)arg4 args:(NSDictionary *)arg5;
- (void)trigger:(NSArray *)arg1 nameSpace:(NSString *)arg2 userDic:(NSDictionary *)arg3 isForce:(_Bool)arg4;
- (NSDictionary *)getDataSync:(NSString *)arg1 isNeedAdLogo:(_Bool)arg2;
- (void)removeObserver:(NSString *)arg1;
- (void)setObserverAsync:(NSString *)arg1 pids:(NSArray *)arg2 observerReq:(OCCObserverRequest *)arg3 complete:(void (^)(NSDictionary *, NSString *, _Bool, _Bool))arg4;
@end
