//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFCBaseModelConverter.h"

@interface AFCModelConverter : AFCBaseModelConverter
{
}

- (CDStruct_bedd0ad2)makeLoadingInFrame:(struct CGRect)arg1;
- (void)forMatchWithTotalDataSize:(long long)arg1 maxShownDataSize:(long long)arg2 currShownDataSize:(long long)arg3 getAbsoluteItemDate:(CDUnknownBlockType)arg4 getRelativeItemDate:(CDUnknownBlockType)arg5 setMatchedRelativeItem:(CDUnknownBlockType)arg6;
- (void)hasBeforeDateWithLastDate:(CDStruct_7f4a1e90)arg1 beforeDate:(CDStruct_7f4a1e90)arg2 inDataSize:(long long)arg3 getRelativeItemDate:(CDUnknownBlockType)arg4 setMatchedRelativeItem:(CDUnknownBlockType)arg5;
- (void)_forMatchWithLastDate:(CDStruct_7f4a1e90)arg1 beforeDate:(CDStruct_7f4a1e90)arg2 inDataSize:(long long)arg3 getRelativeItemDate:(CDUnknownBlockType)arg4 setMatchedRelativeItem:(CDUnknownBlockType)arg5;
- (_Bool)_matchDate:(CDStruct_7f4a1e90)arg1 withMI:(unsigned long long)arg2 lastDate:(CDStruct_7f4a1e90)arg3;
- (unsigned long long)_makeMI:(CDStruct_7f4a1e90)arg1 date2:(CDStruct_7f4a1e90)arg2;
- (CDStruct_af61540b)vPairsHeaderWithLeftPairs:(id)arg1 leftStart:(struct CGPoint)arg2 rightVPairs:(id)arg3 rightEnd:(struct CGPoint)arg4 backgroundColor:(unsigned long long)arg5;
- (CDStruct_af61540b)vPairsHeaderWithLeftPairs:(id)arg1 rightVPairs:(id)arg2 frame:(struct CGRect)arg3 backgroundColor:(unsigned long long)arg4;
- (CDStruct_6e855a40 *)findLineInData:(id)arg1 withTag:(int)arg2;
- (CDStruct_e63a7e61 *)findPillarLineInData:(id)arg1 withTag:(int)arg2;
- (struct CGPoint)getPointAtIndex:(unsigned long long)arg1 bySDData:(id)arg2 lineTag:(int)arg3;
- (long long)getReletiveIndexAtPoint:(struct CGPoint)arg1 bySDData:(id)arg2 lineTag:(int)arg3;
- (CDStruct_af61540b)cursorStyleWithFontSize:(double)arg1 frame:(struct CGRect)arg2 backgroundColor:(unsigned long long)arg3 edgeInset:(struct UIEdgeInsets)arg4 text:(id)arg5 textColor:(unsigned long long)arg6 textAlignment:(long long)arg7;
- (CDStruct_af61540b)cursorMidstylesWithPoint:(struct CGPoint)arg1;
- (double)computeFontSizeWithStr:(id)arg1 maxFontSize:(double)arg2 fontSizeStep:(double)arg3 maxInSize:(struct CGSize)arg4;
- (id)percentStrsHPrice:(CDStruct_dd4ade68)arg1 lPrice:(CDStruct_dd4ade68)arg2 cPrice:(CDStruct_dd4ade68)arg3 rowCount:(unsigned long long)arg4;
- (id)priceStrsWithhPrice:(CDStruct_dd4ade68)arg1 lPrice:(CDStruct_dd4ade68)arg2 rowCount:(unsigned long long)arg3;
- (id)percentStrWithValue:(double)arg1;
- (double)percentWithValue:(double)arg1 comparePrice:(double)arg2;
- (CDStruct_af61540b)setGridLineLTStrs:(id)arg1 rbStrs:(id)arg2 colors:(id)arg3 lineXs:(id)arg4 fontSize:(int)arg5 dashLine:(int)arg6 bold:(int)arg7 frame:(struct CGRect)arg8 isHorizontal:(_Bool)arg9;
- (CDStruct_af61540b)setGridLineLTStrs:(id)arg1 rbStrs:(id)arg2 colors:(id)arg3 steps:(id)arg4 fontSize:(int)arg5 dashLine:(int)arg6 bold:(int)arg7 frame:(struct CGRect)arg8 isHorizontal:(_Bool)arg9;
- (CDStruct_af61540b)setGridLineLTStrs:(id)arg1 rbStrs:(id)arg2 colors:(id)arg3 frame:(struct CGRect)arg4 isHorizontal:(_Bool)arg5;
- (double)computeRegionLeftFontSizeWith:(id)arg1;
- (double)setRegionWithLeftStr:(id)arg1 rightMaxStr:(id)arg2 containRegion1Header:(_Bool)arg3 containRegion2Header:(_Bool)arg4 containRegion1Footer:(_Bool)arg5 containRegion2Footer:(_Bool)arg6 containRegion2:(_Bool)arg7 toSGData:(id)arg8;
- (long long)minDotLength:(double)arg1;
- (unsigned long long)computePromoteHighestLowestPrice:(double)arg1 hPrice:(CDStruct_dd4ade68 *)arg2 lPrice:(CDStruct_dd4ade68 *)arg3 maxRowCount:(unsigned long long)arg4 minRowCount:(unsigned long long)arg5;
- (unsigned long long)computeHighestLowestPrice:(double)arg1 hPrice:(CDStruct_dd4ade68 *)arg2 lPrice:(CDStruct_dd4ade68 *)arg3 maxRowCount:(unsigned long long)arg4 minRowCount:(unsigned long long)arg5;
- (void)computeHighestLowestWithHPrice:(CDStruct_dd4ade68 *)arg1 lPrice:(CDStruct_dd4ade68 *)arg2 cPrice:(CDStruct_dd4ade68)arg3 rowCount:(long long)arg4;
- (void)computeHighestLowestPrice:(CDStruct_dd4ade68 *)arg1 lPrice:(CDStruct_dd4ade68 *)arg2 cPrice:(CDStruct_dd4ade68 *)arg3;
- (void)compareHPrice:(CDStruct_dd4ade68 *)arg1 lPrice:(CDStruct_dd4ade68 *)arg2 cPrice:(CDStruct_dd4ade68)arg3;

@end

