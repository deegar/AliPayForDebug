//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class AUButton, NSDictionary;

@interface OPFailViewController : DTViewController
{
    _Bool _originalPopEnabled;
    NSDictionary *_callbackResult;
    AUButton *_submitBtn;
}

@property(retain, nonatomic) AUButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) NSDictionary *callbackResult; // @synthesize callbackResult=_callbackResult;
@property(nonatomic) _Bool originalPopEnabled; // @synthesize originalPopEnabled=_originalPopEnabled;
- (void).cxx_destruct;
- (void)submitHandler;
- (void)back;
- (void)initDetailErrorMsg;
- (void)initSubviews;
- (id)reasonWithErrorCode:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCallbackResult:(id)arg1;

@end
