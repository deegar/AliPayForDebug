//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUNavItemView.h"

@class BSBadgeInfo, WHExposureView;

@interface WHRightNavItemView : AUNavItemView
{
    BSBadgeInfo *_badgeInfo;
    WHExposureView *_exposureView;
}

@property(retain, nonatomic) WHExposureView *exposureView; // @synthesize exposureView=_exposureView;
@property(retain, nonatomic) BSBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onClicked;
- (void)layoutBadgeView;
- (void)reload;
- (id)init;

@end

