//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ATDelayUploadConfig : NSObject
{
    NSMutableDictionary *_floodTime;
    unsigned long long _minDelay;
    unsigned long long _maxDelay;
    NSString *_currDesc;
    NSString *_lastDesc;
}

@property(retain, nonatomic) NSString *lastDesc; // @synthesize lastDesc=_lastDesc;
@property(retain, nonatomic) NSString *currDesc; // @synthesize currDesc=_currDesc;
@property(nonatomic) unsigned long long maxDelay; // @synthesize maxDelay=_maxDelay;
@property(nonatomic) unsigned long long minDelay; // @synthesize minDelay=_minDelay;
@property(retain, nonatomic) NSMutableDictionary *floodTime; // @synthesize floodTime=_floodTime;
- (void).cxx_destruct;
- (id)init;

@end

