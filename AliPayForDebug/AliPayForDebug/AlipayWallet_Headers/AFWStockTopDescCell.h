//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFRBaseCell.h"

#import "ThemeChangeObserver-Protocol.h"

@class NSString, UILabel;

@interface AFWStockTopDescCell : TFRBaseCell <ThemeChangeObserver>
{
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setThemeColor;
- (void)handleChangeTheme:(id)arg1;
- (id)cardId;
- (id)midPageId;
- (void)refreshUIWithDesc:(id)arg1;
- (void)setupModel;
- (void)setupView;
- (void)queryData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

