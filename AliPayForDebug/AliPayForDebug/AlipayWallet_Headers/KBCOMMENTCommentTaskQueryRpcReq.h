//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KBCOMMENTCommentTaskQueryRpcReq : NSObject
{
    NSString *_systemType;
    NSString *_pageName;
    long long _beginDate;
}

@property(nonatomic) long long beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
- (void).cxx_destruct;

@end

