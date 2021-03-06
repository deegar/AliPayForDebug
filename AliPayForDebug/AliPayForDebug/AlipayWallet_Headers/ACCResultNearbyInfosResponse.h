//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCBaseRPCResponseInfo, ACCResultNearbyBaseInfo, ACCResultNearbyStationInfo, NSArray;

@interface ACCResultNearbyInfosResponse : NSObject
{
    int _pageNo;
    int _pageSize;
    int _totalPage;
    int _exitsPageNo;
    int _exitsPageSize;
    int _exitsTotalPage;
    ACCBaseRPCResponseInfo *_baseRPCResponseInfo;
    NSArray *_items;
    ACCResultNearbyBaseInfo *_baseInfo;
    ACCResultNearbyStationInfo *_stationInfo;
    NSArray *_lineInfo;
    NSArray *_exitInfo;
}

+ (Class)itemsElementClass;
@property(retain, nonatomic) NSArray *exitInfo; // @synthesize exitInfo=_exitInfo;
@property(retain, nonatomic) NSArray *lineInfo; // @synthesize lineInfo=_lineInfo;
@property(retain, nonatomic) ACCResultNearbyStationInfo *stationInfo; // @synthesize stationInfo=_stationInfo;
@property(retain, nonatomic) ACCResultNearbyBaseInfo *baseInfo; // @synthesize baseInfo=_baseInfo;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) int exitsTotalPage; // @synthesize exitsTotalPage=_exitsTotalPage;
@property(nonatomic) int exitsPageSize; // @synthesize exitsPageSize=_exitsPageSize;
@property(nonatomic) int exitsPageNo; // @synthesize exitsPageNo=_exitsPageNo;
@property(nonatomic) int totalPage; // @synthesize totalPage=_totalPage;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) ACCBaseRPCResponseInfo *baseRPCResponseInfo; // @synthesize baseRPCResponseInfo=_baseRPCResponseInfo;
- (void).cxx_destruct;
- (id)getServiceTitle;
- (void)buildInfos;

@end

