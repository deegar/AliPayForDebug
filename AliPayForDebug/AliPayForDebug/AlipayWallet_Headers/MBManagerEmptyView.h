//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;

@interface MBManagerEmptyView : UIView
{
    UIScrollView *_emptyContentView;
}

@property(readonly, nonatomic) UIScrollView *emptyContentView; // @synthesize emptyContentView=_emptyContentView;
- (void).cxx_destruct;
- (id)emptyLabel:(id)arg1;
- (double)initIntroView:(double)arg1 text:(id)arg2 introImageName:(id)arg3;
- (double)initCenterView:(double)arg1;
- (double)initHeadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
