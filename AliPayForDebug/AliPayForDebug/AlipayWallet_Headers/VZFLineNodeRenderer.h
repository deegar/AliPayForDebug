//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFRenderer.h"

@class UIColor;

@interface VZFLineNodeRenderer : VZFRenderer
{
    UIColor *_color;
    double _dashLength;
    double _spaceLength;
}

@property(nonatomic) double spaceLength; // @synthesize spaceLength=_spaceLength;
@property(nonatomic) double dashLength; // @synthesize dashLength=_dashLength;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawContentInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;

@end

