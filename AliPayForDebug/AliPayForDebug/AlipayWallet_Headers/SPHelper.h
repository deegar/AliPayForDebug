//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPHelper : NSObject
{
}

+ (_Bool)isIphoneX;
+ (void)openH5ContainerWithUrl:(id)arg1;
+ (int)yearAfterNumFromeDate:(id)arg1 toDate:(id)arg2;
+ (int)dayAfterNumFromeDate:(id)arg1 toDate:(id)arg2;
+ (id)getTimeTextByDate:(id)arg1;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 constraintSize:(struct CGSize)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (void)showToastView:(id)arg1 inView:(id)arg2;
+ (id)spCurUserID;
+ (id)formatedMoney:(id)arg1;
+ (struct CGSize)sizeWithFont:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (_Bool)spIsValidString:(id)arg1;
+ (_Bool)spIsIOS7;
+ (id)spImageWithNamed:(id)arg1;
+ (id)supportedColorString:(id)arg1;
+ (id)formatedAmount:(id)arg1;
+ (id)colorFromHexRGB:(id)arg1;
+ (id)rgbFromString:(id)arg1;
+ (_Bool)isValidDigit:(id)arg1;
+ (_Bool)isEmpty:(id)arg1;
+ (id)buildBoldLabelWidthText:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;
+ (id)buildLabelWithText:(id)arg1 fontSize:(double)arg2 textColor:(id)arg3;

@end

