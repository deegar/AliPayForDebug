//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOProtocol-Protocol.h"

@class APDAOResult, NSArray, NSNumber, NSString, gotoneMsgBoxRecord;

@protocol MBMessageDAOProxy <APDAOProtocol>
- (APDAOResult *)clearAllMessageWithTimeDate:(NSNumber *)arg1;
- (APDAOResult *)set_all_message_read;
- (APDAOResult *)update_hiddenSumState:(NSNumber *)arg1 templateCode:(NSString *)arg2;
- (APDAOResult *)clearAllMessages;
- (APDAOResult *)delete_last_message_templateCode:(NSString *)arg1 msgId:(NSString *)arg2;
- (APDAOResult *)delete_message_templateCode_gmtCreate:(NSString *)arg1 gmtCreate:(NSNumber *)arg2;
- (APDAOResult *)delete_message_templateCode:(NSString *)arg1;
- (APDAOResult *)delete_message_templateCode_businessId:(NSString *)arg1 businessId:(NSString *)arg2;
- (APDAOResult *)delete_message_templateCode_messageId:(NSString *)arg1 messageId:(NSString *)arg2;
- (NSArray *)get_message_list:(NSNumber *)arg1 limit:(NSNumber *)arg2;
- (gotoneMsgBoxRecord *)query_businessId_message:(NSString *)arg1 businessId:(NSString *)arg2;
- (NSArray *)query_all_templateIds;
- (NSNumber *)query_unread_message_count;
- (NSNumber *)query_all_message_count;
- (gotoneMsgBoxRecord *)query_last_read_message;
- (gotoneMsgBoxRecord *)query_message_with_templateCode_and_gmtCreate:(NSString *)arg1 gmtCreate:(NSNumber *)arg2;
- (gotoneMsgBoxRecord *)query_message:(NSString *)arg1;
- (APDAOResult *)update_message:(gotoneMsgBoxRecord *)arg1 templateCode:(NSString *)arg2 msgId:(NSString *)arg3;
- (APDAOResult *)save_message:(gotoneMsgBoxRecord *)arg1;
@end
