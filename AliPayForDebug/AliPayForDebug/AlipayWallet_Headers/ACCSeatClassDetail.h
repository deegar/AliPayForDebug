//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface ACCSeatClassDetail : NSObject <NSCoding>
{
    NSString *_seatClassCode;
    NSString *_seatClassName;
    NSString *_seatClassDesc;
    NSString *_seatClassDisplayName;
}

@property(retain, nonatomic) NSString *seatClassDisplayName; // @synthesize seatClassDisplayName=_seatClassDisplayName;
@property(retain, nonatomic) NSString *seatClassDesc; // @synthesize seatClassDesc=_seatClassDesc;
@property(retain, nonatomic) NSString *seatClassName; // @synthesize seatClassName=_seatClassName;
@property(retain, nonatomic) NSString *seatClassCode; // @synthesize seatClassCode=_seatClassCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

