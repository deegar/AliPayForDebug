//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LAOnlineConfig : NSObject
{
    NSString *_badgeShowIntervalJson;
    NSDictionary *_badgeShowIntervalDic;
}

+ (double)autoPopMoreButtonDelay;
+ (_Bool)needSilentSwitchHome;
+ (id)instance;
- (void).cxx_destruct;
- (id)popupViewSpaceCodeConfig;
- (long long)badgeShowInterval:(id)arg1;

@end
