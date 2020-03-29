//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CanvasWebChecker, NSMutableDictionary;

@interface CanvasRenderResultCheckManager : NSObject
{
    NSMutableDictionary *_screenShotDict;
    CanvasWebChecker *_webChecker;
}

@property(retain, nonatomic) CanvasWebChecker *webChecker; // @synthesize webChecker=_webChecker;
@property(retain, nonatomic) NSMutableDictionary *screenShotDict; // @synthesize screenShotDict=_screenShotDict;
- (void).cxx_destruct;
- (void)appQuit:(id)arg1;
- (void)needSaveImageData:(id)arg1 canvasDict:(id)arg2 appId:(id)arg3;
- (_Bool)prepareResources:(id)arg1 array:(id)arg2;
- (id)genCanvasBaseInfo:(id)arg1;
- (void)frameRenderResultCheck:(id)arg1;
- (void)prepare:(id)arg1;
- (id)init;

@end
