//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APContactAPI_Recent : NSObject
{
}

+ (id)queryRecentContactWithUserType:(id)arg1;
+ (id)queryRecentContactWithBussinessIds:(id)arg1;
+ (long long)getTotalUnreadCount;
+ (id)getUserDefaultImage;
+ (id)queryRecentUserHeadWithLimit:(long long)arg1;
+ (id)recentContactViewController;
+ (id)queryRecentContactWithUserID:(id)arg1;
+ (void)deleteRecentContactWithUserIDs:(id)arg1;
+ (void)deleteRecentContactWithUserID:(id)arg1;
+ (void)insertRecentContactListToDB:(id)arg1;
+ (void)insertRecentContactToDB:(id)arg1;

@end

