//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSSDKMtopApiHelper : NSObject
{
}

+ (id)errorWithResponse:(id)arg1;
+ (void)postRequestWithApi:(id)arg1 apiVersion:(id)arg2 bizParams:(id)arg3 startedBlock:(CDUnknownBlockType)arg4 succeedBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
+ (id)mtopClientInfo;

@end

