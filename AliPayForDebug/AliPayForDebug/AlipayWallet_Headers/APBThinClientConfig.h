//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSData, NSString;

@interface APBThinClientConfig : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(readonly) _Bool hasContent; // @dynamic hasContent;
@property(readonly) _Bool hasSign; // @dynamic hasSign;
@property(retain, nonatomic) NSData *sign; // @dynamic sign;

@end

