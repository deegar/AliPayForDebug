//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DTMicroApplicationDelegate-Protocol.h"

@class CardSDK, CardSDKExceptionHandler, NSString, NTLUIDelegate, UIViewController;

@interface NTLAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    UIViewController *_rootViewController;
    CardSDK *_cardsdk;
    NTLUIDelegate *_uidelegate;
    CardSDKExceptionHandler *_expHandler;
}

+ (void)forceExitNTLApp;
@property(retain, nonatomic) CardSDKExceptionHandler *expHandler; // @synthesize expHandler=_expHandler;
@property(retain, nonatomic) NTLUIDelegate *uidelegate; // @synthesize uidelegate=_uidelegate;
@property(retain, nonatomic) CardSDK *cardsdk; // @synthesize cardsdk=_cardsdk;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (id)existedNTLFeedsCardViewController;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

