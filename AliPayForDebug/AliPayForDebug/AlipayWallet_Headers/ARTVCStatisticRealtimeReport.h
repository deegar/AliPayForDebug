//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCStatisticReportBase.h"

@class NSMutableArray;

@interface ARTVCStatisticRealtimeReport : ARTVCStatisticReportBase
{
    long long _startTs;
    NSMutableArray *_reportItems;
}

@property(retain, nonatomic) NSMutableArray *reportItems; // @synthesize reportItems=_reportItems;
@property(nonatomic) long long startTs; // @synthesize startTs=_startTs;
- (void).cxx_destruct;
- (id)init;

@end
