//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BEESearchLocationHelper : NSObject
{
}

+ (void)updateSearchHistoryRecord:(id)arg1 appId:(id)arg2;
+ (id)searchHistroyRecordsWithAppId:(id)arg1;
+ (id)createImageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)queryParametersOfUrl:(id)arg1;
+ (id)attrStrFromString:(id)arg1 sourceText:(id)arg2;
+ (void)handleLocationWithArrar:(id)arg1 showOnView:(id)arg2 currentAddressInfo:(id)arg3 onFinishLocation:(CDUnknownBlockType)arg4 onFinishedReversingGeocode:(CDUnknownBlockType)arg5;

@end

