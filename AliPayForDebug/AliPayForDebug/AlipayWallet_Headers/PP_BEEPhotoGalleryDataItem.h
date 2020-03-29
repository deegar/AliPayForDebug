//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIColor, UIImage;

@interface PP_BEEPhotoGalleryDataItem : NSObject
{
    _Bool _enableBottomAction;
    _Bool _needShowCircle;
    unsigned long long _cellType;
    double _cellWidth;
    double _photoViewHeight;
    NSString *_photoUrl;
    UIImage *_photoDefaultImage;
    NSString *_photoIdentifyUrl;
    NSString *_photoWatermarkText;
    NSString *_photoTitle;
    UIColor *_photoTitleColor;
    NSString *_songId;
    NSString *_photoMiddleTitle;
    NSString *_photoBottomTitle;
    NSString *_accessibilityLabel;
    NSString *_configureValue;
    double _maxScore;
    NSArray *_subtitleDatas;
    NSDictionary *_extendDic;
    double _externalTop;
    struct CGSize _photoIdentifySize;
    struct UIEdgeInsets _photoPadding;
}

@property(nonatomic) double externalTop; // @synthesize externalTop=_externalTop;
@property(nonatomic) _Bool needShowCircle; // @synthesize needShowCircle=_needShowCircle;
@property(retain, nonatomic) NSDictionary *extendDic; // @synthesize extendDic=_extendDic;
@property(retain, nonatomic) NSArray *subtitleDatas; // @synthesize subtitleDatas=_subtitleDatas;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
@property(retain, nonatomic) NSString *configureValue; // @synthesize configureValue=_configureValue;
@property(retain, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(nonatomic) _Bool enableBottomAction; // @synthesize enableBottomAction=_enableBottomAction;
@property(retain, nonatomic) NSString *photoBottomTitle; // @synthesize photoBottomTitle=_photoBottomTitle;
@property(retain, nonatomic) NSString *photoMiddleTitle; // @synthesize photoMiddleTitle=_photoMiddleTitle;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(nonatomic) struct UIEdgeInsets photoPadding; // @synthesize photoPadding=_photoPadding;
@property(retain, nonatomic) UIColor *photoTitleColor; // @synthesize photoTitleColor=_photoTitleColor;
@property(retain, nonatomic) NSString *photoTitle; // @synthesize photoTitle=_photoTitle;
@property(retain, nonatomic) NSString *photoWatermarkText; // @synthesize photoWatermarkText=_photoWatermarkText;
@property(nonatomic) struct CGSize photoIdentifySize; // @synthesize photoIdentifySize=_photoIdentifySize;
@property(retain, nonatomic) NSString *photoIdentifyUrl; // @synthesize photoIdentifyUrl=_photoIdentifyUrl;
@property(retain, nonatomic) UIImage *photoDefaultImage; // @synthesize photoDefaultImage=_photoDefaultImage;
@property(retain, nonatomic) NSString *photoUrl; // @synthesize photoUrl=_photoUrl;
@property(nonatomic) double photoViewHeight; // @synthesize photoViewHeight=_photoViewHeight;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (_Bool)compareDictionary:(id)arg1 toDictionary:(id)arg2;
- (_Bool)compareArray:(id)arg1 toArray:(id)arg2;
- (_Bool)compareString:(id)arg1 toString:(id)arg2;
- (_Bool)isEqualToDataItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

