//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HCCardUtils : NSObject
{
}

+ (_Bool)isScroll;
+ (id)bizTypeWithCard:(id)arg1;
+ (id)translateAttributeText:(id)arg1;
+ (double)iconBorderWidth:(double)arg1;
+ (double)iconCornerRadius:(double)arg1;
+ (id)filterHTML:(id)arg1;
+ (double)hcCardCurrentFactor;
+ (_Bool)isValidColor:(id)arg1;
+ (void)bindStyle:(id)arg1 csNode:(id)arg2;
+ (struct CGSize)sizeWithRichText:(id)arg1 font:(id)arg2 textColor:(id)arg3 maxNumberOfLines:(unsigned long long)arg4 lineBreakMode:(long long)arg5 maxSize:(struct CGSize)arg6;
+ (id)calcLabel;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2 textColor:(id)arg3 maxNumberOfLines:(unsigned long long)arg4 lineBreakMode:(long long)arg5 maxSize:(struct CGSize)arg6;
+ (id)fontWithName:(id)arg1 size:(long long)arg2;
+ (id)fontWithName:(id)arg1 size:(long long)arg2 factor:(double)arg3;
+ (double)csPixelFromString:(id)arg1;
+ (double)csPixel:(double)arg1 factor:(double)arg2;

@end

