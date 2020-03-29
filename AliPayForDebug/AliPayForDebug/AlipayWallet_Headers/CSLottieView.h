//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BeeLottiePlayerProtocol-Protocol.h"
#import "CKWidgetProtocol-Protocol.h"

@class BeeLottiePlayer, NSString;

@interface CSLottieView : UIView <CKWidgetProtocol, BeeLottiePlayerProtocol>
{
    NSString *_instanceId;
    BeeLottiePlayer *_lottiePlayer;
}

+ (id)mq_export_method_async_143;
+ (id)mq_export_method_async_142;
+ (id)mq_export_method_async_141;
+ (id)mq_export_method_async_140;
+ (id)mq_export_method_async_139;
+ (id)mq_export_method_async_138;
+ (id)mq_export_method_async_137;
+ (id)mq_export_method_async_136;
+ (id)mq_export_method_async_135;
+ (id)mq_export_method_async_134;
+ (id)mq_export_method_async_133;
+ (id)createView:(id)arg1 reuse:(id)arg2 size:(struct CGSize)arg3;
@property(retain, nonatomic) BeeLottiePlayer *lottiePlayer; // @synthesize lottiePlayer=_lottiePlayer;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void).cxx_destruct;
- (void)fillVariableValue:(id)arg1;
- (void)downgradeToPlaceholder;
- (void)getDuration:(CDUnknownBlockType)arg1;
- (void)playFromMinToMaxFrame:(id)arg1;
- (void)playFromMinToMaxProgress:(id)arg1;
- (void)goToAndPlay:(id)arg1;
- (void)goToAndStop:(id)arg1;
- (void)setSpeed:(id)arg1;
- (void)pause;
- (void)stop;
- (void)play;
- (void)updateLottieAttrsAndEvents:(id)arg1;
- (void)sendLottieAnimationEvent:(id)arg1 data:(id)arg2;
- (void)getResourceDataWitRequest:(id)arg1;
- (void)updateComponentData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

