//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FalconTemplate, NSArray, NSMutableArray, NSString;
@protocol BEEPhotoTypesettingViewDelegate;

@interface BEEPhotoTypesettingView : UIView
{
    _Bool _smartCrop;
    _Bool _manualControlAnimated;
    NSArray *_images;
    id <BEEPhotoTypesettingViewDelegate> _delegate;
    double _maxWidth;
    NSString *_business;
    FalconTemplate *_template;
    NSMutableArray *_imageViewArray;
    long long _addNumber;
}

+ (double)heightForTypesettingView:(double)arg1 images:(id)arg2;
+ (double)heightForTypesettingView:(id)arg1;
+ (id)selectBestTemplate:(id)arg1;
+ (id)templateFromImages:(id)arg1;
@property(nonatomic) long long addNumber; // @synthesize addNumber=_addNumber;
@property(retain, nonatomic) NSMutableArray *imageViewArray; // @synthesize imageViewArray=_imageViewArray;
@property(retain, nonatomic) FalconTemplate *template; // @synthesize template=_template;
@property(nonatomic) _Bool manualControlAnimated; // @synthesize manualControlAnimated=_manualControlAnimated;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) _Bool smartCrop; // @synthesize smartCrop=_smartCrop;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) __weak id <BEEPhotoTypesettingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)didEditButonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithMaxWidth:(double)arg1 images:(id)arg2 business:(id)arg3;
- (id)initWithImages:(id)arg1 business:(id)arg2;
- (void)setShowEditButton:(_Bool)arg1;
- (void)setupViewsFromTemplate;
- (void)tapGesture:(id)arg1;
- (id)itemViewAtPos:(long long)arg1;
- (void)setupLastItemViewAddNumber;

@end

