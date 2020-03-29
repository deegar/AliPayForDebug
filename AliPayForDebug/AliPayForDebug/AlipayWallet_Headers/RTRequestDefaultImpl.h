//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"
#import "RTRequestProtocol-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;

@interface RTRequestDefaultImpl : NSObject <NSURLSessionDelegate, RTRequestProtocol>
{
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSMutableDictionary *_tasks;
    NSMutableDictionary *_delegates;
}

@property(retain, nonatomic) NSMutableDictionary *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

