//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, finscbffTendencyAdvancedEstimatePB;

@interface finscbffTendencyAdvancedSignalPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *date; // @dynamic date;
@property(retain, nonatomic) NSString *defaultTitle; // @dynamic defaultTitle;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(retain, nonatomic) finscbffTendencyAdvancedEstimatePB *estimate; // @dynamic estimate;
@property(readonly) _Bool hasDate; // @dynamic hasDate;
@property(readonly) _Bool hasDefaultTitle; // @dynamic hasDefaultTitle;
@property(readonly) _Bool hasDesc; // @dynamic hasDesc;
@property(readonly) _Bool hasEstimate; // @dynamic hasEstimate;
@property(readonly) _Bool hasTitle; // @dynamic hasTitle;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(readonly) _Bool hasUrl; // @dynamic hasUrl;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

