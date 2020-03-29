//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView;

@interface O2OCommentEmoticonView : UIView
{
    _Bool _enabled;
    UIImageView *_bgImageView;
    UIImageView *_selectedImageView;
    UIView *_selectedImageContainer;
    UIButton *_maskButton;
    NSString *_bgImageUrl;
    NSString *_selectedImageUrl;
    double _subscore;
    unsigned long long _index;
    CDUnknownBlockType _selectedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType selectedCallback; // @synthesize selectedCallback=_selectedCallback;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) double subscore; // @synthesize subscore=_subscore;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *selectedImageUrl; // @synthesize selectedImageUrl=_selectedImageUrl;
@property(retain, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(retain, nonatomic) UIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(retain, nonatomic) UIView *selectedImageContainer; // @synthesize selectedImageContainer=_selectedImageContainer;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)maskButtonAction:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

