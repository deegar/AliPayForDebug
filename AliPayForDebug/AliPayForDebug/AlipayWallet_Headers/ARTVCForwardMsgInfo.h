//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARTVCForwardMsgInfo : NSObject
{
    int _type;
    NSString *_msg;
    NSString *_roomId;
    NSString *_peerUid;
    NSString *_msgId;
    long long _timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *peerUid; // @synthesize peerUid=_peerUid;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;

@end
