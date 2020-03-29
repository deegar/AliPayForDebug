//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VIViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UISwitch, UIView, VIProduct, VIProductResponse;

@interface VIBioManagerViewController : VIViewController
{
    VIProductResponse *_resp;
    NSString *_productType;
    NSString *_returnType;
    NSString *_protocolURL;
    _Bool _isWithoutCallback;
    CDUnknownBlockType _submitActionBlock;
    CDUnknownBlockType _completeBlock;
    VIProductResponse *_response;
    VIProduct *_product;
    UIButton *_bioIconView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_openBtn;
    UIButton *_closeBtn;
    UIView *_assistBGView;
    UIScrollView *_scrollView;
    UIImageView *_bigIconView;
    UIButton *_skipBtn;
    UIView *_sliderView;
    UIView *_sliderTopLineView;
    UIView *_sliderBottomLineView;
    UIImageView *_sliderIcon;
    UILabel *_sliderText;
    UISwitch *_sliderSwitch;
    UILabel *_bottomGuideLabel;
    UILabel *_introduceLabel;
    NSString *_introduceUrl;
    NSString *_productStatus;
    NSString *_sliderStatus;
    NSString *_productId;
}

@property(nonatomic) _Bool isWithoutCallback; // @synthesize isWithoutCallback=_isWithoutCallback;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *sliderStatus; // @synthesize sliderStatus=_sliderStatus;
@property(copy, nonatomic) NSString *productStatus; // @synthesize productStatus=_productStatus;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *introduceUrl; // @synthesize introduceUrl=_introduceUrl;
@property(retain, nonatomic) UILabel *introduceLabel; // @synthesize introduceLabel=_introduceLabel;
@property(retain, nonatomic) UILabel *bottomGuideLabel; // @synthesize bottomGuideLabel=_bottomGuideLabel;
@property(retain, nonatomic) UISwitch *sliderSwitch; // @synthesize sliderSwitch=_sliderSwitch;
@property(retain, nonatomic) UILabel *sliderText; // @synthesize sliderText=_sliderText;
@property(retain, nonatomic) UIImageView *sliderIcon; // @synthesize sliderIcon=_sliderIcon;
@property(retain, nonatomic) UIView *sliderBottomLineView; // @synthesize sliderBottomLineView=_sliderBottomLineView;
@property(retain, nonatomic) UIView *sliderTopLineView; // @synthesize sliderTopLineView=_sliderTopLineView;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) UIButton *skipBtn; // @synthesize skipBtn=_skipBtn;
@property(retain, nonatomic) UIImageView *bigIconView; // @synthesize bigIconView=_bigIconView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *assistBGView; // @synthesize assistBGView=_assistBGView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *openBtn; // @synthesize openBtn=_openBtn;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *bioIconView; // @synthesize bioIconView=_bioIconView;
@property(nonatomic) __weak VIProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) VIProductResponse *response; // @synthesize response=_response;
@property(nonatomic) __weak CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType submitActionBlock; // @synthesize submitActionBlock=_submitActionBlock;
- (void).cxx_destruct;
- (void)introduceHandler;
- (void)setupUI;
- (void)updateUIWithResponse:(id)arg1;
- (void)configReturnButton:(id)arg1;
- (void)switchAction:(id)arg1;
- (void)popVC;
- (void)back;
- (void)submitAction;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

