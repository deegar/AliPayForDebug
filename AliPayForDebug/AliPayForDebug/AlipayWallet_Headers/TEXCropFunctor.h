//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXFunctor.h"

@interface TEXCropFunctor : TEXFunctor
{
    float _cutVertices[8];
    long long _orientation;
    struct CGRect _cutRect;
}

@property(nonatomic) struct CGRect cutRect; // @synthesize cutRect=_cutRect;
- (void)initProgramInContext;
- (id)initWithRect:(struct CGRect)arg1;

@end

