//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APAudioPlayer.h"

@class BeeContentSecurityManager, NSString;

@interface BEEAudioPlayer : APAudioPlayer
{
    _Bool _isRecordAudioPlayState;
    _Bool _triggerEndEventWhenLoop;
    NSString *_playerId;
    NSString *_appId;
    NSString *_originalSrc;
    double _storeTime;
    BeeContentSecurityManager *_contentSecurityManager;
}

@property(retain, nonatomic) BeeContentSecurityManager *contentSecurityManager; // @synthesize contentSecurityManager=_contentSecurityManager;
@property(nonatomic) _Bool triggerEndEventWhenLoop; // @synthesize triggerEndEventWhenLoop=_triggerEndEventWhenLoop;
@property(nonatomic) double storeTime; // @synthesize storeTime=_storeTime;
@property(nonatomic) _Bool isRecordAudioPlayState; // @synthesize isRecordAudioPlayState=_isRecordAudioPlayState;
@property(copy, nonatomic) NSString *originalSrc; // @synthesize originalSrc=_originalSrc;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;
- (void)detectPorn;
- (void)play;

@end

