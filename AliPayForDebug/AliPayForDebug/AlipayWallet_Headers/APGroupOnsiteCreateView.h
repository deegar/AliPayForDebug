//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class APGroupOnsiteMembersView, APGroupOnsiteNumberView, AUButton, UILabel;

@interface APGroupOnsiteCreateView : UIView
{
    APGroupOnsiteMembersView *_membersView;
    APGroupOnsiteNumberView *_numberView;
    AUButton *_enterGroupButton;
    UILabel *_titleView;
    UILabel *_numberTips;
    UILabel *_memberTips;
    UIView *_boardView;
    UIView *_memberLine;
}

+ (double)swapAnimationDistance;
@property(retain, nonatomic) UIView *memberLine; // @synthesize memberLine=_memberLine;
@property(retain, nonatomic) UIView *boardView; // @synthesize boardView=_boardView;
@property(retain, nonatomic) UILabel *memberTips; // @synthesize memberTips=_memberTips;
@property(retain, nonatomic) UILabel *numberTips; // @synthesize numberTips=_numberTips;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) AUButton *enterGroupButton; // @synthesize enterGroupButton=_enterGroupButton;
@property(retain, nonatomic) APGroupOnsiteNumberView *numberView; // @synthesize numberView=_numberView;
@property(retain, nonatomic) APGroupOnsiteMembersView *membersView; // @synthesize membersView=_membersView;
- (void).cxx_destruct;
- (void)swapDownWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)swapUpWithAnimated:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

