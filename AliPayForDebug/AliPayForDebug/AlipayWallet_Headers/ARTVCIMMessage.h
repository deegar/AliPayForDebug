//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARTVCParamsProtocol-Protocol.h"

@class NSString;

@interface ARTVCIMMessage : NSObject <ARTVCParamsProtocol>
{
    NSString *_msg;
    unsigned long long _msgId;
    double _timestamp;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long msgId; // @synthesize msgId=_msgId;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isValid;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

