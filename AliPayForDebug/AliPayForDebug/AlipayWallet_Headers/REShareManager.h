//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, REShare3In1Manager, REShareParams, UIView;

@interface REShareManager : NSObject
{
    REShareParams *_params;
    UIView *_containerView;
    CDUnknownBlockType _shareCompletion;
    NSString *_curShareChannel;
    REShare3In1Manager *_alipayShareHandler;
}

+ (id)viewForShowingShareView;
+ (void)shareWithParams:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) REShare3In1Manager *alipayShareHandler; // @synthesize alipayShareHandler=_alipayShareHandler;
@property(retain, nonatomic) NSString *curShareChannel; // @synthesize curShareChannel=_curShareChannel;
@property(copy, nonatomic) CDUnknownBlockType shareCompletion; // @synthesize shareCompletion=_shareCompletion;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) REShareParams *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (_Bool)isDingTalkChannel:(id)arg1;
- (_Bool)isTencentChannel:(id)arg1;
- (void)shareCompletion:(id)arg1 userInfo:(id)arg2;
- (void)sharingLaunchpadDidCancel:(id)arg1;
- (void)sharingToDingTalk:(id)arg1;
- (void)shareLinkToChannel:(id)arg1 withSnapImage:(id)arg2;
- (void)shareToQQ;
- (void)shareToWeChatOnly;
- (void)shareToTencentChannel:(id)arg1;
- (void)sharingLaunchpad:(id)arg1 didSelectChannel:(id)arg2;
- (void)dismissContainerView:(_Bool)arg1;
- (void)dealloc;

@end

