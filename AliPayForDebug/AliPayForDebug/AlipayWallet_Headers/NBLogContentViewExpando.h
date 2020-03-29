//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APLogTrackContext, NBLogSPMIndex;

@interface NBLogContentViewExpando : NSObject
{
    _Bool _viewAppeared;
    _Bool _didReportSpmId;
    NBLogSPMIndex *_spmIndex;
    APLogTrackContext *_trackContext;
    unsigned long long _autoLogAmount;
}

@property(nonatomic) unsigned long long autoLogAmount; // @synthesize autoLogAmount=_autoLogAmount;
@property(nonatomic) _Bool didReportSpmId; // @synthesize didReportSpmId=_didReportSpmId;
@property(nonatomic, getter=didViewAppear) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(retain, nonatomic) APLogTrackContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) NBLogSPMIndex *spmIndex; // @synthesize spmIndex=_spmIndex;
- (void).cxx_destruct;

@end

