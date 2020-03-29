//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKWidgetProtocol-Protocol.h"
#import "CRWidgetProtocol-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIColor, UILabel, UITextView;

@interface CKTextAreaView : UIView <CRWidgetProtocol, CKWidgetProtocol, UITextViewDelegate>
{
    _Bool _autofocus;
    _Bool _disabled;
    _Bool _showCount;
    _Bool _autoHeight;
    _Bool _controlled;
    UITextView *_textView;
    UILabel *_placeHolderLabel;
    UILabel *_countLabel;
    UIColor *_countColor;
    UIColor *_maxcountColor;
    long long _maxlength;
    NSString *_inputType;
    NSString *_returnType;
    UIColor *_placeholderColor;
    NSString *_changeEventString;
    long long _controlldeCursor;
    NSString *_controlledText;
}

+ (void)setStyle:(id)arg1 textView:(id)arg2 instanceId:(id)arg3;
+ (void)layoutPlaceholder:(id)arg1 textView:(id)arg2;
+ (struct CGSize)sizeOfView:(id)arg1 css:(id)arg2 attribute:(id)arg3 superFrame:(struct CGRect)arg4;
+ (id)createView:(id)arg1 reuse:(id)arg2 size:(struct CGSize)arg3;
+ (id)mq_export_method_async_64;
+ (id)mq_export_method_async_63;
+ (id)mq_export_method_async_62;
@property(copy, nonatomic) NSString *controlledText; // @synthesize controlledText=_controlledText;
@property(nonatomic) long long controlldeCursor; // @synthesize controlldeCursor=_controlldeCursor;
@property(nonatomic) _Bool controlled; // @synthesize controlled=_controlled;
@property(nonatomic) _Bool autoHeight; // @synthesize autoHeight=_autoHeight;
@property(nonatomic) _Bool showCount; // @synthesize showCount=_showCount;
@property(retain, nonatomic) NSString *changeEventString; // @synthesize changeEventString=_changeEventString;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) NSString *returnType; // @synthesize returnType=_returnType;
@property(copy, nonatomic) NSString *inputType; // @synthesize inputType=_inputType;
@property(nonatomic) long long maxlength; // @synthesize maxlength=_maxlength;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool autofocus; // @synthesize autofocus=_autofocus;
@property(retain, nonatomic) UIColor *maxcountColor; // @synthesize maxcountColor=_maxcountColor;
@property(retain, nonatomic) UIColor *countColor; // @synthesize countColor=_countColor;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)updateAccessibility:(id)arg1;
- (_Bool)shouldHandleAccessibility:(id)arg1;
- (void)updateCount:(id)arg1;
- (void)closeKeyboard;
- (struct CGRect)inputtingRect;
- (_Bool)isInputting;
- (void)resumeControlledCursor;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)cubeTouchBegin:(id)arg1;
- (void)setSelectionRange:(int)arg1 selectionEnd:(int)arg2;
- (void)blur;
- (void)focus;
- (void)showPlaceholder;
- (void)layoutPlaceholder;
- (void)updatePlaceholder:(id)arg1;
- (void)parseCss:(id)arg1;
- (void)parseAttrs:(id)arg1;
- (void)resetCss;
- (void)resetAttrs;
- (void)reset;
- (_Bool)handleViewPropertyWithName:(id)arg1 value:(id)arg2;
- (void)updateInset:(struct UIEdgeInsets)arg1;
- (void)updateExtParam:(id)arg1;
- (void)updateComponentData:(id)arg1;
- (void)updateEvents:(id)arg1;
- (void)updateAttrs:(id)arg1;
- (void)updateCss:(id)arg1;
- (_Bool)resumeEnable;
- (void)resumeWithData:(id)arg1;
- (void)willResume;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

