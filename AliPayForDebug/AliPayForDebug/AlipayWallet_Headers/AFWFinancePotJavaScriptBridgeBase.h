//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol AFWFinancePotJavascriptBridgeBaseDelegate;

@interface AFWFinancePotJavaScriptBridgeBase : NSObject
{
    id <AFWFinancePotJavascriptBridgeBaseDelegate> _delegate;
    NSMutableDictionary *_responseCallbacks;
}

@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
@property(nonatomic) __weak id <AFWFinancePotJavascriptBridgeBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_unserializeMessage:(id)arg1;
- (id)_serializeMessage:(struct NSDictionary *)arg1;
- (void)_dispatchMessage:(struct NSDictionary *)arg1;
- (void)_dispatchMessage:(struct NSDictionary *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)dispatchMessage:(struct NSDictionary *)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isQueueMessageURL:(id)arg1;
- (id)webViewJavascriptCheckCommand;
- (id)webViewJavascriptFetchQueyCommand;
- (void)flushMessageQueue:(id)arg1;

@end

