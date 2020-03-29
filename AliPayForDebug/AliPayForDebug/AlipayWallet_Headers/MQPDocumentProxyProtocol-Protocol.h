//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ImmPayEventHandler, ImmPayViewHandler, MQPBaseService, MQPPaySession, MQPTrackModel, NSDictionary, NSString, UIColor;

@protocol MQPDocumentProxyProtocol <NSObject>
@property(readonly) ImmPayViewHandler *viewHandler;
@property(readonly) ImmPayEventHandler *eh;
@property(readonly) MQPPaySession *session;
@property(readonly) MQPTrackModel *log;
@property(nonatomic) __weak MQPBaseService *service;
@property(retain, nonatomic) NSDictionary *extInfo;
@property(retain, nonatomic) NSDictionary *docConfig;
@property(copy, nonatomic) NSString *lastErrDesc;
@property(copy, nonatomic) NSString *time;
@property(copy, nonatomic) NSString *tplVersion;
@property(copy, nonatomic) NSString *tplId;
@property(copy, nonatomic) NSString *statusBarStyle;
@property(nonatomic) _Bool isBnframe;
@property(retain, nonatomic) UIColor *navBarColor;

@optional
- (void)fetchDocConfig;
- (void)onGestureBack;
@end

