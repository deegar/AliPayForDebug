//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APConfigObserverProtocol-Protocol.h"

@class NSString;
@protocol APConfigService, OS_dispatch_queue;

@interface APSocialLogModel : NSObject <APConfigObserverProtocol>
{
    NSObject<OS_dispatch_queue> *_logQueue;
    id <APConfigService> _cofigService;
    NSString *_socialReportStr;
    NSString *_socialReportAlarmSwitch;
}

@property(retain, nonatomic) NSString *socialReportAlarmSwitch; // @synthesize socialReportAlarmSwitch=_socialReportAlarmSwitch;
@property(retain, nonatomic) NSString *socialReportStr; // @synthesize socialReportStr=_socialReportStr;
@property(nonatomic) __weak id <APConfigService> cofigService; // @synthesize cofigService=_cofigService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
- (void).cxx_destruct;
- (void)configChangedForKey:(id)arg1 value:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

