//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANXBaseRPCResponseInfo, NSString;

@interface ANXVirtualCardIdentityVerifyResponse : NSObject
{
    ANXBaseRPCResponseInfo *_baseRPCResponseInfo;
    NSString *_bizId;
    NSString *_verifyId;
}

@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(retain, nonatomic) ANXBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
- (void).cxx_destruct;

@end

