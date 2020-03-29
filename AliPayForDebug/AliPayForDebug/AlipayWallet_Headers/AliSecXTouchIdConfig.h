//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AliSecXTouchIdConfig : NSObject
{
    _Bool _doesIgnoreValidate;
    _Bool _biometricOnly;
    _Bool _biometricOnlyFallback;
    NSString *_reasonTitle;
    NSString *_faceidReasonTitle;
    NSString *_buttonTitle;
    NSString *_cancelTitle;
    NSString *_verifyId;
}

+ (id)parse:(id)arg1 preData:(id)arg2;
+ (id)parse:(id)arg1;
@property(retain, nonatomic) NSString *verifyId; // @synthesize verifyId=_verifyId;
@property(nonatomic) _Bool biometricOnlyFallback; // @synthesize biometricOnlyFallback=_biometricOnlyFallback;
@property(nonatomic) _Bool biometricOnly; // @synthesize biometricOnly=_biometricOnly;
@property(retain, nonatomic) NSString *cancelTitle; // @synthesize cancelTitle=_cancelTitle;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(retain, nonatomic) NSString *faceidReasonTitle; // @synthesize faceidReasonTitle=_faceidReasonTitle;
@property(retain, nonatomic) NSString *reasonTitle; // @synthesize reasonTitle=_reasonTitle;
@property(nonatomic) _Bool doesIgnoreValidate; // @synthesize doesIgnoreValidate=_doesIgnoreValidate;
- (void).cxx_destruct;
- (void)reParse;
- (id)init;

@end

