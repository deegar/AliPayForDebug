//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMCameraControllerDelegate-Protocol.h"

@class APMCameraController, NSString, UIViewController;

@interface AIPlatformInterface : NSObject <APMCameraControllerDelegate>
{
    APMCameraController *vController;
    CDUnknownBlockType bcallback;
    NSString *businessID;
    NSString *companyID;
    NSString *lastReadResult;
    NSString *maxRecResult;
    NSString *publicurl;
    UIViewController *lastvc;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)cameraControllerDidConfirmAlert:(id)arg1;
- (void)cameraControllerDidCancelAlert:(id)arg1;
- (void)exitVC;
- (void)cameraController:(id)arg1 didCancelProcessingImage:(id)arg2;
- (void)recWithCloudBrain:(id)arg1 cameraResult:(id)arg2;
- (void)handleErr:(unsigned long long)arg1;
- (void)uploadAndRecWithCloudBrain:(id)arg1 withResult:(id)arg2;
- (id)buildResJson:(struct CGRect)arg1 width:(int)arg2 height:(int)arg3;
- (void)cameraController:(id)arg1 willStartProcessingImage:(id)arg2;
- (void)cameraController:(id)arg1 willStartPreviewingImage:(id)arg2;
- (void)startAI:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
