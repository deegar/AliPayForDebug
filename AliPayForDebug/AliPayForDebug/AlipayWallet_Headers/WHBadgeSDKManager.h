//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BadgeSdkServiceProtocol-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface WHBadgeSDKManager : NSObject <BadgeSdkServiceProtocol>
{
    _Bool _isUserCenterVC;
    _Bool _isSafeExcuteRollback;
    NSArray *_spaceCodes;
    CDUnknownBlockType _completion;
    NSMutableDictionary *_badgeSpaceInfos;
    NSMutableArray *_exposureBadges;
}

@property(nonatomic) _Bool isSafeExcuteRollback; // @synthesize isSafeExcuteRollback=_isSafeExcuteRollback;
@property(retain, nonatomic) NSMutableArray *exposureBadges; // @synthesize exposureBadges=_exposureBadges;
@property(retain, nonatomic) NSMutableDictionary *badgeSpaceInfos; // @synthesize badgeSpaceInfos=_badgeSpaceInfos;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSArray *spaceCodes; // @synthesize spaceCodes=_spaceCodes;
@property(nonatomic) _Bool isUserCenterVC; // @synthesize isUserCenterVC=_isUserCenterVC;
- (void).cxx_destruct;
- (void)safeExcuteBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)badgeSpaceInfoUpdate:(id)arg1 spaceCode:(id)arg2;
- (void)cleanCache;
- (id)getBadgeSpaceInfo:(id)arg1 widgetId:(id)arg2 matchEdition:(id)arg3;
- (_Bool)hasExposureBadge:(id)arg1;
- (void)reportBadgeSDKAction:(long long)arg1 badgeInfo:(id)arg2 spaceCode:(id)arg3;
- (void)checkBadgeSDKData;
- (void)resetExposureBadges;
- (id)initWithSpaceCodes:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

