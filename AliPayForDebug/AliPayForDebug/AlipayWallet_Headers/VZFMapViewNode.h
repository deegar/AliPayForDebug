//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFNode.h"

@interface VZFMapViewNode : VZFNode
{
    struct MapViewNodeSpecs _mapViewNodeSpecs;
}

+ (id)newWithMapViewAttributes:(const struct MapViewNodeSpecs *)arg1 NodeSpecs:(const struct NodeSpecs *)arg2;
@property(readonly, nonatomic) struct MapViewNodeSpecs mapViewNodeSpecs; // @synthesize mapViewNodeSpecs=_mapViewNodeSpecs;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

