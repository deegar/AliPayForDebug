//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface BLListEntranceItem : NSObject <NSCoding>
{
    _Bool _redPoint;
    NSString *_title;
    NSString *_url;
    NSMutableArray *_subList;
}

+ (id)parseItem:(id)arg1;
@property(retain, nonatomic) NSMutableArray *subList; // @synthesize subList=_subList;
@property(nonatomic) _Bool redPoint; // @synthesize redPoint=_redPoint;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

