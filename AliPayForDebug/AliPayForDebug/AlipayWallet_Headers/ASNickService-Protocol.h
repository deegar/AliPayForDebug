//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class NSString;

@protocol ASNickService <DTService>
- (void)getNickName:(void (^)(int, NSString *))arg1 exception:(void (^)(DTRpcException *))arg2;
- (void)setNickName:(void (^)(NSString *))arg1 canceled:(void (^)(void))arg2 exception:(void (^)(DTRpcException *))arg3 preNickname:(NSString *)arg4;
- (void)setNickNameWithoutPrecheck:(void (^)(NSString *))arg1 canceled:(void (^)(void))arg2 exception:(void (^)(DTRpcException *))arg3 preNickname:(NSString *)arg4;
@end

