//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXTwoInputFunctor.h"

@class TEXImageSource;

@interface TEXThreeInputFunctor : TEXTwoInputFunctor
{
    int _inputImageTexture3Uniform;
    TEXImageSource *_thirdImageSource;
}

- (void).cxx_destruct;
- (void)updateExtraBindings;
- (void)initProgramInContext;
- (id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 secondImage:(id)arg3 thirdImage:(id)arg4;

@end

