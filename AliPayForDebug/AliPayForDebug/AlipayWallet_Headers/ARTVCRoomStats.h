//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARTVCRoomStats : NSObject
{
    NSString *_uid;
    NSString *_r_roomId;
    NSString *_r_bizName;
    NSString *_r_subBiz;
    long long _r_type;
    long long _r_role;
    long long _r_engine;
    long long _r_result;
    long long _r_begin_timestamp;
    long long _r_response;
}

@property(nonatomic) long long r_response; // @synthesize r_response=_r_response;
@property(nonatomic) long long r_begin_timestamp; // @synthesize r_begin_timestamp=_r_begin_timestamp;
@property(nonatomic) long long r_result; // @synthesize r_result=_r_result;
@property(nonatomic) long long r_engine; // @synthesize r_engine=_r_engine;
@property(nonatomic) long long r_role; // @synthesize r_role=_r_role;
@property(nonatomic) long long r_type; // @synthesize r_type=_r_type;
@property(copy, nonatomic) NSString *r_subBiz; // @synthesize r_subBiz=_r_subBiz;
@property(copy, nonatomic) NSString *r_bizName; // @synthesize r_bizName=_r_bizName;
@property(copy, nonatomic) NSString *r_roomId; // @synthesize r_roomId=_r_roomId;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)dictionary;
- (id)init;

@end

