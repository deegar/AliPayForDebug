//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BeautyAlgorithmDelegate-Protocol.h"

@class NSDate, NSString;
@protocol APMBeautyManagerDelegate, BeautyAlgorithm;

@interface APMBeautyManager : NSObject <BeautyAlgorithmDelegate>
{
    _Bool _enableBeautyMode;
    _Bool _isMirror;
    _Bool _isCapturingStillImage;
    id <APMBeautyManagerDelegate> _delegate;
    double _beautyLevel;
    NSString *_materialpath;
    long long _filtertype;
    long long _videoOrientation;
    id <BeautyAlgorithm> _beautyAlgorithm;
    NSDate *_startTime;
    unsigned long long _frameCount;
    double _totalCostTime;
}

+ (void)initBeautyManagerContext;
@property(nonatomic) double totalCostTime; // @synthesize totalCostTime=_totalCostTime;
@property(nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) id <BeautyAlgorithm> beautyAlgorithm; // @synthesize beautyAlgorithm=_beautyAlgorithm;
@property(nonatomic) _Bool isCapturingStillImage; // @synthesize isCapturingStillImage=_isCapturingStillImage;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) _Bool isMirror; // @synthesize isMirror=_isMirror;
@property(nonatomic) long long filtertype; // @synthesize filtertype=_filtertype;
@property(retain, nonatomic) NSString *materialpath; // @synthesize materialpath=_materialpath;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) _Bool enableBeautyMode; // @synthesize enableBeautyMode=_enableBeautyMode;
@property(nonatomic) __weak id <APMBeautyManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beautyAlgorithm:(id)arg1 texture:(unsigned int)arg2 renderinfo:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
@property(readonly, nonatomic) unsigned long long beautyMode;
@property(readonly, nonatomic) unsigned long long beautyDescription;
- (id)proceedImage:(id)arg1;
- (void)proceedImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)performance:(double)arg1;
- (id)captureImage;
- (void)proceedTexture:(unsigned int)arg1 toSize:(struct CGSize)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)context;
- (void)uninit;
- (void)initBeautyManager;
- (id)initWithSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (id)init;
- (void)performance:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

