//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MFAttributeLabel, NSDictionary;

@interface TFHomeATRollItemView : UIControl
{
    NSDictionary *_currentData;
    MFAttributeLabel *_lblTitleLeft;
    MFAttributeLabel *_lblTitleMid;
    MFAttributeLabel *_lblTitleRight;
    MFAttributeLabel *_lblSubtitle;
    MFAttributeLabel *_lblDesc;
}

@property(retain, nonatomic) MFAttributeLabel *lblDesc; // @synthesize lblDesc=_lblDesc;
@property(retain, nonatomic) MFAttributeLabel *lblSubtitle; // @synthesize lblSubtitle=_lblSubtitle;
@property(retain, nonatomic) MFAttributeLabel *lblTitleRight; // @synthesize lblTitleRight=_lblTitleRight;
@property(retain, nonatomic) MFAttributeLabel *lblTitleMid; // @synthesize lblTitleMid=_lblTitleMid;
@property(retain, nonatomic) MFAttributeLabel *lblTitleLeft; // @synthesize lblTitleLeft=_lblTitleLeft;
@property(copy, nonatomic) NSDictionary *currentData; // @synthesize currentData=_currentData;
- (void).cxx_destruct;
- (void)updateFrame;
- (void)setupSubviews;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
