//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString, mfinquotationprodIndicatorResultPB;

@interface mfinquotationprodCandlestickWithIndicatorResultPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *adjustType; // @dynamic adjustType;
@property(readonly) _Bool hasAdjustType; // @dynamic hasAdjustType;
@property(readonly) _Bool hasIndicatorResult; // @dynamic hasIndicatorResult;
@property(readonly) _Bool hasPeroid; // @dynamic hasPeroid;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasShowType; // @dynamic hasShowType;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasSymbol; // @dynamic hasSymbol;
@property(readonly) _Bool hasTimeStamp; // @dynamic hasTimeStamp;
@property(retain, nonatomic) mfinquotationprodIndicatorResultPB *indicatorResult; // @dynamic indicatorResult;
@property(retain, nonatomic) NSString *peroid; // @dynamic peroid;
@property(retain, nonatomic) NSString *resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSString *showType; // @dynamic showType;
@property(retain, nonatomic) NSArray *stockCandlestickList; // @dynamic stockCandlestickList;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *symbol; // @dynamic symbol;
@property(nonatomic) long long timeStamp; // @dynamic timeStamp;

@end

