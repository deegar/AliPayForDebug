//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CSNativeCardViewProtocol-Protocol.h"

@class NSString;

@interface ALPassTraficCard : NSObject <CSNativeCardViewProtocol>
{
}

+ (id)spmParamsForCard:(id)arg1 cityCode:(id)arg2 index:(long long)arg3 isActionBtn:(_Bool)arg4;
+ (id)spmIdForCard:(id)arg1 cardItem:(id)arg2 isActionBtn:(_Bool)arg3;
+ (void)addClickEvent:(id)arg1 spmId:(id)arg2 jumpUrl:(id)arg3;
+ (id)createCSNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

