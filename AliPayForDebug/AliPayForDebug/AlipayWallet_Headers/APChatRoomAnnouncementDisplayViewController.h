//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "AUDialogDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class APChatRoomInfo, APChatRoomMemInfo, APInsetLabel, MFAttributeLabel, NSString, UIButton;

@interface APChatRoomAnnouncementDisplayViewController : DTViewController <UITextViewDelegate, AUDialogDelegate>
{
    APInsetLabel *_noAnnouncementLabel;
    MFAttributeLabel *_contentLabel;
    UIButton *_editButton;
    NSString *_role;
    NSString *_originalAnnouncement;
    APChatRoomMemInfo *_chatRoomMemInfo;
    APChatRoomInfo *_chatRoomInfo;
}

@property(retain, nonatomic) APChatRoomInfo *chatRoomInfo; // @synthesize chatRoomInfo=_chatRoomInfo;
@property(retain, nonatomic) APChatRoomMemInfo *chatRoomMemInfo; // @synthesize chatRoomMemInfo=_chatRoomMemInfo;
@property(retain, nonatomic) NSString *originalAnnouncement; // @synthesize originalAnnouncement=_originalAnnouncement;
@property(retain, nonatomic) NSString *role; // @synthesize role=_role;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(retain, nonatomic) MFAttributeLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) APInsetLabel *noAnnouncementLabel; // @synthesize noAnnouncementLabel=_noAnnouncementLabel;
- (void).cxx_destruct;
- (id)initWithChatRoomMemberInfo:(id)arg1 chatRoomInfo:(id)arg2 announcement:(id)arg3;
- (void)refreshAnnouncement:(id)arg1;
- (void)registerNotifications;
- (void)judgeRole:(id)arg1;
- (void)editChatRoomAnnouncement:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

