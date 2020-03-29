//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, PSDScene, UITableView;

@interface NBDebugPageInfoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    PSDScene *_psdScene;
    id _containerPanel;
    NSString *_viewId;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(nonatomic) __weak id containerPanel; // @synthesize containerPanel=_containerPanel;
@property(nonatomic) __weak PSDScene *psdScene; // @synthesize psdScene=_psdScene;
- (void).cxx_destruct;
- (void)doScreenshot:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)contentOfRowKey:(id)arg1;
- (id)rowKeys;
- (void)viewDidLoad;
- (id)initWithViewId:(id)arg1 scene:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

