//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, PBMapStringString;

@interface UcdpCreativeDataPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *dataTag; // @dynamic dataTag;
@property(retain, nonatomic) PBMapStringString *extInfoMap; // @dynamic extInfoMap;
@property(readonly) _Bool hasDataTag; // @dynamic hasDataTag;
@property(readonly) _Bool hasExtInfoMap; // @dynamic hasExtInfoMap;
@property(readonly) _Bool hasIsFallback; // @dynamic hasIsFallback;
@property(readonly) _Bool hasIsIncremental; // @dynamic hasIsIncremental;
@property(readonly) _Bool hasJsonResult; // @dynamic hasJsonResult;
@property(readonly) _Bool hasLocalTimestamp; // @dynamic hasLocalTimestamp;
@property(readonly) _Bool hasServerTimestamp; // @dynamic hasServerTimestamp;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) _Bool isFallback; // @dynamic isFallback;
@property(nonatomic) _Bool isIncremental; // @dynamic isIncremental;
@property(retain, nonatomic) NSString *jsonResult; // @dynamic jsonResult;
@property(nonatomic) long long localTimestamp; // @dynamic localTimestamp;
@property(nonatomic) long long serverTimestamp; // @dynamic serverTimestamp;
@property(nonatomic) _Bool success; // @dynamic success;

@end
