//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AFWAfterTradeProtocal-Protocol.h"

@class NSString, UIColor, UILabel;

@interface AFWAfterTradeView : UIView <AFWAfterTradeProtocal>
{
    UILabel *_textLabel;
    NSString *_statusStr;
    NSString *_price;
    UIColor *_priceColor;
    NSString *_volumeStr;
    NSString *_amountStr;
}

+ (id)hexStringFromColor:(id)arg1;
+ (_Bool)showPanInfoViewWithState:(id)arg1;
+ (double)viewHeight;
@property(retain, nonatomic) NSString *amountStr; // @synthesize amountStr=_amountStr;
@property(retain, nonatomic) NSString *volumeStr; // @synthesize volumeStr=_volumeStr;
@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *statusStr; // @synthesize statusStr=_statusStr;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)setTradeState:(long long)arg1;
- (void)setPrice:(id)arg1 changeStatusColor:(id)arg2 volume:(id)arg3 amount:(id)arg4;
- (void)setPrice:(id)arg1 changePrice:(id)arg2 rate:(id)arg3 tradeTime:(id)arg4;
- (void)setStockSession:(id)arg1 txt:(id)arg2;
- (void)updateView;
- (id)initWithKSHStock:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

