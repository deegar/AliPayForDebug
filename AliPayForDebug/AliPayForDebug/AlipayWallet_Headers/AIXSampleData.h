//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AIXSampleData : NSObject
{
    _Bool _marked;
    NSString *_sampleId;
    NSString *_time;
    NSString *_sceneCode;
    NSString *_modelId;
    NSString *_featureData;
    NSString *_modelOutput;
    NSString *_label;
    NSString *_rawData;
}

@property(retain, nonatomic) NSString *rawData; // @synthesize rawData=_rawData;
@property(nonatomic) _Bool marked; // @synthesize marked=_marked;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *modelOutput; // @synthesize modelOutput=_modelOutput;
@property(retain, nonatomic) NSString *featureData; // @synthesize featureData=_featureData;
@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId=_sampleId;
- (void).cxx_destruct;

@end

