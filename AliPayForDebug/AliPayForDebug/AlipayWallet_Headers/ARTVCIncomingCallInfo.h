//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARTVCIncomingCallInfo : NSObject
{
    NSString *_roomId;
    NSString *_callId;
    NSString *_peerUid;
    long long _function;
}

@property(nonatomic) long long function; // @synthesize function=_function;
@property(copy, nonatomic) NSString *peerUid; // @synthesize peerUid=_peerUid;
@property(copy, nonatomic) NSString *callId; // @synthesize callId=_callId;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end

