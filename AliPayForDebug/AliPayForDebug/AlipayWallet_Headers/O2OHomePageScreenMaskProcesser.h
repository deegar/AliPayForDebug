//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMaskProcesser.h"

#import "O2OChannelMaskViewDelegate-Protocol.h"

@class MYPromotionConfigModel, NSString, O2OCommonCDPObject;

@interface O2OHomePageScreenMaskProcesser : O2OMaskProcesser <O2OChannelMaskViewDelegate>
{
    _Bool _hasMaskTap;
    O2OCommonCDPObject *_cdpObject;
    long long _priority;
    MYPromotionConfigModel *_mayaConfig;
}

+ (id)maskObjectWithSpaceInfo:(id)arg1;
@property(retain, nonatomic) MYPromotionConfigModel *mayaConfig; // @synthesize mayaConfig=_mayaConfig;
@property(nonatomic) _Bool hasMaskTap; // @synthesize hasMaskTap=_hasMaskTap;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) O2OCommonCDPObject *cdpObject; // @synthesize cdpObject=_cdpObject;
- (void).cxx_destruct;
- (void)mayaDidHide;
- (void)hideMaskView;
- (void)tapCancleImage;
- (void)tapMaskImage;
- (void)showMaskView;
- (_Bool)isMayaMask;
- (_Bool)available;
- (void)check;
- (void)process;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

