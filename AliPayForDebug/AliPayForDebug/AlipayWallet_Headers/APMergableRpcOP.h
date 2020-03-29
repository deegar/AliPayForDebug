//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface APMergableRpcOP : NSObject
{
    NSString *_key;
    NSDate *_createDate;
    NSDictionary *_rpcParams;
    double _timeOutValue;
    CDUnknownBlockType _resultCallback;
}

@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property(nonatomic) double timeOutValue; // @synthesize timeOutValue=_timeOutValue;
@property(retain, nonatomic) NSDictionary *rpcParams; // @synthesize rpcParams=_rpcParams;
@property(retain, nonatomic) NSDate *createDate; // @synthesize createDate=_createDate;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (_Bool)isTimeOut;
- (id)init;

@end

