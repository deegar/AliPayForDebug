//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableDictionary;
@protocol ZebraDataSource, ZebraViewDelegate;

@interface ZebraView : UIView
{
    _Bool _clickable;
    _Bool _hasLoaded;
    CDUnknownBlockType _clickBlock;
    NSDictionary *_config;
    id <ZebraDataSource> _dataSource;
    id <ZebraViewDelegate> _delegate;
    NSMutableDictionary *_imageRequestDic;
    NSMutableDictionary *_lottieSrcRequestDic;
    NSMutableDictionary *_placeholderRequestDic;
}

@property(nonatomic) _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain, nonatomic) NSMutableDictionary *placeholderRequestDic; // @synthesize placeholderRequestDic=_placeholderRequestDic;
@property(retain, nonatomic) NSMutableDictionary *lottieSrcRequestDic; // @synthesize lottieSrcRequestDic=_lottieSrcRequestDic;
@property(retain, nonatomic) NSMutableDictionary *imageRequestDic; // @synthesize imageRequestDic=_imageRequestDic;
@property(nonatomic) __weak id <ZebraViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ZebraDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) _Bool clickable; // @synthesize clickable=_clickable;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)getResourceWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getImageResourceWithUrl:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (id)valueWithOriString:(id)arg1 relativeValue:(double)arg2;
- (void)checkAndCallback;
- (void)placeholderCallback;
- (id)getLottieViewWithConfig:(id)arg1;
- (id)getImageViewWithConfig:(id)arg1;
- (void)viewClicked:(id)arg1;
- (id)getLabelWithConfig:(id)arg1;
- (id)getBoxViewWithConfig:(id)arg1;
- (id)getViewWithConfig:(id)arg1;
- (void)updateLayoutOfView:(id)arg1 relativeView:(id)arg2 layoutType:(id)arg3 hAlign:(id)arg4 vAlign:(id)arg5 attribute:(id)arg6 subViewSize:(struct CGSize)arg7 superViewSize:(struct CGSize)arg8;
- (void)startLoadResource;
- (void)_setup;
- (id)initWithConfig:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;

@end

