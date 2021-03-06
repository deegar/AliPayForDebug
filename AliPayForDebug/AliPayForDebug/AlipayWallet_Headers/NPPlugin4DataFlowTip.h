//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

@class NSArray, NSString, NSURL, PSDScene;

@interface NPPlugin4DataFlowTip : NBPluginBase
{
    _Bool _tinyAppEnable;
    NSURL *_lastRequestUrl;
    NSString *_tipsString;
    NSString *_innerSiteString;
    NSString *_outerSiteString;
    NSArray *_whiteList;
    double _innerSite;
    double _outerSite;
    PSDScene *_weakScene;
}

@property(nonatomic) __weak PSDScene *weakScene; // @synthesize weakScene=_weakScene;
@property(nonatomic) _Bool tinyAppEnable; // @synthesize tinyAppEnable=_tinyAppEnable;
@property(nonatomic) double outerSite; // @synthesize outerSite=_outerSite;
@property(nonatomic) double innerSite; // @synthesize innerSite=_innerSite;
@property(retain, nonatomic) NSArray *whiteList; // @synthesize whiteList=_whiteList;
@property(retain, nonatomic) NSString *outerSiteString; // @synthesize outerSiteString=_outerSiteString;
@property(retain, nonatomic) NSString *innerSiteString; // @synthesize innerSiteString=_innerSiteString;
@property(retain, nonatomic) NSString *tipsString; // @synthesize tipsString=_tipsString;
@property(retain, nonatomic) NSURL *lastRequestUrl; // @synthesize lastRequestUrl=_lastRequestUrl;
- (void).cxx_destruct;
- (_Bool)shouldShowTipWithVC:(id)arg1 url:(id)arg2 tips:(id *)arg3;
- (float)caculatePageSize:(id)arg1;
- (_Bool)isLiveChannel:(id)arg1;
- (_Bool)isSubViewModeWithVC:(id)arg1;
- (_Bool)isTinyAppWithVC:(id)arg1;
- (void)showTipViewWithVC:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)dealloc;
- (void)pluginDidLoad;

@end

