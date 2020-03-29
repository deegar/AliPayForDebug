//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CCardResendRemindViewDelegate-Protocol.h"

@class CCardResendRemindView, NSArray, NSString;
@protocol CBResendRemindManagerDelegate;

@interface CBResendRemindManager : NSObject <CCardResendRemindViewDelegate>
{
    CCardResendRemindView *_resendView;
    id <CBResendRemindManagerDelegate> _delegate;
    NSArray *_arrFailedMessageBiz;
    unsigned long long _resendRemindViewBizType;
}

@property(nonatomic) unsigned long long resendRemindViewBizType; // @synthesize resendRemindViewBizType=_resendRemindViewBizType;
@property(copy, nonatomic) NSArray *arrFailedMessageBiz; // @synthesize arrFailedMessageBiz=_arrFailedMessageBiz;
@property(nonatomic) __weak id <CBResendRemindManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CCardResendRemindView *resendView; // @synthesize resendView=_resendView;
- (void).cxx_destruct;
- (void)resendRemindViewDidClean:(id)arg1;
- (void)resendRemindViewDidRetry:(id)arg1;
- (void)didCleanHandler:(id)arg1;
- (void)didRetryHandler:(id)arg1;
- (void)sendingStatusChanged:(id)arg1;
- (void)dealloc;
- (void)querySendFailedCardCount:(CDUnknownBlockType)arg1;
- (id)initWithResendViewFrame:(struct CGRect)arg1 andResendViewBizType:(unsigned long long)arg2 andResendViewText:(id)arg3 andFailedMessageBizs:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

