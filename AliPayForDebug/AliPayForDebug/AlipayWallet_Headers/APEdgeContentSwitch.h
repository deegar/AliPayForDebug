//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface APEdgeContentSwitch : NSObject
{
    NSDictionary *_configDict;
    NSDictionary *_configDictOnline;
}

@property(retain, nonatomic) NSDictionary *configDictOnline; // @synthesize configDictOnline=_configDictOnline;
@property(retain, nonatomic) NSDictionary *configDict; // @synthesize configDict=_configDict;
- (void).cxx_destruct;
- (_Bool)shouldEnterEdge;
- (_Bool)shouldUploadNohit:(unsigned long long)arg1;
- (_Bool)shouldUploadHit:(unsigned long long)arg1;
- (_Bool)shouldDetect:(unsigned long long)arg1;
- (id)initWithSceneType:(id)arg1 appID:(id)arg2;

@end

