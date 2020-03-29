//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BeeDetectPornConfigItem, BeeDetectPornImageInfo, BeeDetectPornSourceItem, NSString;
@protocol BeeDetectSensitiveComponentDelegate;

@interface BeeDetectSensitiveWordComponent : NSObject
{
    _Bool _needDetectImage;
    _Bool _isRegistered;
    _Bool _isRunning;
    NSString *_modelId;
    id <BeeDetectSensitiveComponentDelegate> _delegate;
    BeeDetectPornConfigItem *_configItem;
    BeeDetectPornSourceItem *_sourceItem;
    BeeDetectPornImageInfo *_detectItem;
    long long _statusCode;
    long long _detectCount;
}

@property(nonatomic) long long detectCount; // @synthesize detectCount=_detectCount;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool isRegistered; // @synthesize isRegistered=_isRegistered;
@property(retain, nonatomic) BeeDetectPornImageInfo *detectItem; // @synthesize detectItem=_detectItem;
@property(retain, nonatomic) BeeDetectPornSourceItem *sourceItem; // @synthesize sourceItem=_sourceItem;
@property(retain, nonatomic) BeeDetectPornConfigItem *configItem; // @synthesize configItem=_configItem;
@property(nonatomic) __weak id <BeeDetectSensitiveComponentDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needDetectImage; // @synthesize needDetectImage=_needDetectImage;
@property(copy, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
- (void).cxx_destruct;
- (id)detectSensitivesWord:(id)arg1;
- (void)unRegistAIComponent;
- (void)registAIComponent;
- (_Bool)isInWhiteList:(id)arg1;
- (void)initDetectSensitiveWord;
- (void)detectImageInfo:(id)arg1;
- (void)startDetectWithSourceItem:(id)arg1;
- (void)deInit;
- (id)initWithConfigItem:(id)arg1;

@end

