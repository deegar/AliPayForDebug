//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ARIntroduceConfig;

@protocol ARCameraDelegate <NSObject>
- (void)switchAnimState:(_Bool)arg1;
- (void)showFirstIntroduceDlg:(ARIntroduceConfig *)arg1;
- (void)beforeSwitchCamera;
- (void)close;
- (void)back;
- (_Bool)isFucardShowing;
- (_Bool)isLight;
- (void)reciveCameraImageBuffer:(struct __CVBuffer *)arg1;
@end

