//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BadgeSdkServiceProtocol-Protocol.h"

@class FHAssetHeaderEngine, NSArray, NSMutableDictionary, NSString;

@interface FHMarkManager : NSObject <BadgeSdkServiceProtocol>
{
    NSMutableDictionary *_obseverBlocks;
    NSArray *_assetMarksSnapshot;
    NSArray *_assetMarks;
    NSArray *_cardMarks;
    NSArray *_tabMarks;
    FHAssetHeaderEngine *_weakAssetsHeaderEngine;
}

+ (void)reportMarkExposure:(id)arg1;
+ (void)markModelClicked:(id)arg1 clickType:(unsigned long long)arg2;
+ (id)sharedInstance;
@property(nonatomic) __weak FHAssetHeaderEngine *weakAssetsHeaderEngine; // @synthesize weakAssetsHeaderEngine=_weakAssetsHeaderEngine;
@property(retain, nonatomic) NSArray *tabMarks; // @synthesize tabMarks=_tabMarks;
@property(retain, nonatomic) NSArray *cardMarks; // @synthesize cardMarks=_cardMarks;
@property(retain, nonatomic) NSArray *assetMarks; // @synthesize assetMarks=_assetMarks;
- (void).cxx_destruct;
- (id)assetMarksSnapshot;
- (void)cleanAssetMarksSnapshot;
- (void)makeAssetMarksSnapshot;
- (void)badgeSpaceInfoUpdate:(id)arg1 spaceCode:(id)arg2;
- (void)removeObserver;
- (void)checkForSpaceCodes:(id)arg1;
- (void)addObserverForSpaceCode:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearData;
- (void)updateCurrentMarksWithCompletion:(CDUnknownBlockType)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

