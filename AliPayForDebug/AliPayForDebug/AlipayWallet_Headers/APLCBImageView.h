//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SUImageView.h"

@class NSString, UIImage;

@interface APLCBImageView : SUImageView
{
    int _imageAPLCBdealType;
    NSString *_imageAPLCBUrl;
    NSString *_imageAPLCBbizType;
    UIImage *_imageAPLCBholder;
    struct CGSize _imageAPLCBsize;
}

+ (void)getImageAPLCBIdentifer_ap:(id)arg1 type:(unsigned long long)arg2 size:(struct CGSize)arg3 business:(id)arg4;
+ (void)replaceMonitorMethod;
@property(nonatomic) int imageAPLCBdealType; // @synthesize imageAPLCBdealType=_imageAPLCBdealType;
@property(nonatomic) struct CGSize imageAPLCBsize; // @synthesize imageAPLCBsize=_imageAPLCBsize;
@property(retain, nonatomic) UIImage *imageAPLCBholder; // @synthesize imageAPLCBholder=_imageAPLCBholder;
@property(retain, nonatomic) NSString *imageAPLCBbizType; // @synthesize imageAPLCBbizType=_imageAPLCBbizType;
@property(retain, nonatomic) NSString *imageAPLCBUrl; // @synthesize imageAPLCBUrl=_imageAPLCBUrl;
- (void).cxx_destruct;
- (void)setImageAPLCBIdentifer_ap:(id)arg1 type:(unsigned long long)arg2 placeHolder:(id)arg3 size:(struct CGSize)arg4 business:(id)arg5 animation:(_Bool)arg6;
- (void)resetImage;
- (void)cleanImage;
- (id)init_AlipayLife;

@end

