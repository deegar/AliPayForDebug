//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPPassListPage.h"

#import "ALPPassModelDelegate-Protocol.h"

@class ALPCertListModel, AUNetErrorView, NSDictionary, NSString, UIView;

@interface ALPCertListPage : ALPPassListPage <ALPPassModelDelegate>
{
    _Bool _canShowGuide;
    _Bool _guideShown;
    UIView *_guideContainer;
    NSString *_certifyId;
    NSString *_cardContentUrl;
    NSDictionary *_schemeParams;
    NSString *_guideDesc;
    AUNetErrorView *_certEmptyView;
    ALPCertListModel *_listModel;
}

@property(retain, nonatomic) ALPCertListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) AUNetErrorView *certEmptyView; // @synthesize certEmptyView=_certEmptyView;
@property(copy, nonatomic) NSString *guideDesc; // @synthesize guideDesc=_guideDesc;
@property(copy, nonatomic) NSDictionary *schemeParams; // @synthesize schemeParams=_schemeParams;
@property(copy, nonatomic) NSString *cardContentUrl; // @synthesize cardContentUrl=_cardContentUrl;
@property(copy, nonatomic) NSString *certifyId; // @synthesize certifyId=_certifyId;
@property(nonatomic) _Bool guideShown; // @synthesize guideShown=_guideShown;
@property(nonatomic) _Bool canShowGuide; // @synthesize canShowGuide=_canShowGuide;
@property(retain, nonatomic) UIView *guideContainer; // @synthesize guideContainer=_guideContainer;
- (void).cxx_destruct;
- (void)saveIdCard;
- (void)goIdentity;
- (void)goLimitUrl:(id)arg1 type:(id)arg2;
- (void)matchScheme:(id)arg1 type:(id)arg2;
- (id)encodeSubString:(id)arg1;
- (void)onEvent:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)loadData:(unsigned long long)arg1 cardList:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)createMainModel;
- (void)tapAction;
- (void)showUserGuide;
- (void)queryLocation;
- (_Bool)canCache;
- (void)activeLoad;
- (void)appWillEnterForeground;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)bundlePath;
- (void)dealloc;
- (id)initWithType:(id)arg1 schemeParams:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

