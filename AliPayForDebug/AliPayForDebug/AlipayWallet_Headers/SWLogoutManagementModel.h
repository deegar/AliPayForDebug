//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SWRPCRequestProtocol-Protocol.h"

@class ANXUnbindReq, NSString;

@interface SWLogoutManagementModel : NSObject <SWRPCRequestProtocol>
{
    ANXUnbindReq *_request;
}

@property(retain, nonatomic) ANXUnbindReq *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)SWRPCComponentMethod;
- (id)SWRPCComponentBody;
- (id)SWRPCComponentHeaders;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

