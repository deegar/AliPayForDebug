//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface mobileappconfigAppSchemeResp : NSObject
{
    int _resultCode;
    NSString *_redirectUri;
    NSString *_toast;
}

@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSString *redirectUri; // @synthesize redirectUri=_redirectUri;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;

@end

