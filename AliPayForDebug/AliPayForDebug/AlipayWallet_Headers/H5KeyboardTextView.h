//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSDictionary, NSString;
@protocol H5KeyboardTextViewDelegate;

@interface H5KeyboardTextView : UITextView
{
    _Bool _autoHeight;
    _Bool _isFixed;
    NSString *_placeholder;
    long long _line;
    NSDictionary *_attributes;
    long long _cursorIndex;
    long long _selectionStart;
    long long _selectionEnd;
    double _originHeight;
    double _lineHeight;
    struct CGRect _cursorRect;
}

@property(nonatomic) _Bool isFixed; // @synthesize isFixed=_isFixed;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) long long selectionEnd; // @synthesize selectionEnd=_selectionEnd;
@property(nonatomic) long long selectionStart; // @synthesize selectionStart=_selectionStart;
@property(nonatomic) long long cursorIndex; // @synthesize cursorIndex=_cursorIndex;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) long long line; // @synthesize line=_line;
@property(nonatomic) struct CGRect cursorRect; // @synthesize cursorRect=_cursorRect;
@property(nonatomic) _Bool autoHeight; // @synthesize autoHeight=_autoHeight;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)setText:(id)arg1;
- (void)complete;
- (struct _NSRange)markedTextRangeInField;
- (void)setSelectedRangeWithPostion;
- (void)layoutSubviews;
- (void)updateFrame:(struct CGRect)arg1 param:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 param:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <H5KeyboardTextViewDelegate> delegate; // @dynamic delegate;

@end
