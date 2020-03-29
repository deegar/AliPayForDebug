//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNApp.h"

@class NSMapTable, TNPageViewController;

@interface TNPageApp : TNApp
{
    TNPageViewController *_currentVC;
    NSMapTable *_pageMap;
    id _appdelegate;
}

@property(nonatomic) __weak id appdelegate; // @synthesize appdelegate=_appdelegate;
@property(retain, nonatomic) NSMapTable *pageMap; // @synthesize pageMap=_pageMap;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupNotifications;
- (void)didEnterBackgroundNotification:(id)arg1;
- (void)willEnterForegroundNotification:(id)arg1;
- (unsigned long long)tinyAppType;
- (id)createRootPageViewControllerWithPageConfig:(id)arg1 queryParams:(id)arg2;
- (void)updateTabViewController:(id)arg1;
- (id)createRootTabViewController;
- (id)createRootViewController;
- (id)tabbarContentPageViewControllerAtIndex:(int)arg1;
- (_Bool)doSwitchToTab:(id)arg1 tabVC:(id)arg2;
- (_Bool)isHomePage:(id)arg1;
- (id)findPageByPageId:(long long)arg1;
- (_Bool)switchToTab:(id)arg1 params:(id)arg2;
- (void)makePageCurrent:(id)arg1;
@property(readonly, nonatomic) TNPageViewController *currentVC;
- (id)homePage;
- (id)pageWithPagePath:(id)arg1;
- (id)initWithTinyAppId:(id)arg1 options:(id)arg2;

@end

