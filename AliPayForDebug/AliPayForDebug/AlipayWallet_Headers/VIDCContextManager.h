//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface VIDCContextManager : NSObject
{
    NSMutableDictionary *_contextMap;
}

+ (id)sharedContextManager;
@property(retain, nonatomic) NSMutableDictionary *contextMap; // @synthesize contextMap=_contextMap;
- (void).cxx_destruct;
- (id)uniqueIdWithVerifyId:(id)arg1;
- (id)contextWithBizId:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getContextWithId:(id)arg1;
- (void)removeContextWithId:(id)arg1;

@end

