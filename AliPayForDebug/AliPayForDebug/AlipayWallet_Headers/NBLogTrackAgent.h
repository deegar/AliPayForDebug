//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NBLogTrackAgentProtocol-Protocol.h"

@class NSString;

@interface NBLogTrackAgent : NSObject <NBLogTrackAgentProtocol>
{
}

- (void)context:(id)arg1 pageEnd:(id)arg2;
- (void)context:(id)arg1 unused:(id)arg2;
- (void)context:(id)arg1 resumeStart:(id)arg2;
- (id)extraPageEndParamForPSDContext:(id)arg1 trackContext:(id)arg2;
- (void)context:(id)arg1 willAppPause:(id)arg2;
- (void)context:(id)arg1 willAppResume:(id)arg2;
- (void)context:(id)arg1 didResume:(id)arg2;
- (void)context:(id)arg1 willResume:(id)arg2;
- (void)context:(id)arg1 didDisAppear:(id)arg2;
- (void)context:(id)arg1 willDisAppear:(id)arg2;
- (void)context:(id)arg1 didFirstAppear:(id)arg2;
- (void)context:(id)arg1 willFirstAppear:(id)arg2;
- (void)context:(id)arg1 didMainDocChange:(id)arg2;
- (id)context:(id)arg1 didReportData:(id)arg2;
- (id)getContentViewExpando:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

