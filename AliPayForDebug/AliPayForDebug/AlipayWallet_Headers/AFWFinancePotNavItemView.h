//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUNavItemView.h"

@class NSString;
@protocol AFWFinancePotNavItemViewDelegate;

@interface AFWFinancePotNavItemView : AUNavItemView
{
    id <AFWFinancePotNavItemViewDelegate> _h5NavItemViewDelegate;
    NSString *_itemTag;
}

+ (id)itemsFromDataSource:(id)arg1 delegate:(id)arg2;
@property(copy, nonatomic) NSString *itemTag; // @synthesize itemTag=_itemTag;
@property(nonatomic) __weak id <AFWFinancePotNavItemViewDelegate> h5NavItemViewDelegate; // @synthesize h5NavItemViewDelegate=_h5NavItemViewDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onClicked;

@end

