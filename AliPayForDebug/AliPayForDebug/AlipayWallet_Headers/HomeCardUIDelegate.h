//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSEventListener-Protocol.h"

@class HCFeedBackDelegate, HCLogReporter, HomeCardHideCardDelegate, NSString, UICollectionView;

@interface HomeCardUIDelegate : NSObject <CSEventListener>
{
    HomeCardHideCardDelegate *_hideDelegate;
    HCFeedBackDelegate *_feedback;
    HCLogReporter *_logReporter;
    UICollectionView *_currentCollectionView;
    double _lastEventTime;
    CDUnknownBlockType _feedChangeCallback;
}

@property(copy, nonatomic) CDUnknownBlockType feedChangeCallback; // @synthesize feedChangeCallback=_feedChangeCallback;
- (void).cxx_destruct;
- (void)onEvent:(id)arg1;
- (void)setCurrentCollectionView:(id)arg1;
- (void)setLogReporter:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setHideCardDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

