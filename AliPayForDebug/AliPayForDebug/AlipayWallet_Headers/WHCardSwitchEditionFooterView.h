//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHExposureView.h"

@class NSString, UIButton;
@protocol WHSwitchEditionFooterProtocol;

@interface WHCardSwitchEditionFooterView : WHExposureView
{
    NSString *_switchEdition;
    id <WHSwitchEditionFooterProtocol> _delegate;
    UIButton *_switchEditionButton;
}

+ (id)footerViewWithSwitchEdition:(id)arg1;
@property(retain, nonatomic) UIButton *switchEditionButton; // @synthesize switchEditionButton=_switchEditionButton;
@property(nonatomic) __weak id <WHSwitchEditionFooterProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *switchEdition; // @synthesize switchEdition=_switchEdition;
- (void).cxx_destruct;
- (void)didTappedSwitchEditionButton;
- (void)reloadWithSwitchEdition:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

