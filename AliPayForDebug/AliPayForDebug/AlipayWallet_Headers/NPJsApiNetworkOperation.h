//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NPJsApiNetworkOperation : NSObject
{
}

+ (void)downloadFileWithUrl:(id)arg1 headers:(id)arg2 mainUrl:(id)arg3 isTinyApp:(_Bool)arg4 appId:(id)arg5 fileDownloadTask:(id)arg6 viewController:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)uploadFileWithUrl:(id)arg1 headers:(id)arg2 mainUrl:(id)arg3 isTinyApp:(_Bool)arg4 appId:(id)arg5 postData:(id)arg6 fileUploadTask:(id)arg7 viewController:(id)arg8 completion:(CDUnknownBlockType)arg9;
+ (_Bool)safeCookieEnabled:(id)arg1;

@end

