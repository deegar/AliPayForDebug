//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Ant3DCameraView;

@protocol Ant3DCameraViewDelegate <NSObject>

@optional
- (void)cameraViewDidChange:(Ant3DCameraView *)arg1;
- (void)cameraView:(Ant3DCameraView *)arg1 focusLength:(float)arg2;
- (void)cameraView:(Ant3DCameraView *)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
@end

