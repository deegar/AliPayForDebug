//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDEvent.h"

@class DTMicroApplication, NSDictionary, UINavigationController;

@interface H5AppDelegateEvent : PSDEvent
{
    long long _launchMode;
    DTMicroApplication *_app;
    NSDictionary *_launchOptions;
    UINavigationController *_navigationController;
}

+ (id)appCreateAfterEvent:(id)arg1;
+ (id)didPresentEvent:(id)arg1 params:(id)arg2;
+ (id)shouldPresentEvent:(id)arg1 application:(id)arg2 params:(id)arg3;
+ (id)LaunchModeEvent:(long long)arg1 application:(id)arg2 params:(id)arg3;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic) __weak DTMicroApplication *app; // @synthesize app=_app;
@property(nonatomic) long long launchMode; // @synthesize launchMode=_launchMode;
- (void).cxx_destruct;

@end

