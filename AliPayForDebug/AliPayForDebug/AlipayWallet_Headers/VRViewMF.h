//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VRView.h"

#import "MFWidgetPluginProtocol-Protocol.h"

@class NSString, VRImageView;

@interface VRViewMF : VRView <MFWidgetPluginProtocol>
{
    _Bool _intellgentCrop;
    NSString *_backgroundImage;
    VRImageView *_backgroundImageView;
    NSString *_intellgentCropRegion;
    NSString *_bgContentMode;
    NSString *_bgRaidus;
    NSString *_business;
    NSString *_bizType;
    NSString *_dealTypeString;
    NSString *_qualityValueString;
    NSString *_useSourceTypeString;
    NSString *_showBlurString;
}

+ (id)tagType;
@property(copy, nonatomic) NSString *showBlurString; // @synthesize showBlurString=_showBlurString;
@property(copy, nonatomic) NSString *useSourceTypeString; // @synthesize useSourceTypeString=_useSourceTypeString;
@property(copy, nonatomic) NSString *qualityValueString; // @synthesize qualityValueString=_qualityValueString;
@property(copy, nonatomic) NSString *dealTypeString; // @synthesize dealTypeString=_dealTypeString;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *bgRaidus; // @synthesize bgRaidus=_bgRaidus;
@property(copy, nonatomic) NSString *bgContentMode; // @synthesize bgContentMode=_bgContentMode;
@property(copy, nonatomic) NSString *intellgentCropRegion; // @synthesize intellgentCropRegion=_intellgentCropRegion;
@property(nonatomic) _Bool intellgentCrop; // @synthesize intellgentCrop=_intellgentCrop;
@property(retain, nonatomic) VRImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (void)setBorderBottom:(double)arg1;
- (void)setBorderTop:(double)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 withPlaceholder:(id)arg2 rawSize:(struct CGSize)arg3;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

