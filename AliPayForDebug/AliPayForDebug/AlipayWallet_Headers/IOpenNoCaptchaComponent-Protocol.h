//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IOpenNoCaptchaComponent <NSObject>
- (NSString *)noCaptchaForwardAuth:(NSString *)arg1 authInfo:(NSDictionary *)arg2 authCode:(NSString *)arg3 timeout:(long long)arg4;
- (void)noCaptchaVerification:(NSString *)arg1 status:(void (^)(long long, struct CGPoint, struct CGPoint, NSString *, NSString *, NSString *))arg2;
- (_Bool)putNoCaptchaTraceRecord:(long long)arg1 point:(struct CGPoint)arg2;
- (void)initNoCaptcha:(NSString *)arg1 pageName:(NSString *)arg2 width:(int)arg3 height:(int)arg4 retry:(int)arg5 status:(void (^)(long long, struct CGPoint, struct CGPoint, NSString *, NSString *, NSString *))arg6 authCode:(NSString *)arg7;
@end

