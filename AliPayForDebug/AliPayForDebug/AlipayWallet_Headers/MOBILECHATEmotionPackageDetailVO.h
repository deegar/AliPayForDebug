//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

#import "NSCoding-Protocol.h"

@class MOBILECHATEmotionPackageBriefVO, NSArray, NSString;

@interface MOBILECHATEmotionPackageDetailVO : APDPBGeneratedMessage <NSCoding>
{
}

+ (CDStruct_af61540b *)_fieldInfos;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)type;
- (int)score;
- (id)gmtCreate;
- (id)price;
- (id)shortDesc;
- (id)iconFid;
- (int)state;
- (int)flag;
- (id)packageFid;
- (id)name;
- (id)packageId;
@property(retain, nonatomic) NSString *copyright;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSString *author; // @dynamic author;
@property(retain, nonatomic) NSString *bannerFid; // @dynamic bannerFid;
@property(retain, nonatomic) NSString *declare; // @dynamic declare;
@property(retain, nonatomic) NSString *declareUrl; // @dynamic declareUrl;
@property(retain, nonatomic) MOBILECHATEmotionPackageBriefVO *emotionPackageBriefVO; // @dynamic emotionPackageBriefVO;
@property(retain, nonatomic) NSArray *emotions; // @dynamic emotions;
@property(retain, nonatomic) NSString *fullDesc; // @dynamic fullDesc;
@property(readonly) _Bool hasAuthor; // @dynamic hasAuthor;
@property(readonly) _Bool hasBannerFid; // @dynamic hasBannerFid;
@property(readonly) _Bool hasDeclare; // @dynamic hasDeclare;
@property(readonly) _Bool hasDeclareUrl; // @dynamic hasDeclareUrl;
@property(readonly) _Bool hasEmotionPackageBriefVO; // @dynamic hasEmotionPackageBriefVO;
@property(readonly) _Bool hasFullDesc; // @dynamic hasFullDesc;
@property(readonly) _Bool hasPb_copyright; // @dynamic hasPb_copyright;
@property(readonly) _Bool hasTimeLimit; // @dynamic hasTimeLimit;
@property(retain, nonatomic) NSString *pb_copyright; // @dynamic pb_copyright;
@property(retain, nonatomic) NSString *timeLimit; // @dynamic timeLimit;

@end

