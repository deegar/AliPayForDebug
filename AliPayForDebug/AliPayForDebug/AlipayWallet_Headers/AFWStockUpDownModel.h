//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSArray, NSString;

@interface AFWStockUpDownModel : FMLBaseModel
{
    _Bool _isHasMore;
    _Bool _disable;
    NSString *_title;
    NSString *_moreActionUrl;
    NSString *_stockRemotelogType;
    unsigned long long _remotelogType;
    NSArray *_list;
    NSString *_scm;
    NSString *_channelId;
}

@property(retain, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(nonatomic) _Bool disable; // @synthesize disable=_disable;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) _Bool isHasMore; // @synthesize isHasMore=_isHasMore;
@property(nonatomic) unsigned long long remotelogType; // @synthesize remotelogType=_remotelogType;
@property(retain, nonatomic) NSString *stockRemotelogType; // @synthesize stockRemotelogType=_stockRemotelogType;
@property(retain, nonatomic) NSString *moreActionUrl; // @synthesize moreActionUrl=_moreActionUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithRpcResult:(id)arg1;

@end

