//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AFWFinancePotJSAPIHandler-Protocol.h"

@class AFWFinancePotPushWindowTask;

@interface AFWFinancePotJSAPI4PushWindow : NSObject <AFWFinancePotJSAPIHandler>
{
    AFWFinancePotPushWindowTask *_pushWindowTask;
}

@property(retain, nonatomic) AFWFinancePotPushWindowTask *pushWindowTask; // @synthesize pushWindowTask=_pushWindowTask;
- (void).cxx_destruct;
- (void)doHandler:(id)arg1 options:(id)arg2 baseOnVC:(id)arg3 baseOnWebView:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)handle:(id)arg1 baseOnVC:(id)arg2 baseOnWebView:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)init;

@end

