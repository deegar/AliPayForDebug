//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlisecBioAuthResponse;

@interface VIWearableAuth : NSObject
{
    _Bool _authHasDone;
    AlisecBioAuthResponse *_response;
}

+ (_Bool)isBluetoothEnable;
@property(nonatomic) _Bool authHasDone; // @synthesize authHasDone=_authHasDone;
@property(retain, nonatomic) AlisecBioAuthResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)wearableAuthProcess:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

