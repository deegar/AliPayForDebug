//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext;

@interface H5JavaScriptContext : NSObject
{
    H5JavaScriptContext *_selfReference;
    JSContext *_context;
}

@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
@property(readonly, nonatomic) struct OpaqueJSContext *ctx;
- (id)initWithJSContext:(id)arg1;

@end

