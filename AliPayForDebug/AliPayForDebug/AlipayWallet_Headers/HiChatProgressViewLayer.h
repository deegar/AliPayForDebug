//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

@interface HiChatProgressViewLayer : CALayer
{
    UIColor *_trackColor;
    UIColor *_strokeColor;
    UIColor *_progressColor;
    double progress;
    double trackWidth;
    double strokeWidth;
    struct CGPath *path;
    UIColor *strokeShadowColor;
    double strokeShadowBlur;
    struct CGSize strokeShadow;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double strokeShadowBlur; // @synthesize strokeShadowBlur;
@property(retain, nonatomic) UIColor *strokeShadowColor; // @synthesize strokeShadowColor;
@property(nonatomic) struct CGSize strokeShadow; // @synthesize strokeShadow;
@property(nonatomic) struct CGPath *path; // @synthesize path;
@property(retain, nonatomic) UIColor *progressColor; // @synthesize progressColor=_progressColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *trackColor; // @synthesize trackColor=_trackColor;
@property(nonatomic) double trackWidth; // @synthesize trackWidth;
@property(nonatomic) double progress; // @synthesize progress;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setupPath;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

