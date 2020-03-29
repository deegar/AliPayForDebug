//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCWidgetView.h"

@class MFAttributeLabel, NSObject, UILabel;
@protocol OS_dispatch_source;

@interface HCCountdownCard : CCWidgetView
{
    MFAttributeLabel *_titleLabel;
    UILabel *_countdownLabel;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _countdownAccuracy;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(nonatomic) unsigned long long countdownAccuracy; // @synthesize countdownAccuracy=_countdownAccuracy;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) MFAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)configCountdownAccuracy;
- (id)convertTimestampToHHMMSSHundredMS:(long long)arg1;
- (id)convertTimestampToHHMMSS:(long long)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)timeout;
- (void)invalidateTimer;
- (id)init;
- (void)dealloc;

@end
