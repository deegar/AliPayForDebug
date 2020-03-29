//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MunionFlowLimitConfig : NSObject
{
    CDUnknownBlockType _callback;
    NSDictionary *_configuration;
    NSDictionary *_defaultData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *defaultData; // @synthesize defaultData=_defaultData;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)parseConfiguration:(id)arg1;
- (void)receiveOrangeConfigUpdate:(id)arg1;
- (_Bool)loadConfigurationFromOrange;
- (_Bool)loadConfigurationFromConfigService;
- (void)loadConfiguration;
- (void)dealloc;
- (id)init;

@end

