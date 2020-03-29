//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@class CLLocation, NSDictionary;

@interface UIImage (O2OEditImage)
+ (id)rotationImage:(id)arg1 rotation:(long long)arg2;
+ (id)imageRotation:(id)arg1 rotation:(long long)arg2;
+ (id)imagecutWithOriginalImage:(id)arg1 proportion:(double)arg2;
+ (id)imagecutWithOriginalImage:(id)arg1 withCutRect:(struct CGRect)arg2;
- (id)getUTCFormattedDate:(id)arg1;
- (id)gpsMetaWithLocation:(id)arg1;
- (id)metaWithData:(id)arg1 location:(id)arg2;
- (void)o2o_addGPSMetaWithCLLocation:(id)arg1;
@property(retain, nonatomic) CLLocation *location; // @dynamic location;
@property(retain, nonatomic) NSDictionary *metaData; // @dynamic metaData;
- (_Bool)isImageHasAlphaChannel;
@end

