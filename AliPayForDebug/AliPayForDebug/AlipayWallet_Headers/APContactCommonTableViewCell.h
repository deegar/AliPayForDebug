//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APCommonSelectTableViewCell.h"

@class UIImageView;

@interface APContactCommonTableViewCell : APCommonSelectTableViewCell
{
    _Bool _showMobileIcon;
    _Bool _knownMobileContact;
    UIImageView *_mobileIcon;
}

+ (double)heightOfCell;
@property(retain, nonatomic) UIImageView *mobileIcon; // @synthesize mobileIcon=_mobileIcon;
@property(nonatomic) _Bool knownMobileContact; // @synthesize knownMobileContact=_knownMobileContact;
@property(nonatomic) _Bool showMobileIcon; // @synthesize showMobileIcon=_showMobileIcon;
- (void).cxx_destruct;
- (double)titleTextValidWidth:(double)arg1;
- (void)refreshMobileIcon;
- (void)refreshCellWithItem:(id)arg1;
- (void)setupMobileIcon;
- (void)setupUI;
- (void)adjustCommonItem:(double)arg1;
- (double)adjustIconImage:(double)arg1;

@end

