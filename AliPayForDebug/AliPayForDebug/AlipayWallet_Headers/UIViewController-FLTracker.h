//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString;

@interface UIViewController (FLTracker)
- (void)resetFullLinkInfo_ap;
- (_Bool)checkLogPageOnPageAppear:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *fltInfo;
@property(nonatomic) unsigned long long fltTrackState;
@property(nonatomic) unsigned long long fltTrackType;
@property(nonatomic) unsigned long long fltEndType;
@property(nonatomic) double fltEndTime;
@property(nonatomic) double fltStartTime;
@property(retain, nonatomic) NSString *fltLinkId;
@property(retain, nonatomic) NSString *fltActionId;
@property(retain, nonatomic) NSString *fltPageSpmId;
@property(nonatomic) unsigned long long fltPageType;
@property(readonly, nonatomic) NSString *fltPageId;
@property(readonly, nonatomic) NSString *fltClusterId;
@end

