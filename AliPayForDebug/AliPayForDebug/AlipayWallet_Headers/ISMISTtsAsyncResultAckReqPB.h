//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString;

@interface ISMISTtsAsyncResultAckReqPB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) NSString *bizName; // @dynamic bizName;
@property(readonly) _Bool hasBizName; // @dynamic hasBizName;
@property(readonly) _Bool hasRequestId; // @dynamic hasRequestId;
@property(readonly) _Bool hasSessionId; // @dynamic hasSessionId;
@property(readonly) _Bool hasStatus; // @dynamic hasStatus;
@property(readonly) _Bool hasSubBiz; // @dynamic hasSubBiz;
@property(readonly) _Bool hasUid; // @dynamic hasUid;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(nonatomic) long long requestId; // @dynamic requestId;
@property(retain, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) NSString *subBiz; // @dynamic subBiz;
@property(retain, nonatomic) NSString *uid; // @dynamic uid;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end

