//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HiChatSessionConfigCenter : NSObject
{
    NSMutableDictionary *_configDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *configDic; // @synthesize configDic=_configDic;
- (void).cxx_destruct;
- (void)saveSessionConfig:(id)arg1 withSessionID:(id)arg2;
- (id)sessionConfigsBySessionID:(id)arg1;
- (id)sessionClassNameBySessionType:(id)arg1;
- (id)init;

@end

