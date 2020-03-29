//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HCCardViewBaseCollectionViewCell.h"

#import "HCCardTemplate-Protocol.h"

@class MFAttributeLabel, NSString;

@interface HCCardNewbieUpgradeCell : HCCardViewBaseCollectionViewCell <HCCardTemplate>
{
    MFAttributeLabel *_titleLabel;
    NSString *_scheme;
    NSString *_scm;
}

+ (id)titleFont;
+ (struct CGSize)templateSize:(id)arg1;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) MFAttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)reloadCard:(id)arg1;
- (void)layout;
- (void)prepareExposureInfo:(id)arg1;
- (void)onClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

