//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VoiceInfo2 : NSObject
{
    unsigned long long _type;
    long long _duration;
}

@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)decode:(id)arg1;
- (id)encode;

@end

