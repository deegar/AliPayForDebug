//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString;

@interface CSMonitor : NSObject
{
    NSString *_context;
    NSHashTable *_listenerMap;
}

@property(retain, nonatomic) NSHashTable *listenerMap; // @synthesize listenerMap=_listenerMap;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (void)_upload:(id)arg1;
- (void)_dispatch:(id)arg1;
- (void)stop;
- (void)start;

@end

