//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class NSString, UIViewController;

@interface MobAppAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    NSString *_returnAppId;
    UIViewController *_rootController;
}

@property(retain, nonatomic) UIViewController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) NSString *returnAppId; // @synthesize returnAppId=_returnAppId;
- (void).cxx_destruct;
- (_Bool)applicationShouldStart:(id)arg1 params:(id)arg2 aunchMode:(long long)arg3;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)relaunch:(id)arg1;
- (void)application:(id)arg1 didResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

