//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_semaphore;

@interface CKHandlerManager : NSObject
{
    NSDictionary *_handlers;
    NSObject<OS_dispatch_semaphore> *_handlersTicket;
}

+ (id)shared;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *handlersTicket; // @synthesize handlersTicket=_handlersTicket;
@property(copy, nonatomic) NSDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (id)handlerForProtocol:(id)arg1;
- (void)registerHandler:(id)arg1 withProtocol:(id)arg2;
- (id)init;

@end

