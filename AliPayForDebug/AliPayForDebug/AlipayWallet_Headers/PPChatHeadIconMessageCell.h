//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPChatMessageCell.h"

#import "AUDialogDelegate-Protocol.h"
#import "PPChatHeadIconMessageViewDelegate-Protocol.h"

@class NSString;

@interface PPChatHeadIconMessageCell : PPChatMessageCell <PPChatHeadIconMessageViewDelegate, AUDialogDelegate>
{
}

- (void)setLogoImgWithUrl:(id)arg1;
- (id)defaultImageName;
- (id)placeHolder;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)failButtonAction;
- (_Bool)sendMsg;
- (void)setSendMsg:(_Bool)arg1;
- (void)setContentViewProperty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

