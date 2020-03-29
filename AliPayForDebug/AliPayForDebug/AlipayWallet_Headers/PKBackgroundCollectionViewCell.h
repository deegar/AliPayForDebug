//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PKImageCollectionViewCell.h"

@class NSURL, PKLineLabel, UIActivityIndicatorView, UIImageView;

@interface PKBackgroundCollectionViewCell : PKImageCollectionViewCell
{
    _Bool _showDownloadLayer;
    _Bool _currentSelected;
    _Bool _isDownLoading;
    NSURL *_originalImageUrl;
    UIActivityIndicatorView *_activityIndicator;
    PKLineLabel *_flowLayer;
    PKLineLabel *_overLayer;
    UIImageView *_iconView;
    double _progress;
}

@property(nonatomic) _Bool isDownLoading; // @synthesize isDownLoading=_isDownLoading;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) PKLineLabel *overLayer; // @synthesize overLayer=_overLayer;
@property(retain, nonatomic) PKLineLabel *flowLayer; // @synthesize flowLayer=_flowLayer;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) _Bool currentSelected; // @synthesize currentSelected=_currentSelected;
@property(nonatomic) _Bool showDownloadLayer; // @synthesize showDownloadLayer=_showDownloadLayer;
@property(retain, nonatomic) NSURL *originalImageUrl; // @synthesize originalImageUrl=_originalImageUrl;
- (void).cxx_destruct;
- (void)doloadOriginalImage:(id)arg1 compelet:(CDUnknownBlockType)arg2;
- (_Bool)needsDoloadOriginalImage;
- (void)setupUI;

@end

