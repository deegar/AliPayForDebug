//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RELATIONCommonReq.h"

@class NSString;

@interface RELATIONSimpleCommonReq : RELATIONCommonReq
{
    NSString *_targetUserId;
    NSString *_alipayAccount;
    NSString *_source;
    NSString *_creator;
}

@property(retain, nonatomic) NSString *creator; // @synthesize creator=_creator;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(retain, nonatomic) NSString *targetUserId; // @synthesize targetUserId=_targetUserId;
- (void).cxx_destruct;

@end
