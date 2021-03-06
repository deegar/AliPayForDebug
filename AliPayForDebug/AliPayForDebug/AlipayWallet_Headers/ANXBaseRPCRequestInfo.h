//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ANXBaseRPCRequestInfo : NSObject
{
    _Bool _isRoot;
    long long _time;
    NSString *_adCode;
    NSString *_systemType;
    NSString *_clientVersion;
    NSString *_packageVersion;
    NSDictionary *_extInfo;
    NSString *_apdidToken;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSString *apdidToken; // @synthesize apdidToken=_apdidToken;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *packageVersion; // @synthesize packageVersion=_packageVersion;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *adCode; // @synthesize adCode=_adCode;
@property(nonatomic) _Bool isRoot; // @synthesize isRoot=_isRoot;
@property(nonatomic) long long time; // @synthesize time=_time;
- (void).cxx_destruct;
- (id)init;

@end

