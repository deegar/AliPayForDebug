//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UnavailableLogItem : NSObject
{
    NSString *_type;
    double _time;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1;

@end

