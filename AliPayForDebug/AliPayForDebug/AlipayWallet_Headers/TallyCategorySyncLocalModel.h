//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TallyCategorySyncLocalModel : NSObject
{
    int _priority;
    NSString *_uuid;
    NSString *_categoryType;
    NSString *_userId;
    NSString *_name;
    NSString *_tallyClass;
    NSString *_iconId;
    NSString *_iconUrl;
    NSString *_code;
    NSString *_status;
}

@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *tallyClass; // @synthesize tallyClass=_tallyClass;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;

@end

