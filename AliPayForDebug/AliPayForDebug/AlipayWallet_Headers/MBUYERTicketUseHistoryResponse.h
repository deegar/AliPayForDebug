//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBUYERBaseRpcResponse.h"

@class NSArray, NSString;

@interface MBUYERTicketUseHistoryResponse : MBUYERBaseRpcResponse
{
    _Bool _hasMore;
    NSString *_totalUsed;
    NSArray *_useHistory;
    NSString *_templateId;
    NSString *_templateJson;
    NSString *_nextPageNo;
    NSString *_templateType;
}

+ (Class)useHistoryElementClass;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *nextPageNo; // @synthesize nextPageNo=_nextPageNo;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSArray *useHistory; // @synthesize useHistory=_useHistory;
@property(retain, nonatomic) NSString *totalUsed; // @synthesize totalUsed=_totalUsed;
- (void).cxx_destruct;

@end

