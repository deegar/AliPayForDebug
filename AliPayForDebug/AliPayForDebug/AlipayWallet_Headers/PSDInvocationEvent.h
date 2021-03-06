//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDEvent.h"

@class NSDictionary, NSString, PSDInvocation, PSDJsApi;

@interface PSDInvocationEvent : PSDEvent
{
    PSDJsApi *_jsApi;
    _Bool _shouldSkipCallback;
    _Bool _isOnlyForWorker;
    NSString *_invocationName;
    NSDictionary *_invocationData;
    NSDictionary *_invocationResult;
    NSString *_url;
    CDUnknownBlockType _responseCallback;
    NSString *_invocationSource;
    PSDInvocation *_invocation;
}

+ (id)startEvent:(id)arg1 eventData:(id)arg2 url:(id)arg3;
+ (id)errorEvent:(id)arg1 url:(id)arg2;
+ (id)errorEvent:(id)arg1 invocation:(id)arg2 url:(id)arg3;
+ (id)completeEvent:(id)arg1 invocationData:(id)arg2 invocationResult:(id)arg3 url:(id)arg4;
+ (id)completeEvent:(id)arg1 invocation:(id)arg2 invocationData:(id)arg3 invocationResult:(id)arg4 url:(id)arg5;
+ (id)completeEvent:(id)arg1 invocationResult:(id)arg2 url:(id)arg3;
+ (id)completeEvent:(id)arg1 invocation:(id)arg2 invocationResult:(id)arg3 url:(id)arg4;
+ (id)invokeEvent:(id)arg1 invocationData:(id)arg2 url:(id)arg3 jsApi:(id)arg4 responseCallback:(CDUnknownBlockType)arg5;
+ (id)invokeEvent:(id)arg1 invocation:(id)arg2 invocationData:(id)arg3 url:(id)arg4 jsApi:(id)arg5 responseCallback:(CDUnknownBlockType)arg6;
+ (id)invokePermitEvent:(id)arg1 invocationData:(id)arg2 url:(id)arg3 jsApi:(id)arg4 responseCallback:(CDUnknownBlockType)arg5;
+ (id)invokePermitEvent:(id)arg1 invocation:(id)arg2 invocationData:(id)arg3 url:(id)arg4 jsApi:(id)arg5 responseCallback:(CDUnknownBlockType)arg6;
+ (id)invokeBeforeEvent:(id)arg1 invocationData:(id)arg2 url:(id)arg3 jsApi:(id)arg4 responseCallback:(CDUnknownBlockType)arg5;
+ (id)invokeBeforeEvent:(id)arg1 invocation:(id)arg2 invocationData:(id)arg3 url:(id)arg4 jsApi:(id)arg5 responseCallback:(CDUnknownBlockType)arg6;
+ (id)startEvent:(id)arg1 invocationData:(id)arg2 url:(id)arg3;
+ (id)startEvent:(id)arg1 invocation:(id)arg2 invocationData:(id)arg3 url:(id)arg4;
+ (id)allEvent:(id)arg1 url:(id)arg2;
@property(nonatomic) _Bool isOnlyForWorker; // @synthesize isOnlyForWorker=_isOnlyForWorker;
@property(retain, nonatomic) PSDInvocation *invocation; // @synthesize invocation=_invocation;
@property(nonatomic) _Bool shouldSkipCallback; // @synthesize shouldSkipCallback=_shouldSkipCallback;
@property(copy, nonatomic) NSString *invocationSource; // @synthesize invocationSource=_invocationSource;
@property(readonly, nonatomic) CDUnknownBlockType responseCallback; // @synthesize responseCallback=_responseCallback;
@property(readonly, nonatomic) PSDJsApi *jsApi; // @synthesize jsApi=_jsApi;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDictionary *invocationResult; // @synthesize invocationResult=_invocationResult;
@property(readonly, nonatomic) NSDictionary *invocationData; // @synthesize invocationData=_invocationData;
@property(readonly, copy, nonatomic) NSString *invocationName; // @synthesize invocationName=_invocationName;
- (void).cxx_destruct;
- (id)description;
- (id)parentTraceId;
- (void)setParentTraceId:(id)arg1;
- (id)traceId;
- (void)setJsApi:(id)arg1;
- (void)setResponseCallback:(CDUnknownBlockType)arg1;
- (void)setUrl:(id)arg1;
- (void)setInvocationData:(id)arg1;
- (void)setInvocationName:(id)arg1;
- (_Bool)ignoreDiagnoseInputParams;
- (_Bool)ignoreDiagnoseOutputParams;
- (_Bool)ignoreDiagnose;

@end

