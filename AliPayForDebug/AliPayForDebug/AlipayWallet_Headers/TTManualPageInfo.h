//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSLock, NSMutableArray, NSNumber, NSString, TTNewChinfoItem, TTOpenIdItem;

@interface TTManualPageInfo : NSObject <NSCopying>
{
    _Bool _didEnd;
    _Bool _isPageRepeat;
    _Bool _isBack;
    _Bool _isMultistepBack;
    _Bool _isTracking;
    NSObject *_weakIndex;
    NSString *_pageId;
    NSString *_pageSpmId;
    NSNumber *_t1;
    NSString *_startTime;
    NSString *_appId;
    NSString *_referSpm;
    NSString *_srcSPM;
    TTManualPageInfo *_referPageInfo;
    NSString *_refer;
    long long _pageType;
    NSString *_framePageSrc;
    NSString *_framePageRefer;
    NSString *_bizPageSrc;
    NSString *_bizPageRefer;
    NSString *_bizClickSrc;
    NSString *_frameClickSrc;
    NSString *_bizClickRefer;
    NSString *_frameClickRefer;
    NSString *_bizClickSeqSrc;
    NSString *_frameClickSeqSrc;
    NSString *_autoPageSrc;
    NSString *_autoClickSrc;
    NSString *_autoClickSeqSrc;
    NSLock *_lock;
    NSMutableArray *_pageParamsArray;
    TTNewChinfoItem *_chinfoItem;
    TTOpenIdItem *_openIdItem;
}

+ (void)passFirstPageParamsToPageInfo:(id)arg1;
+ (void)updatePageId:(id)arg1 WithSpmid:(id)arg2;
+ (id)createPageInfoWithSpmId:(id)arg1 index:(id)arg2;
+ (void)filterPageInfo:(id)arg1;
@property(retain) TTOpenIdItem *openIdItem; // @synthesize openIdItem=_openIdItem;
@property(retain) TTNewChinfoItem *chinfoItem; // @synthesize chinfoItem=_chinfoItem;
@property _Bool isTracking; // @synthesize isTracking=_isTracking;
@property(retain, nonatomic) NSMutableArray *pageParamsArray; // @synthesize pageParamsArray=_pageParamsArray;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain) NSString *autoClickSeqSrc; // @synthesize autoClickSeqSrc=_autoClickSeqSrc;
@property(retain) NSString *autoClickSrc; // @synthesize autoClickSrc=_autoClickSrc;
@property(retain) NSString *autoPageSrc; // @synthesize autoPageSrc=_autoPageSrc;
@property(retain) NSString *frameClickSeqSrc; // @synthesize frameClickSeqSrc=_frameClickSeqSrc;
@property(retain) NSString *bizClickSeqSrc; // @synthesize bizClickSeqSrc=_bizClickSeqSrc;
@property(retain) NSString *frameClickRefer; // @synthesize frameClickRefer=_frameClickRefer;
@property(retain) NSString *bizClickRefer; // @synthesize bizClickRefer=_bizClickRefer;
@property(retain) NSString *frameClickSrc; // @synthesize frameClickSrc=_frameClickSrc;
@property(retain) NSString *bizClickSrc; // @synthesize bizClickSrc=_bizClickSrc;
@property(retain) NSString *bizPageRefer; // @synthesize bizPageRefer=_bizPageRefer;
@property(retain) NSString *bizPageSrc; // @synthesize bizPageSrc=_bizPageSrc;
@property(retain) NSString *framePageRefer; // @synthesize framePageRefer=_framePageRefer;
@property(retain) NSString *framePageSrc; // @synthesize framePageSrc=_framePageSrc;
@property long long pageType; // @synthesize pageType=_pageType;
@property(copy) NSString *refer; // @synthesize refer=_refer;
@property _Bool isMultistepBack; // @synthesize isMultistepBack=_isMultistepBack;
@property _Bool isBack; // @synthesize isBack=_isBack;
@property _Bool isPageRepeat; // @synthesize isPageRepeat=_isPageRepeat;
@property(retain) TTManualPageInfo *referPageInfo; // @synthesize referPageInfo=_referPageInfo;
@property(retain) NSString *srcSPM; // @synthesize srcSPM=_srcSPM;
@property(copy) NSString *referSpm; // @synthesize referSpm=_referSpm;
@property _Bool didEnd; // @synthesize didEnd=_didEnd;
@property(retain) NSString *appId; // @synthesize appId=_appId;
@property(retain) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain) NSNumber *t1; // @synthesize t1=_t1;
@property(retain) NSString *pageSpmId; // @synthesize pageSpmId=_pageSpmId;
@property(retain) NSString *pageId; // @synthesize pageId=_pageId;
@property __weak NSObject *weakIndex; // @synthesize weakIndex=_weakIndex;
- (void).cxx_destruct;
- (id)fullGuideItemAtIndex:(unsigned long long)arg1;
- (void)setFullGuideItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)fullGideDict;
- (id)pRootItem;
- (void)passPageParamsToPageInfo:(id)arg1;
- (void)setPageParams:(id)arg1 traceStep:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

