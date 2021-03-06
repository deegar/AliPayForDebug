//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPBaseService.h"

@class UIViewController;
@protocol MQPActionPolicyDelegate, MQPDocumentProtocol;

@interface MQPPageRenderService : MQPBaseService
{
    UIViewController<MQPDocumentProtocol> *_pageDoc;
    long long _pageCount;
    id <MQPActionPolicyDelegate> _actionPolicyDelegate;
}

+ (_Bool)isSupportMulti;
@property(nonatomic) __weak id <MQPActionPolicyDelegate> actionPolicyDelegate; // @synthesize actionPolicyDelegate=_actionPolicyDelegate;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) __weak UIViewController<MQPDocumentProtocol> *pageDoc; // @synthesize pageDoc=_pageDoc;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didStop:(id)arg1;
- (void)checkExit;
- (void)pageCreate:(id)arg1;
- (void)pageRelease:(id)arg1;
- (void)handleEvent:(id)arg1 param:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)handleMessage:(id)arg1;
- (id)init;

@end

