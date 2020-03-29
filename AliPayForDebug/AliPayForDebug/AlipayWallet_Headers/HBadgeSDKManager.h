//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BadgeSdkServiceProtocol-Protocol.h"

@class NSString;

@interface HBadgeSDKManager : NSObject <BadgeSdkServiceProtocol>
{
    _Bool _checkingBadgeSDKData;
    NSString *_spaceCode;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic, getter=isCheckingBadgeSDKData) _Bool checkingBadgeSDKData; // @synthesize checkingBadgeSDKData=_checkingBadgeSDKData;
- (void).cxx_destruct;
- (void)dealloc;
- (void)badgeSpaceInfoUpdate:(id)arg1 spaceCode:(id)arg2;
- (void)reportBadgeSDKAction:(long long)arg1 badgeInfo:(id)arg2;
- (void)checkBadgeSDKData;
- (id)initWithSpaceCode:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

