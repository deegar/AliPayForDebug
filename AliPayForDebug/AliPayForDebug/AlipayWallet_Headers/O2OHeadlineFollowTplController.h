//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OTemplateController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, O2OHeadlineAnswerFollowModel;

@interface O2OHeadlineFollowTplController : O2OTemplateController <UIAlertViewDelegate, UIScrollViewDelegate>
{
    _Bool _scrollExposured;
    O2OHeadlineAnswerFollowModel *_model;
    NSDictionary *_params;
    NSMutableArray *_accountIds;
}

@property(nonatomic) _Bool scrollExposured; // @synthesize scrollExposured=_scrollExposured;
@property(retain, nonatomic) NSMutableArray *accountIds; // @synthesize accountIds=_accountIds;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) O2OHeadlineAnswerFollowModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)followAction;
- (id)spmb;
- (void)scrollViewDidScroll:(id)arg1;
- (void)displayOnceExp;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)follow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

