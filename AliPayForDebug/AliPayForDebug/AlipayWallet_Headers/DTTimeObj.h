//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSTimer, SyncBizListenerNode;

@interface DTTimeObj : NSObject
{
    _Bool _useNode;
    NSTimer *_time;
    long long _sendCount;
    NSDictionary *_sendDic;
    NSString *_sendBiz;
    SyncBizListenerNode *_callbackNode;
}

@property(nonatomic) _Bool useNode; // @synthesize useNode=_useNode;
@property __weak SyncBizListenerNode *callbackNode; // @synthesize callbackNode=_callbackNode;
@property(retain, nonatomic) NSString *sendBiz; // @synthesize sendBiz=_sendBiz;
@property(retain, nonatomic) NSDictionary *sendDic; // @synthesize sendDic=_sendDic;
@property(nonatomic) long long sendCount; // @synthesize sendCount=_sendCount;
@property(retain, nonatomic) NSTimer *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

