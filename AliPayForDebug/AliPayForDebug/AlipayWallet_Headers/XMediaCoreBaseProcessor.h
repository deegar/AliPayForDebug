//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, XMediaCoreBizConfig;
@protocol XMediaCoreBaseProcessorDelegate;

@interface XMediaCoreBaseProcessor : NSObject
{
    _Bool _delayLoad;
    _Bool _standardResult;
    int _channel;
    XMediaCoreBizConfig *_config;
    long long _stateCode;
    NSArray *_modelPathArray;
    NSString *_modelId;
    double _initTime;
    double _procTime;
    NSString *_totalCostTime;
    id <XMediaCoreBaseProcessorDelegate> _procDelegate;
    NSDictionary *_cloudConfigDict;
}

@property(retain, nonatomic) NSDictionary *cloudConfigDict; // @synthesize cloudConfigDict=_cloudConfigDict;
@property(nonatomic) __weak id <XMediaCoreBaseProcessorDelegate> procDelegate; // @synthesize procDelegate=_procDelegate;
@property(retain, nonatomic) NSString *totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(nonatomic) double procTime; // @synthesize procTime=_procTime;
@property(nonatomic) double initTime; // @synthesize initTime=_initTime;
@property(nonatomic) _Bool standardResult; // @synthesize standardResult=_standardResult;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool delayLoad; // @synthesize delayLoad=_delayLoad;
@property(retain, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(retain, nonatomic) NSArray *modelPathArray; // @synthesize modelPathArray=_modelPathArray;
@property(nonatomic) long long stateCode; // @synthesize stateCode=_stateCode;
@property(retain, nonatomic) XMediaCoreBizConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)updateStandardjsonWithResult:(id)arg1 typeName:(id)arg2;
- (void)remoteLog;
- (void)remoteLogWithSeed:(id)arg1 ucId:(id)arg2 extParam:(id)arg3;
- (id)unreadyResult;
- (void)downloadModelWithId:(id)arg1 md5:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getLocalModelPathWithId:(id)arg1 md5:(id)arg2;
- (void)downloadModelAndUpdateState:(CDUnknownBlockType)arg1;
- (_Bool)checkIfModelExistedAndUpdateState;
- (void)updateStateWithFunctorCreate;
- (void)prepareModelAndFunctorCreateWithResultBlock:(CDUnknownBlockType)arg1;
- (void)reconstructOptions;
- (id)initWithConfig:(id)arg1;

@end

