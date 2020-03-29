//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "O2OAlbumPhotoViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIViewController;
@protocol O2OPhotoBrowerViewDelegate;

@interface O2OPhotoBrowerView : UIScrollView <O2OAlbumPhotoViewDelegate>
{
    _Bool _isShowMask;
    int _imageIndex;
    id <O2OPhotoBrowerViewDelegate> _tapOndelegate;
    UIViewController *_previewVC;
    NSMutableArray *_albumArrays;
    NSMutableArray *_DjangoArrays;
    NSArray *_imagesInfo;
    NSMutableArray *_cellViewArrays;
}

@property(nonatomic) _Bool isShowMask; // @synthesize isShowMask=_isShowMask;
@property(retain, nonatomic) NSMutableArray *cellViewArrays; // @synthesize cellViewArrays=_cellViewArrays;
@property(nonatomic) int imageIndex; // @synthesize imageIndex=_imageIndex;
@property(copy, nonatomic) NSArray *imagesInfo; // @synthesize imagesInfo=_imagesInfo;
@property(copy, nonatomic) NSMutableArray *DjangoArrays; // @synthesize DjangoArrays=_DjangoArrays;
@property(copy, nonatomic) NSMutableArray *albumArrays; // @synthesize albumArrays=_albumArrays;
@property(nonatomic) __weak UIViewController *previewVC; // @synthesize previewVC=_previewVC;
@property(nonatomic) __weak id <O2OPhotoBrowerViewDelegate> tapOndelegate; // @synthesize tapOndelegate=_tapOndelegate;
- (void).cxx_destruct;
- (void)saveImageFinished:(id)arg1;
- (void)TapOnTag:(id)arg1;
- (void)TapHiddenPhotoView;
- (void)saveCurrentPhoto;
- (id)loadingView;
- (void)downloadImageWithWaterMark:(id)arg1 withImageId:(id)arg2 withTagArrays:(id)arg3;
- (void)downloadImage:(id)arg1 withImageId:(id)arg2 withTagArrays:(id)arg3;
- (void)addImageBrowerViewForIdentifier:(id)arg1 withTagArrays:(id)arg2;
- (void)addImageBrowerView:(id)arg1;
- (void)currentImagIndex;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

