//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABTestConfigService, NSString;

@interface ABTestManager : NSObject
{
    ABTestConfigService *_abtestConfigService;
    NSString *_productName;
}

+ (id)sharedInstance;
@property(copy) NSString *productName; // @synthesize productName=_productName;
- (void).cxx_destruct;
- (id)abTestExtInfoForSpmId:(id)arg1;
- (id)abTestInfoForSpmId:(id)arg1;
- (void)onEnterForeground;
- (void)onUserLogin;
- (void)onTerminate;
- (void)onEnterBackground;
- (void)onUserLogout;
- (void)addNotificationObserver;
- (_Bool)fetchExpConfigWithDiversionType:(long long)arg1 Reason:(long long)arg2;
- (id)init;

@end

