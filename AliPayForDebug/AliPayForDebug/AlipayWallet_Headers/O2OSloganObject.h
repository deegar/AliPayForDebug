//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface O2OSloganObject : NSObject <NSCoding>
{
    NSString *_date;
    NSString *_cityCode;
    NSString *_sloganId;
    NSString *_sloganShowType;
}

@property(retain, nonatomic) NSString *sloganShowType; // @synthesize sloganShowType=_sloganShowType;
@property(retain, nonatomic) NSString *sloganId; // @synthesize sloganId=_sloganId;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

