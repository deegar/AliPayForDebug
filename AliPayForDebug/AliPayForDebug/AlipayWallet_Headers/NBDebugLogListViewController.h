//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AUSegmentedControlDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class AUSegment, NSArray, NSString, PSDScene, UIButton, UILabel, UIPageViewController, UITableViewController, UIView, UIVisualEffectView;

@interface NBDebugLogListViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, AUSegmentedControlDelegate>
{
    NSString *_viewId;
    PSDScene *_psdScene;
    AUSegment *_segment;
    UITableViewController *_tableListVC;
    UIPageViewController *_pageVC;
    UIButton *_confirmBtn;
    NSArray *_tabContentVCList;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIVisualEffectView *_blurEffectView;
}

@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *tabContentVCList; // @synthesize tabContentVCList=_tabContentVCList;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIPageViewController *pageVC; // @synthesize pageVC=_pageVC;
@property(retain, nonatomic) UITableViewController *tableListVC; // @synthesize tableListVC=_tableListVC;
@property(retain, nonatomic) AUSegment *segment; // @synthesize segment=_segment;
@property(nonatomic) __weak PSDScene *psdScene; // @synthesize psdScene=_psdScene;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
- (void).cxx_destruct;
- (id)contentOfType:(id)arg1;
- (long long)tabIndexOfVC:(id)arg1;
- (long long)indexOfSegmentType:(id)arg1;
- (id)selectedSegmentType;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
@property long long segmentSelected;
- (void)close;
- (void)confirmBtnClick:(id)arg1;
- (void)didSegmentValueChanged:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

