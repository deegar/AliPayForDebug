//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BEEPhotoVerticalPreviewViewDelegate-Protocol.h"

@class BEEPhotoVerticalPreviewView, NSArray, NSString, UIView;
@protocol BEEPhotoVerticalPreviewDelegate;

@interface BEEPhotoVerticalPreviewViewController : DTViewController <BEEPhotoVerticalPreviewViewDelegate>
{
    _Bool _edit;
    NSArray *_images;
    id <BEEPhotoVerticalPreviewDelegate> _delegate;
    long long _scrollToImagePos;
    NSString *_business;
    UIView *_footerView;
    BEEPhotoVerticalPreviewView *_listView;
    CDUnknownBlockType _viewWillAppearBlock;
}

@property(copy, nonatomic) CDUnknownBlockType viewWillAppearBlock; // @synthesize viewWillAppearBlock=_viewWillAppearBlock;
@property(nonatomic) _Bool edit; // @synthesize edit=_edit;
@property(retain, nonatomic) BEEPhotoVerticalPreviewView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) long long scrollToImagePos; // @synthesize scrollToImagePos=_scrollToImagePos;
@property(nonatomic) __weak id <BEEPhotoVerticalPreviewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)headerViewInVerticalPreviewView:(id)arg1;
- (id)footerViewInVerticalPreviewView:(id)arg1;
- (void)verticalPreviewView:(id)arg1 didEditImage:(id)arg2 atPos:(long long)arg3 itemView:(id)arg4;
- (void)verticalPreviewView:(id)arg1 didTapedImage:(long long)arg2 itemView:(id)arg3;
- (void)verticalPreviewView:(id)arg1 didDeleteImage:(long long)arg2 itemView:(id)arg3;
- (id)allThumbs;
- (struct CGSize)viewSizeAtPos:(long long)arg1;
- (id)thumbAtPos:(long long)arg1;
- (id)itemViewAtPos:(long long)arg1;
- (void)deleteImageAtPos:(long long)arg1 animated:(_Bool)arg2;
- (void)appendImages:(id)arg1 animated:(_Bool)arg2;
- (void)handleKeyWindowChangedNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImages:(id)arg1 editStatus:(_Bool)arg2 footerView:(id)arg3 business:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

