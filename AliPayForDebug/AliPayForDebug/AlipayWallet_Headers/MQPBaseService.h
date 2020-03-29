//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQPEventHandlerConfigDelegate-Protocol.h"

@class ImmPayEventHandler, ImmPayFlyBird, ImmPayViewHandler, MQPPaySession, MQPTrackModel, NSString, UINavigationController, UIWindow;
@protocol MQPServiceDelegate;

@interface MQPBaseService : NSObject <MQPEventHandlerConfigDelegate>
{
    _Bool _isRunning;
    MQPPaySession *_session;
    ImmPayViewHandler *_viewHandler;
    ImmPayEventHandler *_eventHandler;
    ImmPayFlyBird *_flybird;
    UIWindow *_window;
    MQPBaseService *_subService;
    MQPBaseService *_parentService;
    UINavigationController *_nav;
    id <MQPServiceDelegate> _delegate;
}

+ (_Bool)isSupportMulti;
@property(nonatomic) __weak id <MQPServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UINavigationController *nav; // @synthesize nav=_nav;
@property(nonatomic) __weak MQPBaseService *parentService; // @synthesize parentService=_parentService;
@property(retain, nonatomic) MQPBaseService *subService; // @synthesize subService=_subService;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) ImmPayFlyBird *flybird; // @synthesize flybird=_flybird;
@property(retain, nonatomic) ImmPayEventHandler *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) ImmPayViewHandler *viewHandler; // @synthesize viewHandler=_viewHandler;
@property(retain, nonatomic) MQPPaySession *session; // @synthesize session=_session;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void).cxx_destruct;
@property(readonly) MQPTrackModel *log; // @dynamic log;
- (void)handleMessage:(id)arg1;
- (void)reset;
- (void)didStop:(id)arg1;
- (void)stop:(id)arg1;
- (void)forkWithOptions:(id)arg1;
- (_Bool)startWithOptions:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

