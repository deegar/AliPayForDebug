//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AULoadingView.h"

@class NSTimer;

@interface AFWStockWrapAULoading : AULoadingView
{
    double _progress;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)loadingTimer:(id)arg1;
- (void)startAnimating;
- (void)dealloc;

@end

