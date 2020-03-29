//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateFormatter, NSDictionary, NSString;

@interface SATempLoginManager : NSObject
{
    NSDictionary *_tempLoginConfig;
    NSArray *_dependLoginCodeArray;
    NSString *_checkDependLoginPattern;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) NSString *checkDependLoginPattern; // @synthesize checkDependLoginPattern=_checkDependLoginPattern;
@property(retain, nonatomic) NSArray *dependLoginCodeArray; // @synthesize dependLoginCodeArray=_dependLoginCodeArray;
@property(retain, nonatomic) NSDictionary *tempLoginConfig; // @synthesize tempLoginConfig=_tempLoginConfig;
- (void).cxx_destruct;
- (id)userInfo;
- (double)loginServerTime;
- (_Bool)isSessionExpire;
- (_Bool)isLoginState;
- (_Bool)codeDependLogin:(id)arg1;
- (id)matchCodeAndGetLastPath:(id)arg1 pattern:(id)arg2;
- (_Bool)switchOn;
- (id)fetchTempLoginParamWithLoginParam:(id)arg1 tempLoginKeys:(id)arg2;
- (id)getDependLoginCodeArrayFromConfig:(id)arg1;
- (void)logFailReason:(long long)arg1 exception:(id)arg2;
- (void)logFailReason:(long long)arg1;
- (_Bool)setupServerLoginConfig;
- (id)tempLoginParams:(id)arg1;

@end

