//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSKLaunchpadDataSource-Protocol.h"
#import "APSKLaunchpadDelegate-Protocol.h"
#import "DTService-Protocol.h"

@class APSKLaunchpad, APSKShareOption, NSString, UIView;
@protocol APSKShareServiceDataSource, APSKShareServiceDelegate;

@interface APSKShareService : NSObject <APSKLaunchpadDataSource, APSKLaunchpadDelegate, DTService>
{
    UIView *_parentView;
    _Bool _ignoreCancelDelegate;
    id <APSKShareServiceDelegate> _delegate;
    id <APSKShareServiceDataSource> _dataSource;
    APSKLaunchpad *_launchPad;
    APSKShareOption *_baseOption;
}

@property(retain, nonatomic) APSKShareOption *baseOption; // @synthesize baseOption=_baseOption;
@property(retain, nonatomic) APSKLaunchpad *launchPad; // @synthesize launchPad=_launchPad;
@property(nonatomic) __weak id <APSKShareServiceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <APSKShareServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)gotoAppForChannel:(id)arg1;
- (id)getTargetUrl:(id)arg1 shareOption:(id)arg2;
- (void)getIcon:(CDUnknownBlockType)arg1;
- (void)composeQrImageWithCodeValue:(id)arg1 showIcon:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)triggerDelegate:(_Bool)arg1 error:(id)arg2 channel:(id)arg3;
- (void)shareWithShareContent:(id)arg1 shareOption:(id)arg2 launchPad:(id)arg3 channel:(id)arg4;
- (void)generateQrCode:(CDUnknownBlockType)arg1 useIcon:(_Bool)arg2;
- (void)downloadImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)sharingLaunchpad:(id)arg1 didSelectRecentItem:(id)arg2;
- (void)sharingLaunchpadDidDismiss:(id)arg1;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)handleSharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (id)mediaBusiness;
- (void)prepareShareToChannel:(id)arg1 shareOption:(id)arg2;
- (void)showLaunchPadForView:(id)arg1 option:(id)arg2 logInfos:(id)arg3;
- (void)startShareForView:(id)arg1 option:(id)arg2 dataSource:(id)arg3;
- (void)startShareForView:(id)arg1 option:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)willDestroy;
- (void)start;
- (_Bool)apsk_isUrlString:(id)arg1;
- (id)updateShareOption:(id)arg1 withPreResult:(id)arg2;
- (id)genPreRequestWithOption:(id)arg1 appId:(id)arg2;
- (void)saveImagePhotoAblum:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)fixShareOption:(id)arg1;
- (void)processShareOption:(id)arg1 forChannel:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

