//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCAMapPollingExtConfig;

@interface ACCAMapPollingConfig : NSObject
{
    long long _pollingInterval;
    ACCAMapPollingExtConfig *_escalation;
}

@property(retain, nonatomic) ACCAMapPollingExtConfig *escalation; // @synthesize escalation=_escalation;
@property(nonatomic) long long pollingInterval; // @synthesize pollingInterval=_pollingInterval;
- (void).cxx_destruct;

@end
