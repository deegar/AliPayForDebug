//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MOBILECHATDeleteMemberReq : NSObject
{
    NSString *_groupId;
    NSString *_userId;
    NSArray *_userIds;
    NSString *_source;
}

+ (Class)userIdsElementClass;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;

@end
