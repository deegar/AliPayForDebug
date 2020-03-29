//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUButton.h"

@class SFAtBadgeView, UIImage;

@interface SFAtBadgeButton : AUButton
{
    long long _badgeNumber;
    SFAtBadgeView *_badgeView;
    UIImage *_selectedImage;
    UIImage *_normalImage;
    struct CGPoint _badgeOneCenter;
    struct CGPoint _badgeTenCenter;
}

+ (id)editAtBadgeButton;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(nonatomic) struct CGPoint badgeTenCenter; // @synthesize badgeTenCenter=_badgeTenCenter;
@property(nonatomic) struct CGPoint badgeOneCenter; // @synthesize badgeOneCenter=_badgeOneCenter;
@property(retain, nonatomic) SFAtBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (void).cxx_destruct;

@end

