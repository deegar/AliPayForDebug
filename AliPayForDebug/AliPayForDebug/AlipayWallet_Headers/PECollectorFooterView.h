//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AUButton;
@protocol PECollectorFooterViewDelegate;

@interface PECollectorFooterView : UIView
{
    id <PECollectorFooterViewDelegate> _delegate;
    AUButton *_submitBtn;
}

+ (id)collectorFooterView;
@property(retain, nonatomic) AUButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(nonatomic) __weak id <PECollectorFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doSubmit;
- (void)enableSubmit:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

