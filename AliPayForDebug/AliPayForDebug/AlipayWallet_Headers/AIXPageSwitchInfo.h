//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AIXPageSwitchInfo : NSObject
{
    NSString *_bizId;
    NSString *_chInfo;
    NSString *_scmId;
    long long _maxMissCount;
    CDUnknownBlockType _callBack;
}

@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(nonatomic) long long maxMissCount; // @synthesize maxMissCount=_maxMissCount;
@property(copy, nonatomic) NSString *scmId; // @synthesize scmId=_scmId;
@property(copy, nonatomic) NSString *chInfo; // @synthesize chInfo=_chInfo;
@property(copy, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
- (void).cxx_destruct;

@end

