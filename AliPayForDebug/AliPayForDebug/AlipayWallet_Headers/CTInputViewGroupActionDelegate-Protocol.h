//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTInputViewGeneralDelegate-Protocol.h"

@protocol CTInputViewGeneralProtocol;

@protocol CTInputViewGroupActionDelegate <CTInputViewGeneralDelegate>

@optional
- (void)inputView:(id <CTInputViewGeneralProtocol>)arg1 emojiButtonTapped:(id)arg2;
- (void)inputView:(id <CTInputViewGeneralProtocol>)arg1 recordButtonTapped:(id)arg2;
- (void)inputView:(id <CTInputViewGeneralProtocol>)arg1 groupToolsButtonTapped:(id)arg2;
- (void)inputViewGroupToolsViewWakeupHideEmoji:(id <CTInputViewGeneralProtocol>)arg1;
- (void)inputViewGroupToolsViewWakeupEmoji:(id <CTInputViewGeneralProtocol>)arg1;
- (void)inputViewGroupToolsViewDisappear:(id <CTInputViewGeneralProtocol>)arg1;
- (void)inputViewGroupToolsViewWakeup:(id <CTInputViewGeneralProtocol>)arg1;
@end

