//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;

@interface UIImageView (O2OWebImage)
- (unsigned long long)imageQualityByNetwork;
- (_Bool)hasCacheWithUrl:(id)arg1 req:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)o2o_getImageCacheDataForIdentifier:(id)arg1;
- (void)o2o_setProgressImageLoadingWithURL:(id)arg1 business:(id)arg2 size:(struct CGSize)arg3 loadingImage:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)o2o_setImageWithURL:(id)arg1 business:(id)arg2 size:(struct CGSize)arg3 loadingImage:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) _Bool forceUsingScaleMode;
@property(retain, nonatomic) NSString *originalUrl;
- (void)o2o_setImageWithURL:(id)arg1 business:(id)arg2 loadingImage:(id)arg3 downloadOrigin:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)o2o_setImageWithURL:(id)arg1 business:(id)arg2 loadingImage:(id)arg3 failureImage:(id)arg4;
- (void)o2o_setImageWithURL:(id)arg1 loadingImage:(id)arg2 downloadOrigin:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)o2o_setImageWithURL:(id)arg1 business:(id)arg2 loadingImage:(id)arg3;
- (void)o2o_setImageWithURL:(id)arg1 loadingImage:(id)arg2;
@end

