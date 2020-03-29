//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APCommonItemProtocol-Protocol.h"
#import "HiChatItemDisplayDataProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface BCShop : NSObject <APCommonItemProtocol, HiChatItemDisplayDataProtocol, NSCopying>
{
    NSString *_shopId;
    NSString *_name;
    NSString *_avatar;
    NSString *_address;
    NSString *_phone;
    NSString *_infoScheme;
    NSString *_shopType;
    long long _version;
    NSDate *_createTime;
}

@property(retain, nonatomic) NSDate *createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *shopType; // @synthesize shopType=_shopType;
@property(copy, nonatomic) NSString *infoScheme; // @synthesize infoScheme=_infoScheme;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (id)hichat_displayName;
- (id)hichat_headUrl;
- (id)iconUrl;
- (id)commonID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

