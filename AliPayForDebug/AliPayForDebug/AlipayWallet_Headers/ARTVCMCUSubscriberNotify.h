//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTVCMCUBasicNotify.h"

@class ARTVCFeed, NSString;

@interface ARTVCMCUSubscriberNotify : ARTVCMCUBasicNotify
{
    int _userType;
    NSString *_subscriber;
    ARTVCFeed *_feed;
}

@property(retain, nonatomic) ARTVCFeed *feed; // @synthesize feed=_feed;
@property(nonatomic) int userType; // @synthesize userType=_userType;
@property(copy, nonatomic) NSString *subscriber; // @synthesize subscriber=_subscriber;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end

