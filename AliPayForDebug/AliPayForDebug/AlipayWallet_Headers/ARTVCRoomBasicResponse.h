//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface ARTVCRoomBasicResponse : NSObject
{
    int _opcmd;
    int _code;
    long long _requestId;
    NSString *_msg;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) int code; // @synthesize code=_code;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) int opcmd; // @synthesize opcmd=_opcmd;
- (void).cxx_destruct;
- (id)description;
- (id)initWithJsonDictionary:(id)arg1;

@end

