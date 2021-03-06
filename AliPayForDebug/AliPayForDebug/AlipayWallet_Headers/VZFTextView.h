//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"
#import "VZFUITextViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIColor, UILabel, VZFUITextView;

@interface VZFTextView : UIView <UITextViewDelegate, VZFUITextViewDelegate>
{
    NSString *_prevText;
    double _lastHeight;
    NSMutableDictionary *_heightCache;
    NSString *_nodeId;
    _Bool _blurOnSubmit;
    _Bool _autoFocus;
    _Bool _showCount;
    VZFUITextView *_textView;
    NSString *_placeholder;
    UIColor *_placeholderColor;
    unsigned long long _maxLength;
    CDUnknownBlockType _onFocus;
    CDUnknownBlockType _onBlur;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onSubmit;
    CDUnknownBlockType _onEnd;
    CDUnknownBlockType _onScroll;
    CDUnknownBlockType _onHeightChange;
    UILabel *_placeHolderLabel;
    UILabel *_showCountLabel;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) UILabel *showCountLabel; // @synthesize showCountLabel=_showCountLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(copy, nonatomic) CDUnknownBlockType onHeightChange; // @synthesize onHeightChange=_onHeightChange;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onEnd; // @synthesize onEnd=_onEnd;
@property(copy, nonatomic) CDUnknownBlockType onSubmit; // @synthesize onSubmit=_onSubmit;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) CDUnknownBlockType onBlur; // @synthesize onBlur=_onBlur;
@property(copy, nonatomic) CDUnknownBlockType onFocus; // @synthesize onFocus=_onFocus;
@property(nonatomic) _Bool showCount; // @synthesize showCount=_showCount;
@property(nonatomic) _Bool autoFocus; // @synthesize autoFocus=_autoFocus;
@property(nonatomic) _Bool blurOnSubmit; // @synthesize blurOnSubmit=_blurOnSubmit;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) VZFUITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)vz_applyNodeAttributes:(id)arg1;
- (double)intrinsicHeight;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)didResignFirstResponder:(id)arg1;
- (_Bool)resignFirstResponder;
- (id)baseEvent;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)layoutPlaceholder;
- (void)updateShowCount;
- (void)updatePlaceholder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

