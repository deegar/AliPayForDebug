//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SocialInterfacePrivateProtocol-Protocol.h"

@class NSString;

@interface SocialInterface : NSObject <SocialInterfacePrivateProtocol>
{
}

+ (id)decodeData:(id)arg1;
+ (id)readFileWithPath:(id)arg1;
+ (id)readFileAndDecodeWithPath:(id)arg1;
+ (id)loadSyncPageData:(id)arg1 paths:(id)arg2;
+ (id)imageByApplyingBlurToImage:(id)arg1 withRadius:(double)arg2 tintColor:(id)arg3 saturationDeltaFactor:(double)arg4 maskImage:(id)arg5;
+ (id)createRoundedRectHeadImg:(id)arg1 size:(struct CGSize)arg2 radius:(long long)arg3;
+ (void)downloadWithIdentifer:(id)arg1 params:(id)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

