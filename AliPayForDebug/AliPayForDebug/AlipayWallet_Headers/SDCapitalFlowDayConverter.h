//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFCSimpleModelConverter.h"

@interface SDCapitalFlowDayConverter : AFCSimpleModelConverter
{
    struct CGRect _preRect;
}

@property(nonatomic) struct CGRect preRect; // @synthesize preRect=_preRect;
- (struct CGSize)getFontSize:(id)arg1 fontSize:(double)arg2;
- (unsigned long long)xAxisDataSize;
- (unsigned long long)lineDataSize;
- (unsigned long long)pillarDataSize;
- (unsigned long long)pillarGroupCount;
- (double)legendRegionHeight;
- (struct CGSize)graphRegionPillarDateSize;
- (double)graphRegionTextDateGap;
- (double)graphRegionPillarTextGap;
- (double)graphRegionPillarHeight;
- (struct CGSize)graphRegionPillarTextSize;
- (double)graphRegionWidth;
- (double)graphRegionHeight;
- (double)titleRegionHeight;
- (double)designScreenHeight;
- (double)getValueByDataSize:(double)arg1 dataSize:(double)arg2;
- (double)getPillarTextFontSize;
- (struct CGRect)getTitleFrame:(unsigned long long)arg1 content:(id)arg2 fontSize:(double)arg3;
- (double)getMarketLeftMargin:(unsigned long long)arg1;
- (double)getMarketGap;
- (double)getMarketGraphWidth;
- (double)getPillarWidth;
- (double)getPillarGap;
- (double)getPxRatio:(CDStruct_dd4ade68)arg1 lowest:(CDStruct_dd4ade68)arg2;
- (double)getPxRatio;
- (long long)singlePillarGroupDataSize;
- (_Bool)isMutipleGroup;
- (void)textAbovePillar:(CDStruct_af61540b)arg1 pillarHeight:(double)arg2 pillar:(id)arg3 fontSize:(double)arg4 index:(unsigned long long)arg5 baseX:(double)arg6 baseY:(double)arg7;
- (void)pillarLineText:(struct CGRect)arg1 pillar:(id)arg2 regionDatas:(CDStruct_9fdde268)arg3 texts:(CDStruct_af61540b)arg4 index:(unsigned long long)arg5;
- (void)convertRegionLegends:(id)arg1;
- (void)convertRegionXAxis:(id)arg1;
- (void)convertRegionDatas:(id)arg1;
- (void)convertGridRows:(id)arg1;
- (void)convertRegionTitles:(id)arg1;
- (void)prepareToConvert;
- (void)convertUserDefineLayerToData:(id)arg1;
- (void)convertFloatingLayerToData:(id)arg1;
- (void)convertGraphLayerToData:(id)arg1;
- (id)currentAxisModel;
- (id)currentDataParams;
- (id)currentEnvParam;

@end

