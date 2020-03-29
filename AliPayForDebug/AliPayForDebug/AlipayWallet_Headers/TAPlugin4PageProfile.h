//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TAPlugin4PageProfile : NBPluginBase
{
    NSMutableArray *_proxyData;
    NSMutableArray *_httpRequestJsApiProfile;
    NSMutableArray *_rpcJsApiProfile;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain) NSMutableArray *rpcJsApiProfile; // @synthesize rpcJsApiProfile=_rpcJsApiProfile;
@property(retain) NSMutableArray *httpRequestJsApiProfile; // @synthesize httpRequestJsApiProfile=_httpRequestJsApiProfile;
@property(retain) NSMutableArray *proxyData; // @synthesize proxyData=_proxyData;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;

@end

