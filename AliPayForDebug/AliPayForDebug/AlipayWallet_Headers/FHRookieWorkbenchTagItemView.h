//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UILabel;

@interface FHRookieWorkbenchTagItemView : UIControl
{
    UILabel *_titleLabel;
    long long _tagIndex;
}

@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)select:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setData:(id)arg1 tagIndex:(long long)arg2 obFloor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

