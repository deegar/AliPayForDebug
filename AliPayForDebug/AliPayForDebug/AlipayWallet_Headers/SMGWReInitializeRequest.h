//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SMGWBasicRequest.h"

@class NSString;

@interface SMGWReInitializeRequest : SMGWBasicRequest
{
    NSString *_sign;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
- (void).cxx_destruct;
- (id)init;

@end

