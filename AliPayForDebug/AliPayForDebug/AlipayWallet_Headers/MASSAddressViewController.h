//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UISwitch, UITextField;

@interface MASSAddressViewController : DTViewController <UITextFieldDelegate>
{
    UITextField *_hostView;
    UITextField *_portView;
    UISwitch *_cryptView;
}

@property(retain, nonatomic) UISwitch *cryptView; // @synthesize cryptView=_cryptView;
@property(retain, nonatomic) UITextField *portView; // @synthesize portView=_portView;
@property(retain, nonatomic) UITextField *hostView; // @synthesize hostView=_hostView;
- (void).cxx_destruct;
- (void)portChanged:(id)arg1;
- (void)hostChanged:(id)arg1;
- (void)cryptSwitchTouched:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

