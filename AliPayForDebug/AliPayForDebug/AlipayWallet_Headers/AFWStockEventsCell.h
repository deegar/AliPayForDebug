//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFWStockDetailBaseCell.h"

@class AFWStockExpandButton, CAGradientLayer, NSString, UIButton, UIImageView, UILabel;

@interface AFWStockEventsCell : AFWStockDetailBaseCell
{
    CAGradientLayer *_aniLayer;
    UIImageView *_imgView;
    UILabel *_lbl;
    UIButton *_button;
    AFWStockExpandButton *_closeBtn;
    NSString *_eventId;
    NSString *_source;
    NSString *_actionUrl;
}

@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) AFWStockExpandButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *lbl; // @synthesize lbl=_lbl;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) CAGradientLayer *aniLayer; // @synthesize aniLayer=_aniLayer;
- (void).cxx_destruct;
- (void)opacityAnimation;
- (id)spmParams;
- (void)renderWithContent:(id)arg1 hasRead:(_Bool)arg2;
- (void)setupUI;
- (void)closeClickHander:(id)arg1;
- (void)clickHandler:(id)arg1;
- (void)loadError:(id)arg1;
- (void)loadSuccess:(id)arg1;
- (id)loadOnline;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)dealloc;

@end
