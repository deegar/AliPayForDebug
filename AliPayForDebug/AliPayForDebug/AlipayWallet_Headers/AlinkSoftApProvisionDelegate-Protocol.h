//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlinkNetworkProvisionDelegate-Protocol.h"

@class AlinkSoftApProvision, NSString;

@protocol AlinkSoftApProvisionDelegate <AlinkNetworkProvisionDelegate>

@optional
- (void)provisionDidSwitchNetworkBackToRouter:(AlinkSoftApProvision *)arg1;
- (void)provision:(AlinkSoftApProvision *)arg1 shouldSwitchNetworkBackToRouter:(NSString *)arg2;
- (void)provisionDidSentDataToAP:(AlinkSoftApProvision *)arg1;
- (void)provisionDidConnectedToAP:(AlinkSoftApProvision *)arg1;
- (void)provision:(AlinkSoftApProvision *)arg1 shouldConnectToAP:(NSString *)arg2;
@end

