//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTPRODBaseRpcReq.h"

@class NSArray;

@interface KBCONTENTPRODBatchFollowRpcReq : KBCONTENTPRODBaseRpcReq
{
    int _action;
    NSArray *_targets;
}

+ (Class)targetsElementClass;
@property(retain, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(nonatomic) int action; // @synthesize action=_action;
- (void).cxx_destruct;

@end
