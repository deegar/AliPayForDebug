//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CKCommand : NSObject
{
    NSString *_name;
    unsigned long long _type;
    NSArray *_values;
    double _stamp;
}

+ (id)currentHandler;
+ (void)registerHandler:(id)arg1;
+ (id)handlerManager;
@property(nonatomic) double stamp; // @synthesize stamp=_stamp;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 value:(id)arg3;

@end

