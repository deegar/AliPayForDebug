//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTService-Protocol.h"

@class NSString, TACAppDescriptor, TACTrackConfig;

@protocol TinyAppConfigService <DTService>
- (void)triggerUploadForApp:(NSString *)arg1 env:(NSString *)arg2;
- (void)onExitTinyApp:(TACAppDescriptor *)arg1;
- (void)onPauseTinyApp:(TACAppDescriptor *)arg1;
- (void)onStartTinyApp:(TACAppDescriptor *)arg1;
- (TACTrackConfig *)trackerConfigForApp:(NSString *)arg1;
- (_Bool)shouldTrackApp:(NSString *)arg1;
@end

