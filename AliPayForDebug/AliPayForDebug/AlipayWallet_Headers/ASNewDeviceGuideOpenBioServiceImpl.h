//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASNewDeviceGuideOpenBioService-Protocol.h"

@class NSMutableArray, NSString;

@interface ASNewDeviceGuideOpenBioServiceImpl : NSObject <ASNewDeviceGuideOpenBioService>
{
    _Bool _isChangeAccount;
    NSMutableArray *_deviceAccountList;
}

@property(retain, nonatomic) NSMutableArray *deviceAccountList; // @synthesize deviceAccountList=_deviceAccountList;
- (void).cxx_destruct;
- (void)moniterNoShowGuideView:(id)arg1;
- (void)startH5WithResult:(id)arg1;
- (_Bool)currentIsHomeVC;
- (long long)tabbarCurrentSelectIndex;
- (id)currentShowController;
- (id)tabbarVCS;
- (void)bicRecommondRpc;
- (void)loginSuccess:(id)arg1;
- (void)start;
- (void)didCreate;
- (void)willDestroy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

