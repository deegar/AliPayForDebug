//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BadgeSdkServiceProtocol-Protocol.h"

@class BSBadgeSpaceInfo, NSArray, NSDictionary, NSString;

@interface WHLayoutProxy : NSObject <BadgeSdkServiceProtocol>
{
    NSArray *_renderItems;
    NSDictionary *_nativeTemplateMap;
    BSBadgeSpaceInfo *_badgeSpaceInfo;
}

@property(retain, nonatomic) BSBadgeSpaceInfo *badgeSpaceInfo; // @synthesize badgeSpaceInfo=_badgeSpaceInfo;
@property(readonly, nonatomic) NSDictionary *nativeTemplateMap; // @synthesize nativeTemplateMap=_nativeTemplateMap;
@property(readonly, nonatomic) NSArray *renderItems; // @synthesize renderItems=_renderItems;
- (void).cxx_destruct;
- (id)badgeInfoWithWidgetId:(id)arg1;
- (void)updateCardSpaceInfo:(id)arg1;
- (void)badgeSpaceInfoUpdate:(id)arg1 spaceCode:(id)arg2;
- (void)checkBadgeSDKData;
- (void)bootBadgeInit;
- (long long)indexOfCard:(id)arg1;
- (id)viewModelForRowAtIndexPath:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(long long)arg1;
- (struct CGSize)templateSizeWithCard:(id)arg1;
- (void)reloadWithCardList:(id)arg1;
- (void)reloadRenderItems;
- (void)bootInit;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

