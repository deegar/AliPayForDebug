//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APVALogger : NSObject
{
}

+ (void)voiceAssistant_MTBIZ_Report:(id)arg1 subName:(id)arg2 failCode:(long long)arg3 params:(id)arg4;
+ (id)commonLogParams;
+ (void)preloadTemplateFailed:(id)arg1;
+ (void)transferCheckNoResult:(id)arg1;
+ (void)suggestClickLog:(id)arg1 searchId:(id)arg2;
+ (void)suggestShowLog:(id)arg1 searchId:(id)arg2;
+ (void)resultClickLog:(id)arg1;
+ (void)resultShowLog:(id)arg1;
+ (void)logHelpButtonClicked;
+ (void)logVoiceButtonClicked;
+ (void)logCancelVoiceClicked;

@end

