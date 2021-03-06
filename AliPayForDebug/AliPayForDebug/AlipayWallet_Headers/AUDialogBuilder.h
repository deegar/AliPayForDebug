//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUDialogButton, AUEdge, AURichTextLabel, NSAttributedString, NSMutableArray, NSString, UIColor, UIImage, UIImageView, UILabel, UITextField, UIView;

@interface AUDialogBuilder : NSObject
{
    _Bool _grayMessage;
    _Bool _listButtonOrderFromBottom;
    _Bool _horizontalButtonsIfNeeded;
    _Bool _emptyContent;
    NSString *_title;
    NSString *_message;
    NSAttributedString *_attributedMessage;
    NSString *_richMessage;
    UIImage *_image;
    NSString *_linkText;
    NSString *_placeholder;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_imageView;
    UITextField *_textField;
    AUDialogButton *_closeButton;
    AUDialogButton *_linkButton;
    UIView *_customView;
    AUEdge *_edge;
    UIColor *_closeBtnColor;
    long long _builderType;
    unsigned long long _buttonAssignment;
    unsigned long long _dialogType;
    long long _messageTextAlignment;
    long long _messageLineBreakMode;
    NSMutableArray *_buttons;
    UIView *_contentView;
    UIView *_buttonView;
    AURichTextLabel *_richMessageLabel;
    CDUnknownBlockType _linkActionBlock;
    struct CGSize _imageSize;
}

@property(copy, nonatomic) CDUnknownBlockType linkActionBlock; // @synthesize linkActionBlock=_linkActionBlock;
@property(retain, nonatomic) AURichTextLabel *richMessageLabel; // @synthesize richMessageLabel=_richMessageLabel;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool emptyContent; // @synthesize emptyContent=_emptyContent;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) long long messageLineBreakMode; // @synthesize messageLineBreakMode=_messageLineBreakMode;
@property(nonatomic) long long messageTextAlignment; // @synthesize messageTextAlignment=_messageTextAlignment;
@property(nonatomic) unsigned long long dialogType; // @synthesize dialogType=_dialogType;
@property(nonatomic) unsigned long long buttonAssignment; // @synthesize buttonAssignment=_buttonAssignment;
@property(nonatomic) _Bool horizontalButtonsIfNeeded; // @synthesize horizontalButtonsIfNeeded=_horizontalButtonsIfNeeded;
@property(nonatomic) _Bool listButtonOrderFromBottom; // @synthesize listButtonOrderFromBottom=_listButtonOrderFromBottom;
@property(nonatomic) long long builderType; // @synthesize builderType=_builderType;
@property(retain, nonatomic) UIColor *closeBtnColor; // @synthesize closeBtnColor=_closeBtnColor;
@property(retain, nonatomic) AUEdge *edge; // @synthesize edge=_edge;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) AUDialogButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) AUDialogButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool grayMessage; // @synthesize grayMessage=_grayMessage;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *richMessage; // @synthesize richMessage=_richMessage;
@property(retain, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)rtLabel:(id)arg1 didSelectLink:(id)arg2;
@property(readonly, nonatomic) long long numberOfButtons;
- (void)setupButtonTitleColor:(id)arg1 atIndex:(long long)arg2;
- (id)buttonTitleAtIndex:(long long)arg1;
- (id)lineView;
- (_Bool)validateAtrributeString:(id)arg1;
- (_Bool)validateString:(id)arg1;
- (_Bool)validateMessage;
- (void)updateTitleMesgUI;
- (void)updateMessageLayout;
- (void)updateTitleLayout;
- (id)processCancelButtonWithHorizontal:(_Bool)arg1 buttons:(id)arg2;
- (_Bool)checkHorizontalWithContainerWidth:(double)arg1 horizontal:(_Bool)arg2;
- (void)buildAlertButtonView:(id)arg1 containerWidth:(double)arg2;
- (void)buildAlertButtonView:(id)arg1 forDialogType:(unsigned long long)arg2;
- (void)buildAlertContentView:(id)arg1 dialogType:(unsigned long long)arg2;
- (void)enableButton:(_Bool)arg1 atIndex:(long long)arg2;
- (void)addButton:(id)arg1 actionStyle:(long long)arg2;
- (void)addButton:(id)arg1;
- (id)init;

@end

