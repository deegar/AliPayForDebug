//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCLoginUtils : NSObject
{
}

+ (unsigned long long)loginTypeFrom:(id)arg1;
+ (_Bool)startLoginAutolyFrom:(id)arg1;
+ (_Bool)isAddNewAccountFrom:(id)arg1;
+ (id)autoLoginResultFrom:(id)arg1;
+ (id)passwordFrom:(id)arg1;
+ (id)loginIdFrom:(id)arg1;
+ (id)extraInfoFrom:(id)arg1;
+ (id)buildLoginOptionsWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 addNewAccount:(_Bool)arg4 startLoginAutoly:(_Bool)arg5 autoLoginResult:(id)arg6 extraInfo:(id)arg7;
+ (_Bool)startLoginAppWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 startLoginAutoly:(_Bool)arg4 addNewAccount:(_Bool)arg5 animated:(_Bool)arg6;
+ (_Bool)startLoginAppWithLoginId:(id)arg1 password:(id)arg2 loginType:(unsigned long long)arg3 addNewAccount:(_Bool)arg4 startLoginAutoly:(_Bool)arg5 autoLoginResult:(id)arg6 extraInfo:(id)arg7 animated:(_Bool)arg8;

@end

