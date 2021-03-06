//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PETRANSFERPRODRPCResponse.h"

@class BusinessMoreVo, NSArray, NSDictionary, NSString, PEPayeeRecordTodaySum;

@interface TRANSFERPRODCreateSessionRes : PETRANSFERPRODRPCResponse
{
    _Bool _opened;
    _Bool _cifTag;
    _Bool _merchantTag;
    _Bool _topSeller;
    NSString *_sessionId;
    NSString *_redirectUrl;
    NSString *_redirectText;
    NSString *_qrCodeUrl;
    NSString *_printQrCodeUrl;
    NSString *_collectRecordPath;
    NSDictionary *_extInfo;
    NSArray *_rightList;
    NSString *_tipUrl;
    NSString *_showSignEntrance;
    NSString *_recordSubTitle;
    NSString *_businessRecommendTitle;
    NSArray *_businessRecommendVoList;
    BusinessMoreVo *_businessMoreVo;
    NSString *_topSellerLink;
    PEPayeeRecordTodaySum *_todaySum;
}

+ (Class)businessRecommendVoListElementClass;
+ (Class)rightListElementClass;
+ (Class)downListElementClass;
+ (Class)extInfoElementClass;
@property(retain, nonatomic) PEPayeeRecordTodaySum *todaySum; // @synthesize todaySum=_todaySum;
@property(retain, nonatomic) NSString *topSellerLink; // @synthesize topSellerLink=_topSellerLink;
@property(nonatomic) _Bool topSeller; // @synthesize topSeller=_topSeller;
@property(retain, nonatomic) BusinessMoreVo *businessMoreVo; // @synthesize businessMoreVo=_businessMoreVo;
@property(retain, nonatomic) NSArray *businessRecommendVoList; // @synthesize businessRecommendVoList=_businessRecommendVoList;
@property(retain, nonatomic) NSString *businessRecommendTitle; // @synthesize businessRecommendTitle=_businessRecommendTitle;
@property(retain, nonatomic) NSString *recordSubTitle; // @synthesize recordSubTitle=_recordSubTitle;
@property(retain, nonatomic) NSString *showSignEntrance; // @synthesize showSignEntrance=_showSignEntrance;
@property(retain, nonatomic) NSString *tipUrl; // @synthesize tipUrl=_tipUrl;
@property(nonatomic) _Bool merchantTag; // @synthesize merchantTag=_merchantTag;
@property(nonatomic) _Bool cifTag; // @synthesize cifTag=_cifTag;
@property(retain, nonatomic) NSArray *rightList; // @synthesize rightList=_rightList;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool opened; // @synthesize opened=_opened;
@property(retain, nonatomic) NSString *collectRecordPath; // @synthesize collectRecordPath=_collectRecordPath;
@property(retain, nonatomic) NSString *printQrCodeUrl; // @synthesize printQrCodeUrl=_printQrCodeUrl;
@property(retain, nonatomic) NSString *qrCodeUrl; // @synthesize qrCodeUrl=_qrCodeUrl;
@property(retain, nonatomic) NSString *redirectText; // @synthesize redirectText=_redirectText;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

@end

