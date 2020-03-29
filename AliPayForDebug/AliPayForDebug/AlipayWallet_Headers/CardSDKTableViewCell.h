//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CardSDK, UIView;
@protocol CSCard, CSView;

@interface CardSDKTableViewCell : UITableViewCell
{
    id <CSCard> _card;
    UIView<CSView> *_cubeView;
    CardSDK *_cardsdk;
}

@property(nonatomic) __weak CardSDK *cardsdk; // @synthesize cardsdk=_cardsdk;
@property(retain, nonatomic) UIView<CSView> *cubeView; // @synthesize cubeView=_cubeView;
@property(retain, nonatomic) id <CSCard> card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)configCardSDK:(id)arg1;

@end
