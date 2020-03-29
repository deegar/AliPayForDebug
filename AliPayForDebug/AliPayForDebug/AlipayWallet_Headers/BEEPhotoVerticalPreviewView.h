//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "BEEPhotoVerticalPreviewItemViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol BEEPhotoVerticalPreviewViewDelegate;

@interface BEEPhotoVerticalPreviewView : UITableView <UITableViewDelegate, UITableViewDataSource, BEEPhotoVerticalPreviewItemViewDelegate>
{
    _Bool _edit;
    NSArray *_images;
    NSDictionary *_currentImage;
    NSArray *_templates;
    id <BEEPhotoVerticalPreviewViewDelegate> _viewDelegate;
    NSString *_business;
}

+ (id)templateFromImageData:(id)arg1;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(nonatomic) __weak id <BEEPhotoVerticalPreviewViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(retain, nonatomic) NSArray *templates; // @synthesize templates=_templates;
@property(retain, nonatomic) NSDictionary *currentImage; // @synthesize currentImage=_currentImage;
@property(nonatomic) _Bool edit; // @synthesize edit=_edit;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (id)allThumbs;
- (struct CGSize)viewSizeAtPos:(long long)arg1;
- (id)thumbAtPos:(long long)arg1;
- (void)loadOriginImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didEditButtonPressed:(id)arg1;
- (void)didDeleteButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)setScrollToImagePos:(long long)arg1;
- (id)itemViewAtPos:(long long)arg1;
- (void)editImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteImageAtPos:(long long)arg1 animated:(_Bool)arg2;
- (void)deleteImageAtPos:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)appendImages:(id)arg1 animated:(_Bool)arg2;
- (void)reloadHeaderView;
- (void)reloadFooterView;
- (id)initWithFrame:(struct CGRect)arg1 images:(id)arg2 editStatus:(_Bool)arg3 business:(id)arg4 viewDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

