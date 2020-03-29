//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSString, UIColor;

@interface AUActionSheetTableViewCell : UITableViewCell
{
    NSDictionary *_normalAttributedLabel;
    NSDictionary *_highLightedAttributeLabel;
    UIColor *_normalBackgroundColor;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(retain, nonatomic) NSDictionary *highLightedAttributeLabel; // @synthesize highLightedAttributeLabel=_highLightedAttributeLabel;
@property(retain, nonatomic) NSDictionary *normalAttributedLabel; // @synthesize normalAttributedLabel=_normalAttributedLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)accessibilityElementDidBecomeFocused;

@end

