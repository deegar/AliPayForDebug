//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface COMDeleteRewardReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *blackReason; // @dynamic blackReason;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *feedId; // @dynamic feedId;
@property(readonly) _Bool hasBlackReason; // @dynamic hasBlackReason;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasFeedId; // @dynamic hasFeedId;
@property(readonly) _Bool hasPullToBlack; // @dynamic hasPullToBlack;
@property(readonly) _Bool hasRewardId; // @dynamic hasRewardId;
@property(readonly) _Bool hasRewardUserId; // @dynamic hasRewardUserId;
@property(nonatomic) _Bool pullToBlack; // @dynamic pullToBlack;
@property(retain, nonatomic) NSString *rewardId; // @dynamic rewardId;
@property(retain, nonatomic) NSString *rewardUserId; // @dynamic rewardUserId;

@end

