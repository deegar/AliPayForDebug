//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSURL;
@protocol APCommonItemProtocol, APSocialFriendExpressSubModuleProtocol;

@protocol APSocialFriendVMExpressDelegate <NSObject>
- (void)jumpPageWithUrl:(NSURL *)arg1;
- (_Bool)canOpenURL:(NSURL *)arg1;
- (void)deleteItem:(id <APCommonItemProtocol>)arg1;
- (void)refreshDataWithSubModule:(id <APSocialFriendExpressSubModuleProtocol>)arg1 userInfo:(NSDictionary *)arg2;
- (void)subModuleWillDisappear:(id <APSocialFriendExpressSubModuleProtocol>)arg1;
@end
