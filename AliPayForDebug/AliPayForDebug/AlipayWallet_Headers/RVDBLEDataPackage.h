//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface RVDBLEDataPackage : NSObject
{
    NSString *_tag;
    NSString *_sessionId;
    unsigned long long _sum;
    unsigned long long _index;
    NSData *_value;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSData *value; // @synthesize value=_value;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long sum; // @synthesize sum=_sum;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWithTag:(id)arg1 sessionId:(id)arg2 sum:(unsigned long long)arg3 index:(unsigned long long)arg4 value:(id)arg5;

@end
