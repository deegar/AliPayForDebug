//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIImage;

@interface APScanViewConfig : NSObject
{
    _Bool _hideAnimation;
    _Bool _showTorch;
    _Bool _showMoreAction;
    _Bool _showFeedback;
    _Bool _showRedDot;
    _Bool _isARConfig;
    _Bool _isScanConfig;
    _Bool _showPayCode;
    _Bool _showAlbum;
    NSString *_bizType;
    NSString *_bizNoticeText;
    UIColor *_bizNoticeTextColor;
    NSString *_bizActionText;
    UIColor *_bizActionTextColor;
    NSString *_bizActionUrl;
    NSString *_tabTitle;
    UIColor *_tabTitleNormalColor;
    UIColor *_tabTitleSelectedColor;
    NSString *_tabNormalImage;
    NSString *_tabSelectedImage;
    NSString *_tabTipImage;
    NSString *_bgImageView;
    UIImage *_LTCornerImage;
    UIImage *_RTCornerImage;
    UIImage *_LBCornerImage;
    UIImage *_RBCornerImage;
    NSArray *_listItemArray;
    long long _scanType;
    struct CGRect _bizNoticeRect;
    struct CGRect _bizActionRect;
    struct CGRect _animationRect;
}

+ (struct CGRect)constructScanAnimationRect:(unsigned long long)arg1;
+ (id)loadNoticeConfig;
+ (id)constructBarcodeConfig;
+ (id)constructQRCodeConfig;
+ (id)constructDefaultConfig;
@property(nonatomic) _Bool showAlbum; // @synthesize showAlbum=_showAlbum;
@property(nonatomic) _Bool showPayCode; // @synthesize showPayCode=_showPayCode;
@property(nonatomic) _Bool isScanConfig; // @synthesize isScanConfig=_isScanConfig;
@property(nonatomic) long long scanType; // @synthesize scanType=_scanType;
@property(nonatomic) _Bool isARConfig; // @synthesize isARConfig=_isARConfig;
@property(retain, nonatomic) NSArray *listItemArray; // @synthesize listItemArray=_listItemArray;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(nonatomic) _Bool showFeedback; // @synthesize showFeedback=_showFeedback;
@property(nonatomic) _Bool showMoreAction; // @synthesize showMoreAction=_showMoreAction;
@property(nonatomic) _Bool showTorch; // @synthesize showTorch=_showTorch;
@property(nonatomic) _Bool hideAnimation; // @synthesize hideAnimation=_hideAnimation;
@property(nonatomic) struct CGRect animationRect; // @synthesize animationRect=_animationRect;
@property(retain, nonatomic) UIImage *RBCornerImage; // @synthesize RBCornerImage=_RBCornerImage;
@property(retain, nonatomic) UIImage *LBCornerImage; // @synthesize LBCornerImage=_LBCornerImage;
@property(retain, nonatomic) UIImage *RTCornerImage; // @synthesize RTCornerImage=_RTCornerImage;
@property(retain, nonatomic) UIImage *LTCornerImage; // @synthesize LTCornerImage=_LTCornerImage;
@property(copy, nonatomic) NSString *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(copy, nonatomic) NSString *tabTipImage; // @synthesize tabTipImage=_tabTipImage;
@property(copy, nonatomic) NSString *tabSelectedImage; // @synthesize tabSelectedImage=_tabSelectedImage;
@property(copy, nonatomic) NSString *tabNormalImage; // @synthesize tabNormalImage=_tabNormalImage;
@property(retain, nonatomic) UIColor *tabTitleSelectedColor; // @synthesize tabTitleSelectedColor=_tabTitleSelectedColor;
@property(retain, nonatomic) UIColor *tabTitleNormalColor; // @synthesize tabTitleNormalColor=_tabTitleNormalColor;
@property(copy, nonatomic) NSString *tabTitle; // @synthesize tabTitle=_tabTitle;
@property(copy, nonatomic) NSString *bizActionUrl; // @synthesize bizActionUrl=_bizActionUrl;
@property(nonatomic) struct CGRect bizActionRect; // @synthesize bizActionRect=_bizActionRect;
@property(retain, nonatomic) UIColor *bizActionTextColor; // @synthesize bizActionTextColor=_bizActionTextColor;
@property(copy, nonatomic) NSString *bizActionText; // @synthesize bizActionText=_bizActionText;
@property(nonatomic) struct CGRect bizNoticeRect; // @synthesize bizNoticeRect=_bizNoticeRect;
@property(retain, nonatomic) UIColor *bizNoticeTextColor; // @synthesize bizNoticeTextColor=_bizNoticeTextColor;
@property(copy, nonatomic) NSString *bizNoticeText; // @synthesize bizNoticeText=_bizNoticeText;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
- (void).cxx_destruct;
- (void)showAnimationWithType:(unsigned long long)arg1;
- (id)initWithDic:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSString *iconKey;
@property(retain, nonatomic) NSString *transIconKey;

@end

