//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WADetectorClient;

@interface WADetector : NSObject
{
    id <WADetectorClient> _client;
}

+ (_Bool)authorizeWhenCreateInWebView:(id)arg1;
+ (id)metadata;
@property(readonly) __weak id <WADetectorClient> client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)onCameraUpdate:(id)arg1;
- (void)analyzeARFrame:(id)arg1;
- (void)stop;
- (void)onPageOptions:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setClient:(id)arg1;
- (void)onInit:(id)arg1;

@end

