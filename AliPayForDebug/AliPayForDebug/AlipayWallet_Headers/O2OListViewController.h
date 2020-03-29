//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListViewController.h"

#import "O2OH5NotifyProtocol-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, O2OBizViewControllerHelper;

@interface O2OListViewController : VZListViewController <O2OH5NotifyProtocol>
{
    _Bool _needH5NofityPageRefresh;
    _Bool _isMonitor;
    _Bool _hasShowModel;
    NSString *_bizType;
    NSDictionary *_bizDataForH5Notify;
    NSDictionary *_schemeOptions;
    O2OBizViewControllerHelper *_vcHelper;
    NSMutableArray *_notifies;
    id _promotionController;
}

@property(nonatomic) __weak id promotionController; // @synthesize promotionController=_promotionController;
@property(retain, nonatomic) NSMutableArray *notifies; // @synthesize notifies=_notifies;
@property(nonatomic) _Bool hasShowModel; // @synthesize hasShowModel=_hasShowModel;
@property(nonatomic) _Bool isMonitor; // @synthesize isMonitor=_isMonitor;
@property(retain, nonatomic) O2OBizViewControllerHelper *vcHelper; // @synthesize vcHelper=_vcHelper;
@property(retain, nonatomic) NSDictionary *schemeOptions; // @synthesize schemeOptions=_schemeOptions;
@property(retain, nonatomic) NSDictionary *bizDataForH5Notify; // @synthesize bizDataForH5Notify=_bizDataForH5Notify;
@property(nonatomic) _Bool needH5NofityPageRefresh; // @synthesize needH5NofityPageRefresh=_needH5NofityPageRefresh;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (void)refreshH5NotifyPage:(id)arg1;
- (_Bool)checkH5NotifyPageNeedRefresh:(id)arg1;
- (void)resetPageMark:(_Bool)arg1;
- (void)updatePageStartTime;
- (id)pageParams;
- (id)pageSpm;
- (_Bool)promotionControllerShouldShow:(id)arg1;
- (void)cleanAPMultiMediaImageCache;
- (_Bool)shouldSyncLoad;
- (void)modelDidStart:(id)arg1;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showLoading:(id)arg1;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)reload;
- (void)load;
- (void)pageMonitorEnd;
- (void)pageMonitorStart;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)maya_webControllerLaunchOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

