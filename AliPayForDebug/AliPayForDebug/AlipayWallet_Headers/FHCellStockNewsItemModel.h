//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FHTemplateStockScrollViewCellModel.h"

@class NSString;

@interface FHCellStockNewsItemModel : FHTemplateStockScrollViewCellModel
{
    NSString *_obId;
    NSString *_obType;
    NSString *_column;
    NSString *_title;
    NSString *_tradingStateText;
}

@property(copy, nonatomic) NSString *tradingStateText; // @synthesize tradingStateText=_tradingStateText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *column; // @synthesize column=_column;
@property(copy, nonatomic) NSString *obType; // @synthesize obType=_obType;
@property(copy, nonatomic) NSString *obId; // @synthesize obId=_obId;
- (void).cxx_destruct;
- (id)accessibilityText;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

