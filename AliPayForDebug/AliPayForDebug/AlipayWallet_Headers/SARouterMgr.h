//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SADyncRouter;

@interface SARouterMgr : NSObject
{
    SADyncRouter *_dyncRouter;
}

@property(retain, nonatomic) SADyncRouter *dyncRouter; // @synthesize dyncRouter=_dyncRouter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelRouting;
- (void)routingWithParams:(id)arg1 Delegate:(id)arg2;

@end
