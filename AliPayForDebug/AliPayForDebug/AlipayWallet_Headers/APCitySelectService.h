//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BeeCityPickerVCDelegate-Protocol.h"
#import "DTService-Protocol.h"

@class APCitySelectCacheInfo, APSelectCityInfo, NSString;

@interface APCitySelectService : NSObject <BeeCityPickerVCDelegate, DTService>
{
    _Bool _homeEntryHidden;
    APCitySelectCacheInfo *_citySelectCacheInfo;
}

@property(retain, nonatomic) APCitySelectCacheInfo *citySelectCacheInfo; // @synthesize citySelectCacheInfo=_citySelectCacheInfo;
@property(nonatomic) _Bool homeEntryHidden; // @synthesize homeEntryHidden=_homeEntryHidden;
- (void).cxx_destruct;
- (void)willDestroy;
- (void)didCreate;
- (void)start;
- (void)cityPickerController:(id)arg1 didSelectCity:(id)arg2 needPopCityPicker:(_Bool)arg3;
@property(retain, nonatomic) APSelectCityInfo *selectedCity;
@property(readonly, nonatomic) APSelectCityInfo *homeSelectedCity;
- (void)setHideHomeEntry:(_Bool)arg1;
- (void)disableService:(_Bool)arg1;
- (void)showCitySelectViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

