//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSArray, NSString, UIView;

@interface CRAnimationDelegate : NSObject <CAAnimationDelegate>
{
    _Bool _reset;
    _Bool _isEnd;
    _Bool _color;
    _Bool _opacity;
    int _callbcakType;
    int _scaleIndex;
    NSString *_identifer;
    UIView *_animationView;
    NSArray *_keys;
    NSString *_senceId;
}

@property(nonatomic) int scaleIndex; // @synthesize scaleIndex=_scaleIndex;
@property(retain, nonatomic) NSString *senceId; // @synthesize senceId=_senceId;
@property(retain, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(nonatomic) _Bool opacity; // @synthesize opacity=_opacity;
@property(nonatomic) _Bool color; // @synthesize color=_color;
@property(nonatomic) int callbcakType; // @synthesize callbcakType=_callbcakType;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool reset; // @synthesize reset=_reset;
@property(nonatomic) __weak UIView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

