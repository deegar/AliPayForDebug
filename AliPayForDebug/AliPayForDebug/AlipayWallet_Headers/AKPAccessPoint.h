//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AKPAccessPoint : TBJSONModel
{
    NSString *_ssid;
    NSString *_xssid;
    NSString *_password;
    NSString *_rssi;
    NSString *_auth;
    NSString *_encrypted;
}

@property(copy, nonatomic) NSString *encrypted; // @synthesize encrypted=_encrypted;
@property(copy, nonatomic) NSString *auth; // @synthesize auth=_auth;
@property(copy, nonatomic) NSString *rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *xssid; // @synthesize xssid=_xssid;
@property(copy, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (void).cxx_destruct;
- (id)decode2Utf8Str:(id)arg1;
- (id)description;

@end

