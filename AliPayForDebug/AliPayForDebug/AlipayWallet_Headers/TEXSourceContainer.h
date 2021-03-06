//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TEXSource.h"

@class TEXFunctor;

@interface TEXSourceContainer : TEXSource
{
    TEXSource *_source;
    TEXFunctor *_destFunctor;
}

@property(retain, nonatomic) TEXFunctor *destFunctor; // @synthesize destFunctor=_destFunctor;
@property(retain, nonatomic) TEXSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (_Bool)checkChainSource:(id)arg1 functor:(id)arg2;
- (void)setRoi:(struct CGRect)arg1;
- (void)setOutputSizeInPixels:(struct CGSize)arg1;
- (id)successors;
- (void)addSuccessor:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithSource:(id)arg1 functor:(id)arg2;

@end

