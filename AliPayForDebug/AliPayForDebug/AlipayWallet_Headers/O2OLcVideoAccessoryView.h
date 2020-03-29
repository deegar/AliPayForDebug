//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class BEEPlaceholderTextView, NSDictionary, NSString, O2OLcReplyCreateModel, UIButton;
@protocol O2OLcVideoAccessoryViewDelegate;

@interface O2OLcVideoAccessoryView : UIView <UITextViewDelegate>
{
    NSString *_subjectId;
    long long _commentNum;
    NSDictionary *_selfInfo;
    NSDictionary *_parentReply;
    id <O2OLcVideoAccessoryViewDelegate> _delegate;
    BEEPlaceholderTextView *_textView;
    UIButton *_sendButton;
    UIView *_maskControl;
    O2OLcReplyCreateModel *_replyCreateModel;
    double _keyboardHeight;
}

@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) O2OLcReplyCreateModel *replyCreateModel; // @synthesize replyCreateModel=_replyCreateModel;
@property(retain, nonatomic) UIView *maskControl; // @synthesize maskControl=_maskControl;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) BEEPlaceholderTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <O2OLcVideoAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *parentReply; // @synthesize parentReply=_parentReply;
@property(retain, nonatomic) NSDictionary *selfInfo; // @synthesize selfInfo=_selfInfo;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(copy, nonatomic) NSString *subjectId; // @synthesize subjectId=_subjectId;
- (void).cxx_destruct;
- (void)sendButtonAction:(id)arg1;
- (void)forceEndEditing;
- (void)addMaskControl;
- (void)postReply:(id)arg1;
- (void)resetTextView;
- (void)updateInputViews;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

