//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPBNFrameProtocol-Protocol.h"
#import "MQPDocumentProxyProtocol-Protocol.h"

@class MQPDocumnetProxy, NSString;

@protocol MQPDocumentProtocol <MQPDocumentProxyProtocol, MQPBNFrameProtocol>
@property(readonly, nonatomic) _Bool isSupportPrerender;
@property(retain, nonatomic) MQPDocumnetProxy *documentProxy;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(nonatomic) _Bool navBarHidden;
@property(nonatomic) __weak id delegate;
- (void)onDestroy;
- (void)executeJS:(NSString *)arg1 withBlock:(void (^)(NSString *))arg2;
@end

