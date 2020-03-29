//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARINode.h"

#import "ARJsBridgeDelegate-Protocol.h"
#import "Ant3DViewDelegate-Protocol.h"

@class ARParModel, ARRenderBridge, Ant3DCameraController, Ant3DCameraView, Ant3DView, NSArray, NSString;

@interface ARRender : ARINode <Ant3DViewDelegate, ARJsBridgeDelegate>
{
    int _status;
    Ant3DView *_ant3DView;
    Ant3DCameraController *_ant3DCamera;
    Ant3DCameraView *_cameraView;
    ARParModel *_mainPar;
    NSArray *_pars;
    ARRenderBridge *_renderBridge;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) ARRenderBridge *renderBridge; // @synthesize renderBridge=_renderBridge;
@property(retain, nonatomic) NSArray *pars; // @synthesize pars=_pars;
@property(retain, nonatomic) ARParModel *mainPar; // @synthesize mainPar=_mainPar;
@property(retain, nonatomic) Ant3DCameraView *cameraView; // @synthesize cameraView=_cameraView;
@property(readonly, nonatomic) Ant3DCameraController *ant3DCamera; // @synthesize ant3DCamera=_ant3DCamera;
@property(readonly, nonatomic) Ant3DView *ant3DView; // @synthesize ant3DView=_ant3DView;
- (void).cxx_destruct;
- (long long)deviceCameraPosition;
- (void)cameraAuthorizationStatus:(long long)arg1;
- (void)renderError:(id)arg1;
- (void)cameraError:(id)arg1;
- (void)cameraStatusChange:(int)arg1;
- (void)onCameraStopped:(_Bool)arg1;
- (void)onCameraStarted:(_Bool)arg1;
- (void)onUninit:(_Bool)arg1;
- (void)onInitError:(id)arg1;
- (void)onJsLoaded;
- (void)onFirstFrame;
- (void)onRenderStarted;
- (id)getDeviceScreen;
- (id)getDeviceModel;
- (void)onEvent:(id)arg1 extra:(id)arg2;
- (void)loadParNode;
- (void)clean;
- (void)initAnt3D:(id)arg1 ext:(id)arg2;
- (id)createTrackConfiguration:(unsigned long long)arg1;
- (void)initTrackMode;
- (unsigned long long)currTrackAttitude;
- (_Bool)showPars:(id)arg1 ext:(id)arg2;
- (_Bool)doAction:(id)arg1;
- (void)startCamera;
- (void)startRender;
- (void)setupViews;
- (id)initWithNode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
