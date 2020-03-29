//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface DynamicMsgResult : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasSuccess;
    _Bool _hasResultCode;
    _Bool _hasResultMsg;
    _Bool _success;
    int _resultCode;
    NSMutableArray *_messagePayloadList;
    NSMutableArray *_messageActionList;
    NSMutableArray *_recallBroadIdList;
    NSString *_resultMsg;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSMutableArray *recallBroadIdList; // @synthesize recallBroadIdList=_recallBroadIdList;
@property(retain, nonatomic) NSMutableArray *messageActionList; // @synthesize messageActionList=_messageActionList;
@property(retain, nonatomic) NSMutableArray *messagePayloadList; // @synthesize messagePayloadList=_messagePayloadList;
@property(readonly) _Bool hasResultMsg; // @synthesize hasResultMsg=_hasResultMsg;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addRecallBroadIdList:(id)arg1;
- (void)setRecallBroadIdListArray:(id)arg1;
- (void)addMessageActionList:(id)arg1;
- (void)setMessageActionListArray:(id)arg1;
- (void)addMessagePayloadList:(id)arg1;
- (void)setMessagePayloadListArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

