//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQPBNPlugin.h"

@class MQPToastLoading, NSMutableDictionary;

@interface MQPPopupH5 : MQPBNPlugin
{
    NSMutableDictionary *_webViews;
    MQPToastLoading *_loadingView;
}

+ (id)h5Param:(id)arg1;
@property(retain, nonatomic) MQPToastLoading *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableDictionary *webViews; // @synthesize webViews=_webViews;
- (void).cxx_destruct;
- (void)closeWebViewWithToken:(id)arg1;
- (void)showWebViewWithToken:(id)arg1;
- (void)createWebViewWithToken:(id)arg1 param:(id)arg2;
- (void)updateAttr:(id)arg1 withValue:(id)arg2;
- (void)onClose:(id)arg1;
- (void)onShow:(id)arg1;
- (void)onRenderSuccess:(id)arg1;
- (void)dealloc;
- (id)initWithNode:(struct fb_node *)arg1 withDocument:(id)arg2 withView:(id)arg3;

@end

