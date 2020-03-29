//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AlinkApUtils : NSObject
{
    NSString *_ssidPrefix;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *ssidPrefix; // @synthesize ssidPrefix=_ssidPrefix;
- (void).cxx_destruct;
- (_Bool)isApWithSsidPrefix:(id)arg1;
- (void)checkCurrentSsid;
- (void)stopMonitor;
- (void)monitorConnectedAp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

