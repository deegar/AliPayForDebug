//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CDPSpaceInfo, NSArray, NSMutableArray;
@protocol CDPSpaceViewDelegate;

@interface CDPListView : UIView
{
    NSArray *_objects;
    CDPSpaceInfo *_spaceInfo;
    id <CDPSpaceViewDelegate> _delegate;
    NSMutableArray *_contentViews;
}

@property(retain, nonatomic) NSMutableArray *contentViews; // @synthesize contentViews=_contentViews;
@property(nonatomic) __weak id <CDPSpaceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resumeObjectViewAnimation;
- (void)stopObjectViewAnimation;
- (void)adMarkTagViewClicked:(id)arg1;
- (void)bannerTapped:(id)arg1;
- (void)bannerClosed:(id)arg1;
- (_Bool)needDrawBottomSeperateLine:(id)arg1;
- (_Bool)needDrawTopSeperateLine:(id)arg1;
- (double)adjustMarginBy6Plus:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 spaceInfo:(id)arg2 viewControllerName:(id)arg3;

@end

