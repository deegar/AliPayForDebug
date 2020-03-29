//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWOpenPopViewDelegate-Protocol.h"

@class GWOpenPopView, GWPresentViewController, NSDictionary, NSString, ReceiveResponse;

@interface GWPopManager : NSObject <GWOpenPopViewDelegate>
{
    GWOpenPopView *_openPopView;
    CDUnknownBlockType _unpackHandler;
    CDUnknownBlockType _lookupDetailHandler;
    ReceiveResponse *_result;
    GWPresentViewController *_viewController;
    NSDictionary *_launchOptions;
    NSDictionary *_spmParam;
}

@property(retain, nonatomic) NSDictionary *spmParam; // @synthesize spmParam=_spmParam;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) GWPresentViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) ReceiveResponse *result; // @synthesize result=_result;
@property(copy, nonatomic) CDUnknownBlockType lookupDetailHandler; // @synthesize lookupDetailHandler=_lookupDetailHandler;
@property(copy, nonatomic) CDUnknownBlockType unpackHandler; // @synthesize unpackHandler=_unpackHandler;
@property(readonly, nonatomic) GWOpenPopView *openPopView; // @synthesize openPopView=_openPopView;
- (void).cxx_destruct;
- (void)popViewDidClickCloseAction:(id)arg1;
- (void)popViewDidClickProtocolAction:(id)arg1;
- (void)popViewDidClickDetailAction:(id)arg1;
- (void)popViewDidClickUnpackAction:(id)arg1;
- (void)verifyRealName:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)unpackAndEntryDetailWithResult:(id)arg1 launchOptions:(id)arg2;
- (void)directEntryDetailWithOptions:(id)arg1 animated:(_Bool)arg2;
- (void)directEntryDetailWithResult:(id)arg1 launchOptions:(id)arg2 animated:(_Bool)arg3;
- (void)displayWithReceiveResult:(id)arg1;
- (id)initWithLaunchOption:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

