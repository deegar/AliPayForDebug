//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTTextInput.h"

#import "RCTBackedTextInputDelegate-Protocol.h"

@class NSNumber, NSString, RCTUITextField;

@interface RCTTextField : RCTTextInput <RCTBackedTextInputDelegate>
{
    RCTUITextField *_backedTextInput;
    _Bool _submitted;
    struct CGSize _previousContentSize;
    _Bool _caretHidden;
    NSNumber *_maxLength;
}

@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool caretHidden; // @synthesize caretHidden=_caretHidden;
- (void).cxx_destruct;
- (void)textInputDidChange;
- (_Bool)textInputShouldChangeTextInRange:(struct _NSRange)arg1 replacementText:(id)arg2;
- (void)setText:(id)arg1;
- (id)text;
- (void)sendKeyValueForString:(id)arg1;
- (id)backedTextInputView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
