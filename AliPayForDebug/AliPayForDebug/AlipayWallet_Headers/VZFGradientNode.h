//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFNode.h"

@class NSArray;

@interface VZFGradientNode : VZFNode
{
    unsigned long long _direction;
    NSArray *_colors;
    NSArray *_factors;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)newWithNodeSpecs:(const struct NodeSpecs *)arg1;
@property(retain, nonatomic) NSArray *factors; // @synthesize factors=_factors;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;

@end

