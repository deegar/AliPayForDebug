//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface FHSharedDataManager : NSObject
{
    NSMutableSet *_recommandCardSet;
    NSMutableDictionary *_cdpSpaceViewDictionary;
}

+ (void)cleanAllCDPSpaceView;
+ (id)getCDPSpaceViewWithSpaceCode:(id)arg1;
+ (void)promotionViewDidFinishLoading:(id)arg1 spaceCode:(id)arg2;
+ (id)sharedDataManager;
@property(retain, nonatomic) NSMutableDictionary *cdpSpaceViewDictionary; // @synthesize cdpSpaceViewDictionary=_cdpSpaceViewDictionary;
@property(readonly, nonatomic) NSMutableSet *recommandCardSet; // @synthesize recommandCardSet=_recommandCardSet;
- (void).cxx_destruct;
- (id)init;

@end

