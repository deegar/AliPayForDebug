//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CSExposureUtil : NSObject
{
}

+ (id)indexPathOfView:(id)arg1;
+ (_Bool)autoTrackEnable;
+ (id)extractPartFromDic:(id)arg1 keys:(id)arg2;
+ (void)setupExposureAutoLog:(id)arg1 view:(id)arg2 formatDelegate:(id)arg3;
+ (void)clickAutoLog:(id)arg1 instance:(id)arg2 formatDelegate:(id)arg3;
+ (struct CGRect)_calcAbsoluteFrameOfView:(id)arg1 subNodeFrame:(struct CGRect)arg2 container:(id)arg3;
+ (unsigned long long)_calcExposurePercentOfView:(id)arg1 subNodeFrame:(struct CGRect)arg2 container:(id)arg3;
+ (id)fetchExposureInfoForView:(id)arg1 card:(id)arg2 indexPath:(id)arg3 container:(id)arg4;

@end

