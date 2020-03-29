//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMediaBaseFunctor.h"

@class FalconFaceEngine;

@interface XMediaFaceFunctor : XMediaBaseFunctor
{
    FalconFaceEngine *_faceEngine;
}

@property(retain, nonatomic) FalconFaceEngine *faceEngine; // @synthesize faceEngine=_faceEngine;
- (void).cxx_destruct;
- (_Bool)detectFaceWithBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3 strictLevel:(int)arg4;
- (id)trackFaceWithBuffer:(char *)arg1 width:(int)arg2 height:(int)arg3;
- (_Bool)initWithFrameSize:(struct CGSize)arg1 maxFaceCount:(unsigned long long)arg2 rotate:(unsigned long long)arg3 detectType:(long long)arg4;
- (void)dealloc;
- (id)init;

@end

