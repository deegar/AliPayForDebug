//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SADyncRouterRPCSender : NSObject
{
}

+ (void)writeRemoteLogWithRequest:(id)arg1 exception:(id)arg2 consumingTime:(id)arg3 type:(unsigned long long)arg4 timeoutInterval:(double)arg5 isAutoLogin:(_Bool)arg6 isServerLogin:(_Bool)arg7 rpcRequest:(id)arg8;
+ (id)sendRouteRPCWithRequest:(id)arg1 rpcRequest:(id)arg2 type:(unsigned long long)arg3;

@end

