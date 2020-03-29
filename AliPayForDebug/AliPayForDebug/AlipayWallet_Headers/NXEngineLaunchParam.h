//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol NXEngineCreateRender;

@interface NXEngineLaunchParam : NSObject
{
    _Bool _prepareCubeParamFail;
    NSString *_appId;
    NSMutableDictionary *_options;
    NSDictionary *_latestCubeFMInfo;
    long long _renderType;
    id <NXEngineCreateRender> _renderCreator;
}

+ (id)paramsWithAppId:(id)arg1;
@property(nonatomic) __weak id <NXEngineCreateRender> renderCreator; // @synthesize renderCreator=_renderCreator;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(retain, nonatomic) NSDictionary *latestCubeFMInfo; // @synthesize latestCubeFMInfo=_latestCubeFMInfo;
@property(nonatomic) _Bool prepareCubeParamFail; // @synthesize prepareCubeParamFail=_prepareCubeParamFail;
@property(retain, nonatomic) NSMutableDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)init;

@end

