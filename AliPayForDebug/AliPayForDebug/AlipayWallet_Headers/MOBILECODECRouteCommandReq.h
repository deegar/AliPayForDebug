//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MOBILECODECRouteCommandReq : NSObject
{
    NSString *_paiType;
    NSDictionary *_decodeData;
    NSString *_channelId;
    NSString *_dataType;
    NSDictionary *_productContext;
    NSDictionary *_extData;
    NSDictionary *_loginParams;
}

+ (Class)loginParamsElementClass;
+ (Class)extDataElementClass;
+ (Class)productContextElementClass;
+ (Class)decodeDataElementClass;
@property(retain, nonatomic) NSDictionary *loginParams; // @synthesize loginParams=_loginParams;
@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData=_extData;
@property(retain, nonatomic) NSDictionary *productContext; // @synthesize productContext=_productContext;
@property(retain, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSDictionary *decodeData; // @synthesize decodeData=_decodeData;
@property(retain, nonatomic) NSString *paiType; // @synthesize paiType=_paiType;
- (void).cxx_destruct;

@end
