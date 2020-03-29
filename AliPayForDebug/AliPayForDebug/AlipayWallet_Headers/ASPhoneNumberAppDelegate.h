//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class DTMicroApplication, NSString;

@interface ASPhoneNumberAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    _Bool _encryptedDisplay;
    NSString *_phoneContext;
    NSString *_bizScene;
    DTMicroApplication *_application;
}

@property(retain, nonatomic) DTMicroApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) NSString *bizScene; // @synthesize bizScene=_bizScene;
@property(retain, nonatomic) NSString *phoneContext; // @synthesize phoneContext=_phoneContext;
@property(nonatomic) _Bool encryptedDisplay; // @synthesize encryptedDisplay=_encryptedDisplay;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)fastMobileBind;
- (void)dochangeBindPhoneByH5:(id)arg1;
- (void)doMobileBind;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

