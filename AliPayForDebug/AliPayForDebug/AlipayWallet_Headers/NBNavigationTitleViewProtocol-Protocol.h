//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIImageView, UILabel;
@protocol NBNavigationTitleViewDelegate;

@protocol NBNavigationTitleViewProtocol <NSObject>
- (void)hideTitleLoading;
- (void)showTitleLoading;
- (void)setMainTitle:(NSString *)arg1 subtitle:(NSString *)arg2;

@optional
- (UIImageView *)rightIconImageView;
- (void)doAnimationRightIcon:(_Bool)arg1;
- (id <NBNavigationTitleViewDelegate>)delegate;
- (void)setDelegate:(id <NBNavigationTitleViewDelegate>)arg1;
- (void)setCanShowRightIconWhenSubTitleIsWhitespace:(_Bool)arg1;
- (void)setRightIconWidth:(double)arg1;
- (void)setRightIconImage:(UIImage *)arg1;
- (void)setPaddingRight:(double)arg1;
- (void)setPaddingLeft:(double)arg1;
- (UILabel *)subtitleLabel;
- (UILabel *)mainTitleLabel;
@end

