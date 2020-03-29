//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

@class NSMutableDictionary;

@interface Plugin4Image : NBPluginBase
{
    NSMutableDictionary *_streamImageCaches;
    NSMutableDictionary *_hevcImages;
    NSMutableDictionary *_transferRelations;
}

@property(retain, nonatomic) NSMutableDictionary *transferRelations; // @synthesize transferRelations=_transferRelations;
@property(retain, nonatomic) NSMutableDictionary *hevcImages; // @synthesize hevcImages=_hevcImages;
@property(retain, nonatomic) NSMutableDictionary *streamImageCaches; // @synthesize streamImageCaches=_streamImageCaches;
- (void).cxx_destruct;
- (_Bool)enableHECVSuppport:(id)arg1 appId:(id)arg2;
- (_Bool)enableWebpDecodeLog;
- (void)handleEvent:(id)arg1;
- (_Bool)isWebPType:(id)arg1;
- (id)name;
- (void)addProxy;
- (id)init;
- (void)dealloc;

@end

