//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface BeeLottieCanvasSceneModel : NSObject
{
    NSNumber *_startFrame;
    NSNumber *_endFrame;
    long long _frameRate;
    double _w;
    double _h;
}

@property(nonatomic) double h; // @synthesize h=_h;
@property(nonatomic) double w; // @synthesize w=_w;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) NSNumber *endFrame; // @synthesize endFrame=_endFrame;
@property(retain, nonatomic) NSNumber *startFrame; // @synthesize startFrame=_startFrame;
- (void).cxx_destruct;

@end

