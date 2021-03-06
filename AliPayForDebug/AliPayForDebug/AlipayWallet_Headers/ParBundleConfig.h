//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface ParBundleConfig : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasConfigKey;
    _Bool _hasConfigValue;
    NSString *_configKey;
    NSString *_configValue;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *configValue; // @synthesize configValue=_configValue;
@property(retain, nonatomic) NSString *configKey; // @synthesize configKey=_configKey;
@property(readonly) _Bool hasConfigValue; // @synthesize hasConfigValue=_hasConfigValue;
@property(readonly) _Bool hasConfigKey; // @synthesize hasConfigKey=_hasConfigKey;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

