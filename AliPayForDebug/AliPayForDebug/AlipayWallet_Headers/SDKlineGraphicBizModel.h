//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SDKlineGraphicBizModel : NSObject
{
    NSMutableDictionary *_indicatorLineAttrDic;
    NSMutableArray *_bizDataArray_recover;
    NSMutableArray *_bizDataArray_nonRecover;
    NSMutableDictionary *_bizSignalDic_recover;
    NSMutableDictionary *_bizSignalDic_nonRecover;
}

@property(retain, nonatomic) NSMutableDictionary *bizSignalDic_nonRecover; // @synthesize bizSignalDic_nonRecover=_bizSignalDic_nonRecover;
@property(retain, nonatomic) NSMutableDictionary *bizSignalDic_recover; // @synthesize bizSignalDic_recover=_bizSignalDic_recover;
@property(retain, nonatomic) NSMutableArray *bizDataArray_nonRecover; // @synthesize bizDataArray_nonRecover=_bizDataArray_nonRecover;
@property(retain, nonatomic) NSMutableArray *bizDataArray_recover; // @synthesize bizDataArray_recover=_bizDataArray_recover;
@property(retain, nonatomic) NSMutableDictionary *indicatorLineAttrDic; // @synthesize indicatorLineAttrDic=_indicatorLineAttrDic;
- (void).cxx_destruct;
- (id)init;

@end
