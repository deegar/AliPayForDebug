//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APHistorySearchManager : NSObject
{
}

+ (id)sharedInstance;
- (void)clearLocalSuggestWithActionSrc:(id)arg1 text:(id)arg2;
- (id)getLocalSuggestWithActionSrc:(id)arg1 text:(id)arg2;
- (void)storeSuggestHistoryWithSuggestActionSrc:(id)arg1 text:(id)arg2 keyWord:(id)arg3;
- (id)historySearchForTarget:(id)arg1 userId:(id)arg2;
- (void)clearHistoryRecordForTarget:(id)arg1 userId:(id)arg2;
- (void)storeHistoryRecordForTarget:(id)arg1 userId:(id)arg2 searchKey:(id)arg3;

@end

