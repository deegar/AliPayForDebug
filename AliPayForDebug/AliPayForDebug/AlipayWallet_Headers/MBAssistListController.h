//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBListController.h"

@class MBCommonMessageDAO, NSArray, NSNumber, NSString;

@interface MBAssistListController : MBListController
{
    NSNumber *_isHiddenHeader;
    MBCommonMessageDAO *_dbManager;
    NSString *_assistId;
    NSArray *_templateCodes;
}

@property(retain, nonatomic) NSArray *templateCodes; // @synthesize templateCodes=_templateCodes;
@property(retain, nonatomic) NSString *assistId; // @synthesize assistId=_assistId;
@property(retain, nonatomic) MBCommonMessageDAO *dbManager; // @synthesize dbManager=_dbManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageNeedUpdate:(id)arg1;
- (void)addNotification;
- (void)moreItemClicked:(id)arg1 menuInfo:(id)arg2 model:(id)arg3;
- (void)rowActionMore:(id)arg1 cellModel:(id)arg2 userInfo:(id)arg3;
- (void)rowActionDelete:(id)arg1 cellModel:(id)arg2 userInfo:(id)arg3;
- (_Bool)isHiddenMsgHeader;
- (_Bool)isTimeIndependentDisplay;
- (id)getOnePageOriginData:(id)arg1;
- (_Bool)markAllMessageRead;
- (id)initWitIndentify:(id)arg1 sourceId:(id)arg2 viewController:(id)arg3 assistId:(id)arg4;

@end

