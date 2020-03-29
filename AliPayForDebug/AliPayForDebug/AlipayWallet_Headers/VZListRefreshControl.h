//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIRefreshControl.h>

#import "VZListPullToRefreshViewDelegate-Protocol.h"

@class NSString;

@interface VZListRefreshControl : UIRefreshControl <VZListPullToRefreshViewDelegate>
{
    float _progress;
    CDUnknownBlockType _pullRefreshDidTrigger;
}

@property(copy, nonatomic) CDUnknownBlockType pullRefreshDidTrigger; // @synthesize pullRefreshDidTrigger=_pullRefreshDidTrigger;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopRefreshing;
- (void)startRefreshing;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)initialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isRefreshing;
@property(readonly) Class superclass;

@end

