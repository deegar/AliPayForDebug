//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiResponseBase.h"

@class NSDictionary, NSNumber, NSString;

@interface RVPJSApiResHttpRequest : RVKJSApiResponseBase
{
    NSString *_data;
    NSNumber *_status;
    NSDictionary *_headers;
}

@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;

@end

