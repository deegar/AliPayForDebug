//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcAsyncCaller, NSString;

@interface APRemoteSearchEngine : NSObject
{
    NSString *_searchParamas;
    NSString *_flip;
    DTRpcAsyncCaller *_caller;
    DTRpcAsyncCaller *_suggestCaller;
    NSString *_userId;
}

@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) __weak DTRpcAsyncCaller *suggestCaller; // @synthesize suggestCaller=_suggestCaller;
@property(nonatomic) __weak DTRpcAsyncCaller *caller; // @synthesize caller=_caller;
@property(retain, nonatomic) NSString *flip; // @synthesize flip=_flip;
@property(retain, nonatomic) NSString *searchParamas; // @synthesize searchParamas=_searchParamas;
- (void).cxx_destruct;
- (id)getSearchArgs;
- (void)suggestSearch:(id)arg1 actionSrc:(id)arg2 currentCity:(id)arg3 location:(id)arg4 searchSessionId:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)groupsShouldQuery:(id)arg1;
- (id)groupsShouldRemoved:(id)arg1;
- (id)searchRequest:(id)arg1 sceneCode:(id)arg2 groupOut:(id)arg3 page:(long long)arg4 pageSize:(long long)arg5 selectedMenus:(id)arg6 searchSrc:(id)arg7 location:(id)arg8 extInfos:(id)arg9;
- (void)remoteSearchText:(id)arg1 localGroupConfigs:(id)arg2 remoteGroups:(id)arg3 launchSource:(id)arg4 searchSource:(id)arg5 searchSessionId:(id)arg6 searchMenuInfo:(id)arg7 location:(id)arg8 startIndex:(long long)arg9 count:(long long)arg10 extInfos:(id)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (void)dealloc;

@end

