//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSArray, NSString;

@interface AFWIndexStockModel : FMLBaseModel
{
    int _orderRule;
    NSArray *_list;
    NSString *_title;
}

@property(nonatomic) int orderRule; // @synthesize orderRule=_orderRule;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (id)initWithRpc:(id)arg1;

@end
