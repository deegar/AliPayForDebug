//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKEvent.h"

@class NSDictionary, NSString, RVKKernel, WKWebViewConfiguration;

@interface RVKViewEvent : RVKEvent
{
    int _panelType;
    WKWebViewConfiguration *_wkConfiguration;
    NSString *_panelTitle;
    NSString *_injctJs;
    NSDictionary *_expandParams;
    RVKKernel *_parentObject;
    struct CGRect _newFrame;
}

+ (id)reloadFailEvent;
+ (id)injctJSEvent;
+ (id)showPanelEvent;
+ (id)configEvent;
+ (id)destroyEvent;
+ (id)resizeEvent:(struct CGRect)arg1;
+ (id)createEvent;
+ (id)allEvent;
@property(nonatomic) __weak RVKKernel *parentObject; // @synthesize parentObject=_parentObject;
@property(copy, nonatomic) NSDictionary *expandParams; // @synthesize expandParams=_expandParams;
@property(copy, nonatomic) NSString *injctJs; // @synthesize injctJs=_injctJs;
@property(copy, nonatomic) NSString *panelTitle; // @synthesize panelTitle=_panelTitle;
@property(nonatomic) int panelType; // @synthesize panelType=_panelType;
@property(retain, nonatomic) WKWebViewConfiguration *wkConfiguration; // @synthesize wkConfiguration=_wkConfiguration;
@property(readonly, nonatomic) struct CGRect newFrame; // @synthesize newFrame=_newFrame;
- (void).cxx_destruct;
- (void)setNewFrame:(struct CGRect)arg1;

@end

