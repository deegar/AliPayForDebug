//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APSocialFriendTabLogSPM : NSObject
{
    long long _unreadCount;
    double _startLogTime;
    NSString *_logUsertype;
    NSMutableDictionary *_extParams;
    NSString *_spmId;
    NSString *_spmClickId;
}

@property(retain, nonatomic) NSString *spmClickId; // @synthesize spmClickId=_spmClickId;
@property(retain, nonatomic) NSString *spmId; // @synthesize spmId=_spmId;
@property(retain, nonatomic) NSMutableDictionary *extParams; // @synthesize extParams=_extParams;
@property(retain, nonatomic) NSString *logUsertype; // @synthesize logUsertype=_logUsertype;
@property(nonatomic) double startLogTime; // @synthesize startLogTime=_startLogTime;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetLogSpmData;
- (id)init;

@end

