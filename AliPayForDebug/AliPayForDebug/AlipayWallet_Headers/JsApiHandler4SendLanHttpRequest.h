//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@interface JsApiHandler4SendLanHttpRequest : PSDJsApiHandler
{
}

- (unsigned int)convertIpAddress:(id)arg1;
- (id)queryIpWithHost:(id)arg1;
- (id)requestFromDictionary:(id)arg1 url:(id)arg2 context:(id)arg3 referer:(id)arg4 appId:(id)arg5;
- (id)encodeUrl:(id)arg1;
- (void)doHandlerWithData:(id)arg1 context:(id)arg2 url:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

