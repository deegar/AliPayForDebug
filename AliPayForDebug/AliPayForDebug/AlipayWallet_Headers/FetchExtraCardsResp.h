//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface FetchExtraCardsResp : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSArray *cardFeeds; // @dynamic cardFeeds;
@property(retain, nonatomic) NSString *ext; // @dynamic ext;
@property(readonly) _Bool hasExt; // @dynamic hasExt;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSArray *templateInfos; // @dynamic templateInfos;

@end

