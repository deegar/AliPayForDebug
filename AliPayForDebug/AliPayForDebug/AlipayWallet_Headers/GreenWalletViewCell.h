//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCSwipeTableViewCell.h"

@class ACCVirtualCardInfo, WalletViewCardView;

@interface GreenWalletViewCell : ACCSwipeTableViewCell
{
    WalletViewCardView *_cardView;
    ACCVirtualCardInfo *_data;
}

@property(retain, nonatomic) ACCVirtualCardInfo *data; // @synthesize data=_data;
@property(retain, nonatomic) WalletViewCardView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadData:(id)arg1;
- (void)createSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

