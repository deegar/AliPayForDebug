//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSToString.h"

@class NSDate, NSString;

@interface MSUserFlagEntity : MSToString
{
    _Bool _loginWithoutPwd;
    NSString *_logonId;
    NSString *_userId;
    NSString *_headImgUrl;
    NSDate *_lastLoginTime;
    NSString *_userType;
}

@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSDate *lastLoginTime; // @synthesize lastLoginTime=_lastLoginTime;
@property(retain, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(nonatomic) _Bool loginWithoutPwd; // @synthesize loginWithoutPwd=_loginWithoutPwd;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *logonId; // @synthesize logonId=_logonId;
- (void).cxx_destruct;

@end

