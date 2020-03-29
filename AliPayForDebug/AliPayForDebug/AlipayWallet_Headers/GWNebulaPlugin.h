//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PSDPluginProtocol-Protocol.h"

@class H5Service, NSMutableDictionary, NSString;

@interface GWNebulaPlugin : NSObject <PSDPluginProtocol>
{
    H5Service *_h5Service;
    NSMutableDictionary *_jsapiDict;
}

@property(retain, nonatomic) NSMutableDictionary *jsapiDict; // @synthesize jsapiDict=_jsapiDict;
@property(retain, nonatomic) H5Service *h5Service; // @synthesize h5Service=_h5Service;
- (void).cxx_destruct;
- (void)handleEvent:(id)arg1;
- (id)setupGenerateBitmapsJsApi;
- (void)setJsApiObject:(id)arg1 dictionary:(id)arg2;
- (id)init;
@property(readonly, copy, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

