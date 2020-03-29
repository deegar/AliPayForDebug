//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessage.h"

@class NSArray, NSString;

@interface PPChatAutoMessage : PPChatMessage
{
    NSArray *_longPressActions;
    NSString *_templateId;
    NSString *_actionType;
    NSString *_actionParam;
}

@property(copy, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSArray *longPressActions; // @synthesize longPressActions=_longPressActions;
- (void).cxx_destruct;
- (id)shareItemActionParamAtIndex:(long long)arg1;
- (id)shareItemImageURLStringAtIndex:(long long)arg1;
- (id)shareItemDetailAtIndex:(long long)arg1;
- (id)shareItemTitleAtIndex:(long long)arg1;
- (id)shareMessageActionParam;
- (id)shareMessageImageURLString;
- (id)shareMessageDetail;
- (id)shareMessageTitle;
- (_Bool)hasAction;
- (long long)indexOfMessageItemByActionId:(id)arg1;
- (id)shareMessageItem;
- (id)messageItemAtIndex:(long long)arg1;
- (id)messageItems;

@end

