//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXFunctor.h"

@interface TEXTransparentVideoFunctor : TEXFunctor
{
    int _offsetUniform;
    int _width;
    int _widthWithPadding;
}

- (void)updateTextureCoordinates:(float)arg1;
- (void)initProgramInContext;
- (void)initFrameBuffer:(id)arg1;
- (void)receiveFramebuffer:(id)arg1 fromOutput:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)initWithWidth:(int)arg1;

@end

