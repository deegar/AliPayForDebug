//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "H5WebViewController.h"

@class ATKFakeContentView, ATKFakeNBViewControllerProxy;

@interface ATKFakeH5ViewController : H5WebViewController
{
    ATKFakeContentView *_fakeContentView;
    ATKFakeNBViewControllerProxy *_fakeViewControllerProxy;
}

@property(retain, nonatomic) ATKFakeNBViewControllerProxy *fakeViewControllerProxy; // @synthesize fakeViewControllerProxy=_fakeViewControllerProxy;
@property(retain, nonatomic) ATKFakeContentView *fakeContentView; // @synthesize fakeContentView=_fakeContentView;
- (void).cxx_destruct;
- (void)deleteExpando:(id)arg1;
- (id)getExpando:(id)arg1;
- (void)setExpando:(id)arg1 withValue:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)viewControllerProxy;
- (id)psdContentView;
- (id)navigationController;
- (id)init;

@end

