//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APMapCommonMapCustomCalloutView, NSString, UIImageView;

@interface APSocialLocationView : UIView
{
    UIImageView *_locationView;
    UIImageView *_shadowView;
    APMapCommonMapCustomCalloutView *_calloutView;
    double _calloutWidth;
    double _calloutHeight;
    NSString *_markerTitle;
    struct CGPoint _calloutOffset;
}

@property(copy, nonatomic) NSString *markerTitle; // @synthesize markerTitle=_markerTitle;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(nonatomic) double calloutHeight; // @synthesize calloutHeight=_calloutHeight;
@property(nonatomic) double calloutWidth; // @synthesize calloutWidth=_calloutWidth;
@property(retain, nonatomic) APMapCommonMapCustomCalloutView *calloutView; // @synthesize calloutView=_calloutView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)getStringRect:(id)arg1 width:(double)arg2 height:(double)arg3 fontSize:(double)arg4;
- (void)judgeLabelBoundsWithDesc:(id)arg1 fontSize:(double)arg2 padding:(double)arg3;
- (void)locationAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
