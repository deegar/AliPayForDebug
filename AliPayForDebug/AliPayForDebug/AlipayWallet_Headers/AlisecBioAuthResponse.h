//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AlisecBioAuthResponse : NSObject
{
    int _type;
    int _result;
    NSString *_data;
    NSDictionary *_extInfo;
}

+ (id)bioAuthResltEnum2String:(int)arg1;
+ (id)responseWith:(int)arg1 result:(int)arg2 data:(id)arg3 extInfo:(id)arg4;
+ (id)responseWith:(int)arg1 result:(int)arg2 data:(id)arg3;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

