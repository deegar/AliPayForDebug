//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NXKPluginBase.h"

@interface Plugin4EventToRender : NXKPluginBase
{
}

- (void)sendEvent2Cube:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendEvent2PageCube:(id)arg1 model:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)handleEvent:(id)arg1;
- (void)handlePageCubeEvent:(id)arg1;
- (id)name;
- (void)pluginDidLoad;
- (int)priority;
- (id)init;

@end

