//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSSDKJsonObject.h"

@class NSString;

@interface MSSDKFraudReportWebsite : MSSDKJsonObject
{
    NSString *_url;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)toJSONObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
