//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AlipayLifeRpcManager : NSObject
{
    NSMutableArray *_arrayRpcs;
}

+ (void)cancelRpcDelegate:(id)arg1;
+ (void)cancelRpcUserInfo:(id)arg1;
+ (void)rpcCallback:(id)arg1;
+ (void)querySubject:(id)arg1 withDelgt:(id)arg2 withCusInfo:(id)arg3;
+ (void)queryHome:(id)arg1 withDelgt:(id)arg2 withCusInfo:(id)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain, nonatomic) NSMutableArray *arrayRpcs; // @synthesize arrayRpcs=_arrayRpcs;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

