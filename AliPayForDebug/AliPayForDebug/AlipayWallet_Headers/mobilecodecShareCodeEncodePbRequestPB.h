//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString, mobilecodecShareCodeDataPB;

@interface mobilecodecShareCodeEncodePbRequestPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizLinkedId; // @dynamic bizLinkedId;
@property(retain, nonatomic) NSString *bizType; // @dynamic bizType;
@property(readonly) _Bool hasBizLinkedId; // @dynamic hasBizLinkedId;
@property(readonly) _Bool hasBizType; // @dynamic hasBizType;
@property(readonly) _Bool hasNeedCRC; // @dynamic hasNeedCRC;
@property(readonly) _Bool hasShareChannel; // @dynamic hasShareChannel;
@property(readonly) _Bool hasShareCodeData; // @dynamic hasShareCodeData;
@property(readonly) _Bool hasShareExtInfo; // @dynamic hasShareExtInfo;
@property(readonly) _Bool hasShareRef; // @dynamic hasShareRef;
@property(nonatomic) _Bool needCRC; // @dynamic needCRC;
@property(retain, nonatomic) NSString *shareChannel; // @dynamic shareChannel;
@property(retain, nonatomic) mobilecodecShareCodeDataPB *shareCodeData; // @dynamic shareCodeData;
@property(retain, nonatomic) PBMapStringString *shareExtInfo; // @dynamic shareExtInfo;
@property(retain, nonatomic) NSString *shareRef; // @dynamic shareRef;

@end

