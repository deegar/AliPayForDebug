//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APBToygerBaseTask.h"

#import "ZLZVideoDispenserDelegate-Protocol.h"

@class AFECircularView, NSMutableDictionary, NSString, ZLZPhotinusEmulator, ZLZVideoDispenser, ZolozCameraService;

@interface APBToygerCherryPhotinusTask : APBToygerBaseTask <ZLZVideoDispenserDelegate>
{
    _Bool _willTeardown;
    AFECircularView *_circularView;
    ZolozCameraService *_cameraService;
    NSString *_zimId;
    ZLZPhotinusEmulator *_emulator;
    ZLZVideoDispenser *_videoDispenser;
    void *_hasEnoughFramesContext;
    void *_filesReadyContext;
    CDUnknownBlockType _failSafeBlock;
    CDUnknownBlockType _scheduledFailSafeBlock;
    NSMutableDictionary *_monitorDict;
}

+ (void)uploadFileAtPath:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool willTeardown; // @synthesize willTeardown=_willTeardown;
@property(retain, nonatomic) NSMutableDictionary *monitorDict; // @synthesize monitorDict=_monitorDict;
@property(copy) CDUnknownBlockType scheduledFailSafeBlock; // @synthesize scheduledFailSafeBlock=_scheduledFailSafeBlock;
@property(copy) CDUnknownBlockType failSafeBlock; // @synthesize failSafeBlock=_failSafeBlock;
@property void *filesReadyContext; // @synthesize filesReadyContext=_filesReadyContext;
@property void *hasEnoughFramesContext; // @synthesize hasEnoughFramesContext=_hasEnoughFramesContext;
@property(retain) ZLZVideoDispenser *videoDispenser; // @synthesize videoDispenser=_videoDispenser;
@property(retain) ZLZPhotinusEmulator *emulator; // @synthesize emulator=_emulator;
@property(retain) NSString *zimId; // @synthesize zimId=_zimId;
@property(retain) ZolozCameraService *cameraService; // @synthesize cameraService=_cameraService;
@property(retain) AFECircularView *circularView; // @synthesize circularView=_circularView;
- (void).cxx_destruct;
- (void)dispenser:(id)arg1 onSampleBufferAvailable:(struct opaqueCMSampleBuffer *)arg2;
- (void)remoteLogWithSeed:(id)arg1 appendData:(id)arg2;
- (void)uploadAndLogCloudIdWithFileURL:(id)arg1 logSeed:(id)arg2;
- (void)exitWithResult:(int)arg1 failReason:(id)arg2 retCodeSub:(id)arg3 retMessageSub:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardownPhotinusSession;
- (void)processEvent:(id)arg1 withCompletionCallback:(CDUnknownBlockType)arg2;
- (void)invokeWithPipeInfo:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

