//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BEERpcUtils : NSObject
{
}

+ (void)handleOverFlowRpcException:(id)arg1 contentView:(id)arg2 exception:(id)arg3 hasContent:(_Bool)arg4 exceptionRect:(struct CGRect)arg5 retryBlock:(CDUnknownBlockType)arg6 handleErrorView:(CDUnknownBlockType)arg7 exReturns:(id *)arg8;
+ (_Bool)isOverFlow:(id)arg1;
+ (_Bool)isSpannerOverFlow:(id)arg1;
+ (void)handleOverFlowRpcException:(id)arg1 contentView:(id)arg2 exception:(id)arg3 hasContent:(_Bool)arg4 exceptionRect:(struct CGRect)arg5 retryBlock:(CDUnknownBlockType)arg6 handleErrorView:(CDUnknownBlockType)arg7 beforeAddErrorView:(CDUnknownBlockType)arg8 exReturns:(id *)arg9;
+ (void)fillSpmHeader:(id)arg1;

@end

