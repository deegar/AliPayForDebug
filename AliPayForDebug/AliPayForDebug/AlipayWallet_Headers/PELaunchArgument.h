//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PELaunchArgument : NSObject
{
    NSString *_pAmount;
    NSString *_rUserId;
    NSString *_memo;
    NSString *_actionType;
    NSString *_source;
    NSString *_codeId;
    NSString *_extStr;
    NSString *_bundleId;
}

@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(retain, nonatomic) NSString *extStr; // @synthesize extStr=_extStr;
@property(retain, nonatomic) NSString *codeId; // @synthesize codeId=_codeId;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *rUserId; // @synthesize rUserId=_rUserId;
@property(retain, nonatomic) NSString *pAmount; // @synthesize pAmount=_pAmount;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long bizAction;

@end

