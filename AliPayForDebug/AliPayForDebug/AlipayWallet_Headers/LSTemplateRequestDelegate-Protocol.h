//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALTDataManager, ALTDataManagerContext, FinaggexpbffCardTagModelEntryPB, FinaggexpbffRequestPB, FinaggexpbffResponsePB, NSString;

@protocol LSTemplateRequestDelegate <NSObject>
- (FinaggexpbffResponsePB *)requstTemplate:(FinaggexpbffRequestPB *)arg1;

@optional
- (NSString *)dataManager:(ALTDataManager *)arg1 cardTag:(FinaggexpbffCardTagModelEntryPB *)arg2 mergeNewJsonResult:(NSString *)arg3 withOldJsonResult:(NSString *)arg4 context:(ALTDataManagerContext *)arg5;
@end

