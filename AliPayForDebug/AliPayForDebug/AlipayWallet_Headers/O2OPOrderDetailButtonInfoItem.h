//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, O2OPOrderDetailItem;

@interface O2OPOrderDetailButtonInfoItem : NSObject
{
    NSString *_desc;
    NSString *_type;
    NSString *_buttonUrl;
    NSString *_payPhaseId;
    NSDictionary *_data;
    O2OPOrderDetailItem *_detailItem;
}

+ (id)itemWithDic:(id)arg1;
@property(retain, nonatomic) O2OPOrderDetailItem *detailItem; // @synthesize detailItem=_detailItem;
@property(readonly, copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *payPhaseId; // @synthesize payPhaseId=_payPhaseId;
@property(readonly, copy, nonatomic) NSString *buttonUrl; // @synthesize buttonUrl=_buttonUrl;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

