//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AFWStockJavaScriptBridgeProcedure : NSObject
{
    _Bool _isCanceled;
    NSString *_handlerName;
    NSDictionary *_data;
    NSString *_callbackId;
    NSString *_responseId;
}

@property(nonatomic) _Bool isCanceled; // @synthesize isCanceled=_isCanceled;
@property(retain, nonatomic) NSString *responseId; // @synthesize responseId=_responseId;
@property(retain, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
- (void).cxx_destruct;
- (id)description;

@end

