//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APLoginRefreshManager : NSObject
{
    unsigned int _rpcSeq;
    unsigned int _rpcRspSeq;
}

+ (id)shareInstance;
@property(nonatomic) unsigned int rpcRspSeq; // @synthesize rpcRspSeq=_rpcRspSeq;
@property(nonatomic) unsigned int rpcSeq; // @synthesize rpcSeq=_rpcSeq;
- (_Bool)checkInRPC:(unsigned int)arg1 method:(id)arg2;
- (unsigned int)recordRpc:(id)arg1;
- (id)init;

@end

