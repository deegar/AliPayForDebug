//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSArray, NSString;

@interface SDKLineIndicatorModel : FMLBaseModel
{
    NSString *_indicatorName;
    NSArray *_timeStaps;
    NSArray *_indicatorLineModel;
}

@property(retain, nonatomic) NSArray *indicatorLineModel; // @synthesize indicatorLineModel=_indicatorLineModel;
@property(retain, nonatomic) NSArray *timeStaps; // @synthesize timeStaps=_timeStaps;
@property(retain, nonatomic) NSString *indicatorName; // @synthesize indicatorName=_indicatorName;
- (void).cxx_destruct;

@end
