//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSString;

@interface PFStore : NSObject
{
    NSArray *_tagInfos;
    NSString *_tipString;
    NSString *_noDelayTipString;
    NSString *_tipUrl;
    NSString *_addStockText;
    NSString *_addStockScheme;
    NSString *_remindScheme;
    NSDictionary *_areaColorMap;
    NSArray *_menuGroupNames;
    NSArray *_showingStockArray;
    NSMutableDictionary *_stateToBlockMap;
    NSMapTable *_observerToStateMap;
}

+ (id)sharedStore;
@property(retain, nonatomic) NSMapTable *observerToStateMap; // @synthesize observerToStateMap=_observerToStateMap;
@property(retain, nonatomic) NSMutableDictionary *stateToBlockMap; // @synthesize stateToBlockMap=_stateToBlockMap;
@property(retain, nonatomic) NSArray *showingStockArray; // @synthesize showingStockArray=_showingStockArray;
@property(retain, nonatomic) NSArray *menuGroupNames; // @synthesize menuGroupNames=_menuGroupNames;
@property(retain, nonatomic) NSDictionary *areaColorMap; // @synthesize areaColorMap=_areaColorMap;
@property(retain, nonatomic) NSString *remindScheme; // @synthesize remindScheme=_remindScheme;
@property(retain, nonatomic) NSString *addStockScheme; // @synthesize addStockScheme=_addStockScheme;
@property(retain, nonatomic) NSString *addStockText; // @synthesize addStockText=_addStockText;
@property(retain, nonatomic) NSString *tipUrl; // @synthesize tipUrl=_tipUrl;
@property(retain, nonatomic) NSString *noDelayTipString; // @synthesize noDelayTipString=_noDelayTipString;
@property(retain, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *tagInfos; // @synthesize tagInfos=_tagInfos;
- (_Bool)isFirstHigherPriority:(id)arg1 second:(id)arg2;
- (_Bool)isStockNormalStatus:(id)arg1 showType:(int)arg2;
- (id)sortOrFilterDataByType:(id)arg1 showType:(int)arg2 sortType:(int)arg3;
- (id)init;

@end

