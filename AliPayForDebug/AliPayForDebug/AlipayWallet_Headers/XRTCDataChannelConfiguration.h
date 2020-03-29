//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XRTCDataChannelConfiguration : NSObject
{
    struct DataChannelInit _nativeDataChannelInit;
}

@property(readonly, nonatomic) struct DataChannelInit nativeDataChannelInit; // @synthesize nativeDataChannelInit=_nativeDataChannelInit;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int channelId;
@property(nonatomic) int streamId;
@property(nonatomic) _Bool isNegotiated;
@property(retain, nonatomic) NSString *protocol;
@property(nonatomic) int maxRetransmits;
@property(nonatomic) int maxPacketLifeTime;
@property(nonatomic) long long maxRetransmitTimeMs;
@property(nonatomic) _Bool isOrdered;

@end

