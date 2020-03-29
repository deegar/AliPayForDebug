//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel;
@protocol UIActionSheetDelegate;

@interface SGFuquanTabView : UIButton
{
    id <UIActionSheetDelegate> _delegate;
    UILabel *_textLabel;
    UIImageView *_triangle;
}

@property(retain, nonatomic) UIImageView *triangle; // @synthesize triangle=_triangle;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <UIActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)recoverdTypeWithIndex:(long long)arg1;
- (void)buttonAction:(id)arg1;
- (void)setCurrentFuqanType:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

