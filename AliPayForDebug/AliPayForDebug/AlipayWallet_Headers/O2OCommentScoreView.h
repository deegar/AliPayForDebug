//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString;
@protocol O2OCommentScoreViewDelegate;

@interface O2OCommentScoreView : UIView
{
    _Bool _enabled;
    double _emoticonWidth;
    double _emoticonSpacing;
    unsigned long long _type;
    double _score;
    id <O2OCommentScoreViewDelegate> _delegate;
    NSString *_typeName;
    NSArray *_bgImageUrlArray;
    NSArray *_selectedImageUrlArray;
    NSMutableArray *_emoticonViews;
}

+ (id)subScoreTitle:(unsigned long long)arg1;
+ (id)subScoreIcon:(unsigned long long)arg1;
+ (struct CGSize)fitSize:(struct CGSize)arg1 config:(id)arg2;
@property(retain, nonatomic) NSMutableArray *emoticonViews; // @synthesize emoticonViews=_emoticonViews;
@property(retain, nonatomic) NSArray *selectedImageUrlArray; // @synthesize selectedImageUrlArray=_selectedImageUrlArray;
@property(retain, nonatomic) NSArray *bgImageUrlArray; // @synthesize bgImageUrlArray=_bgImageUrlArray;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(nonatomic) __weak id <O2OCommentScoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double emoticonSpacing; // @synthesize emoticonSpacing=_emoticonSpacing;
@property(nonatomic) double emoticonWidth; // @synthesize emoticonWidth=_emoticonWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (void)relayout;
- (id)selectedTitle;
- (void)updateSelectedImageWithScore:(unsigned long long)arg1;
- (void)setupViews;
- (void)setConfig:(id)arg1;
- (id)initWithOrigin:(struct CGPoint)arg1 emoticonWidth:(double)arg2 emoticonSpacing:(double)arg3 type:(unsigned long long)arg4;
- (id)initWithOrigin:(struct CGPoint)arg1;

@end
