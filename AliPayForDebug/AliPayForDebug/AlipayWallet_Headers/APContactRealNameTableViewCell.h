//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APContactCommonTableViewCell.h"

@class MFAttributeLabel, UIImageView;

@interface APContactRealNameTableViewCell : APContactCommonTableViewCell
{
    _Bool _userNotVerify;
    _Bool _mySelfIsValidate;
    _Bool _showNickNameForDetail;
    UIImageView *_noValidImg;
    MFAttributeLabel *_secondDetailLabel;
}

@property(retain, nonatomic) MFAttributeLabel *secondDetailLabel; // @synthesize secondDetailLabel=_secondDetailLabel;
@property(retain, nonatomic) UIImageView *noValidImg; // @synthesize noValidImg=_noValidImg;
@property(nonatomic) _Bool showNickNameForDetail; // @synthesize showNickNameForDetail=_showNickNameForDetail;
@property(nonatomic) _Bool mySelfIsValidate; // @synthesize mySelfIsValidate=_mySelfIsValidate;
@property(nonatomic) _Bool userNotVerify; // @synthesize userNotVerify=_userNotVerify;
- (void).cxx_destruct;
- (double)titleTextValidWidth:(double)arg1;
- (void)adjustCommonItem:(double)arg1;
- (void)noRealNameShow:(_Bool)arg1;
- (void)refreshDetail;

@end

