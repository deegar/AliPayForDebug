//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSTextStorage, UILongPressGestureRecognizer;

@interface RCTText : UIView
{
    NSTextStorage *_textStorage;
    CAShapeLayer *_highlightLayer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _selectable;
    struct UIEdgeInsets _contentInset;
    struct CGRect _textFrame;
}

@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) struct CGRect textFrame; // @synthesize textFrame=_textFrame;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (_Bool)isIncludingEmoji:(id)arg1;
- (_Bool)isEmoji:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)handleLongPress:(id)arg1;
- (void)disableContextMenu;
- (void)enableContextMenu;
- (id)accessibilityLabel;
- (void)didMoveToWindow;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)didUpdateReactSubviews;
- (void)reactSetFrame:(struct CGRect)arg1;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;

@end

