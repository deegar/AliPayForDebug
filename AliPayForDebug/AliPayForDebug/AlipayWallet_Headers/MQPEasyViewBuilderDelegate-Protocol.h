//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSNumber, NSString, UIViewController, WKTemplateModel;
@protocol MQPDocumentProtocol;

@protocol MQPEasyViewBuilderDelegate <NSObject>

@optional
- (void)onUpdateStatusChange:(long long)arg1;
- (void)onUpdateTimeOut:(_Bool)arg1 withBlock:(void (^)(_Bool))arg2;
- (id)JSInvoke;
- (void)logResEvent:(NSString *)arg1 targetHash:(NSString *)arg2 succ:(_Bool)arg3 netType:(NSString *)arg4 time:(NSNumber *)arg5 error:(NSError *)arg6 traceType:(NSString *)arg7 isRender:(NSString *)arg8;
- (void)logTemplateEvent:(NSString *)arg1 localTpl:(WKTemplateModel *)arg2 tmsTpl:(WKTemplateModel *)arg3 succ:(_Bool)arg4 netType:(NSString *)arg5 time:(NSNumber *)arg6 error:(NSError *)arg7 traceType:(NSString *)arg8 isRender:(NSString *)arg9;
- (NSString *)onGetCustomAttr:(NSString *)arg1;
- (NSString *)onReadFile:(NSString *)arg1;
- (_Bool)handleEvent:(NSDictionary *)arg1 doc:(UIViewController<MQPDocumentProtocol> *)arg2 block:(void (^)(NSDictionary *))arg3;
- (_Bool)handleEvent:(NSDictionary *)arg1 doc:(UIViewController<MQPDocumentProtocol> *)arg2;
@end

