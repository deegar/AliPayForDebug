//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ANXUserConfig : NSObject
{
    NSString *_apdid;
    NSString *_apdidToken;
    NSString *_umidToken;
    NSString *_tid;
    NSString *_imei;
    NSString *_imsi;
    NSString *_utdid;
    NSString *_clientId;
}

@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *umidToken; // @synthesize umidToken=_umidToken;
@property(copy, nonatomic) NSString *apdidToken; // @synthesize apdidToken=_apdidToken;
@property(copy, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
- (void).cxx_destruct;

@end

