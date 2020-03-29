//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HCCardViewBaseCollectionViewCell.h"

#import "HCCardTemplate-Protocol.h"

@class NSString, SUImageView, UIImageView;

@interface HCCardTabTitleCell : HCCardViewBaseCollectionViewCell <HCCardTemplate>
{
    UIImageView *_lineleft;
    UIImageView *_lineright;
    SUImageView *_artImageView;
}

+ (struct CGSize)templateSize:(id)arg1;
@property(retain, nonatomic) SUImageView *artImageView; // @synthesize artImageView=_artImageView;
@property(retain, nonatomic) UIImageView *lineright; // @synthesize lineright=_lineright;
@property(retain, nonatomic) UIImageView *lineleft; // @synthesize lineleft=_lineleft;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)layout;
- (void)reloadCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

