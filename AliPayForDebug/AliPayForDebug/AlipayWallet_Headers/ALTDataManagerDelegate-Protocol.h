//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALTDataManager, ALTDataManagerContext, ALTThirdRpcRequest, FinaggexpbffRequestPB, FinaggexpbffResponsePB, NSArray, NSDictionary, NSError, NSObject, NSString;

@protocol ALTDataManagerDelegate <NSObject>
- (NSArray *)dataManager:(ALTDataManager *)arg1 pageLoadCardParamsWithContext:(ALTDataManagerContext *)arg2;
- (NSArray *)dataManager:(ALTDataManager *)arg1 visibleCardTypeIdsWithContext:(ALTDataManagerContext *)arg2;
- (_Bool)dataManager:(ALTDataManager *)arg1 shouldSendRequest:(FinaggexpbffRequestPB *)arg2 context:(ALTDataManagerContext *)arg3;
- (void)dataManager:(ALTDataManager *)arg1 didReceiveSyncPayloads:(NSArray *)arg2 context:(ALTDataManagerContext *)arg3;
- (void)dataManager:(ALTDataManager *)arg1 didCompleteTask:(unsigned long long)arg2 error:(NSError *)arg3 context:(ALTDataManagerContext *)arg4;
- (void)dataManager:(ALTDataManager *)arg1 didTriggerEvent:(unsigned long long)arg2 context:(ALTDataManagerContext *)arg3;
- (void)dataManager:(ALTDataManager *)arg1 didReceiveResponse:(NSObject *)arg2 request:(ALTThirdRpcRequest *)arg3 context:(ALTDataManagerContext *)arg4;
- (void)dataManager:(ALTDataManager *)arg1 didChangeCards:(NSArray *)arg2 ext:(NSDictionary *)arg3 atIndexPaths:(NSArray *)arg4 forChangeType:(unsigned long long)arg5 fromTask:(unsigned long long)arg6 context:(ALTDataManagerContext *)arg7;
- (void)dataManager:(ALTDataManager *)arg1 didChangeTemplates:(NSArray *)arg2 ext:(NSDictionary *)arg3 fromTask:(unsigned long long)arg4 context:(ALTDataManagerContext *)arg5;
- (FinaggexpbffResponsePB *)dataManager:(ALTDataManager *)arg1 responseFromRequest:(FinaggexpbffRequestPB *)arg2 operationType:(NSString *)arg3 async:(_Bool)arg4 context:(ALTDataManagerContext *)arg5;
- (NSObject *)dataManager:(ALTDataManager *)arg1 responseFromRequest:(ALTThirdRpcRequest *)arg2 context:(ALTDataManagerContext *)arg3;
@end

