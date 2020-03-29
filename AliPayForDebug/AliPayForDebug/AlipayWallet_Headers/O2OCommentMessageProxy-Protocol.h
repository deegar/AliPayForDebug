//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSNumber, NSString, O2OCommentMessage;

@protocol O2OCommentMessageProxy <APDAOProtocol>
- (APDAOResult *)deleteOverdueMessagesWithUserId:(NSString *)arg1 time:(NSString *)arg2;
- (NSArray *)queryMessageByServiceMsgId:(NSString *)arg1;
- (NSArray *)queryAllMessagesWithUserId:(NSString *)arg1;
- (NSNumber *)quertMessageCountWithUserId:(NSString *)arg1;
- (APDAOResult *)markMessagesRead:(NSString *)arg1;
- (NSArray *)queryUnReadMessagesWithUserId:(NSString *)arg1;
- (NSNumber *)queryUnReadMessageCountWithUserId:(NSString *)arg1;
- (NSArray *)queryMessagesBeforeTime:(NSNumber *)arg1 userId:(NSString *)arg2 msgState:(NSNumber *)arg3 limit:(NSNumber *)arg4;
- (APDAOResult *)deleteMessageWithServiceMsgId:(NSString *)arg1;
- (APDAOResult *)deleteMessageWithCommentedId:(NSString *)arg1;
- (APDAOResult *)deleteMessageWithMsgId:(NSNumber *)arg1;
- (APDAOResult *)deleteMessagesWithUserId:(NSString *)arg1;
- (APDAOResult *)insertMessages:(NSArray *)arg1;
- (APDAOResult *)insertMessage:(O2OCommentMessage *)arg1;
@end

