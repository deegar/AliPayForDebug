//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BEEPhotoBrowserDelegate-Protocol.h"

@class BEEPhoto, NSString, UIImage;

@interface REARImageBrowser : NSObject <BEEPhotoBrowserDelegate>
{
    UIImage *_image;
    BEEPhoto *_photo;
}

@property(retain, nonatomic) BEEPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)rightBarItemCustomViewForPhotoBrowser:(id)arg1;
- (id)photoBrowserActionItemArray:(id)arg1;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (id)generateBrowserVC;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

