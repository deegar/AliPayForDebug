//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APDRRAndroidParameter, APDRRIOSParameter, NSMutableArray, NSString;

@interface APDRRRequest : NSObject
{
    NSString *_productId;
    NSString *_productVersion;
    NSString *_clientId;
    NSString *_phoneBrand;
    NSString *_phoneModel;
    NSString *_userId;
    NSString *_extraInfo;
    NSString *_netType;
    APDRRAndroidParameter *_androidParam;
    APDRRIOSParameter *_iosParam;
    NSString *_dynamicResourceType;
    NSMutableArray *_cmdUuid;
    NSString *_utdid;
}

@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSMutableArray *cmdUuid; // @synthesize cmdUuid=_cmdUuid;
@property(retain, nonatomic) NSString *dynamicResourceType; // @synthesize dynamicResourceType=_dynamicResourceType;
@property(retain, nonatomic) APDRRIOSParameter *iosParam; // @synthesize iosParam=_iosParam;
@property(retain, nonatomic) APDRRAndroidParameter *androidParam; // @synthesize androidParam=_androidParam;
@property(retain, nonatomic) NSString *netType; // @synthesize netType=_netType;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *phoneModel; // @synthesize phoneModel=_phoneModel;
@property(retain, nonatomic) NSString *phoneBrand; // @synthesize phoneBrand=_phoneBrand;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *productVersion; // @synthesize productVersion=_productVersion;
@property(retain, nonatomic) NSString *productId; // @synthesize productId=_productId;
- (void).cxx_destruct;
- (id)init;

@end

