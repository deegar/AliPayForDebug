//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MFLabelURL, MFTextMagnifier, MFTextRange, MFTextSelectionView, NSMutableArray, NSMutableAttributedString, NSString, UIColor, UIFont;
@protocol MFAttributedLabelDelegate;

@interface MFAttributeBaseLabel : UIView
{
    NSMutableArray *_autoLinks;
    NSMutableArray *_locationLinks;
    NSMutableArray *_locationFonts;
    struct __CTFrame *_textFrame;
    double _ctFontAscent;
    double _ctFontDescent;
    double _ctFontHeight;
    double _touchMerge;
    struct {
        unsigned int trackingGrabber:2;
        unsigned int trackingCaret:1;
        unsigned int trackingTouch:1;
        unsigned int showingMagnifierCaret:1;
        unsigned int showingMagnifierRanged:1;
        unsigned int firstShowDot:1;
    } _state;
    unsigned char _textAlignment;
    unsigned char _lineBreakMode;
    _Bool _closeBaseEmojiDetect;
    _Bool _detectEmotionEmoji;
    _Bool _autoDetectLinks;
    _Bool _userCache;
    _Bool _closeMergeSize;
    _Bool _isEditingModel;
    _Bool _linkDetected;
    _Bool _ignoreRedraw;
    _Bool _tracksTouch;
    _Bool _isUserExtendEmoji;
    int _detectHtmlEmotion;
    int _detectLinkType;
    id <MFAttributedLabelDelegate> _delegate;
    UIFont *_font;
    long long _numberOfLines;
    double _ctfirstLineHeadIndent;
    double _ctlineSpacing;
    double _ctparagraphSpacing;
    NSString *_plainText;
    NSMutableAttributedString *_attributedString;
    UIColor *_textColor;
    UIColor *_highlightColor;
    UIColor *_linkColor;
    UIColor *_underLineColor;
    NSString *_identifer;
    long long _totalDrawLineNumber;
    NSMutableArray *_attachments;
    MFLabelURL *_touchedLink;
    UIFont *_linkMaxFont;
    MFTextSelectionView *_selectionView;
    MFTextRange *_selectedTextRange;
    MFTextRange *_markedTextRange;
    MFTextMagnifier *_magnifierCaret;
    MFTextMagnifier *_magnifierRanged;
    MFTextRange *_trackingRange;
    double _trackingTime;
    struct CGPoint _tracksPoint;
    struct CGPoint _trackingPoint;
}

+ (double)getLinesHeight:(long long)arg1 font:(id)arg2 lineSpacing:(double)arg3;
+ (int)isTheSameColor:(id)arg1 toColor:(id)arg2;
+ (void)addCacheWithModel:(id)arg1 text:(id)arg2;
+ (id)getCacheForText:(id)arg1;
+ (void)setCustomDetectMethod:(CDUnknownBlockType)arg1;
+ (_Bool)isEmoji:(unsigned short)arg1 subString:(id)arg2;
+ (id)stringContainsEmoji:(id)arg1;
+ (_Bool)ISIOS7;
@property(nonatomic) double trackingTime; // @synthesize trackingTime=_trackingTime;
@property(nonatomic) struct CGPoint trackingPoint; // @synthesize trackingPoint=_trackingPoint;
@property(retain, nonatomic) MFTextRange *trackingRange; // @synthesize trackingRange=_trackingRange;
@property(retain, nonatomic) MFTextMagnifier *magnifierRanged; // @synthesize magnifierRanged=_magnifierRanged;
@property(retain, nonatomic) MFTextMagnifier *magnifierCaret; // @synthesize magnifierCaret=_magnifierCaret;
@property(retain, nonatomic) MFTextRange *markedTextRange; // @synthesize markedTextRange=_markedTextRange;
@property(retain, nonatomic) MFTextRange *selectedTextRange; // @synthesize selectedTextRange=_selectedTextRange;
@property(retain, nonatomic) MFTextSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(readonly, nonatomic) _Bool isUserExtendEmoji; // @synthesize isUserExtendEmoji=_isUserExtendEmoji;
@property(nonatomic) struct CGPoint tracksPoint; // @synthesize tracksPoint=_tracksPoint;
@property(nonatomic) _Bool tracksTouch; // @synthesize tracksTouch=_tracksTouch;
@property(nonatomic) _Bool ignoreRedraw; // @synthesize ignoreRedraw=_ignoreRedraw;
@property(nonatomic) _Bool linkDetected; // @synthesize linkDetected=_linkDetected;
@property(retain, nonatomic) UIFont *linkMaxFont; // @synthesize linkMaxFont=_linkMaxFont;
@property(retain, nonatomic) MFLabelURL *touchedLink; // @synthesize touchedLink=_touchedLink;
@property(nonatomic) _Bool isEditingModel; // @synthesize isEditingModel=_isEditingModel;
@property(readonly, nonatomic) NSMutableArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) _Bool closeMergeSize; // @synthesize closeMergeSize=_closeMergeSize;
@property(readonly, nonatomic) long long totalDrawLineNumber; // @synthesize totalDrawLineNumber=_totalDrawLineNumber;
@property(retain, nonatomic) NSString *identifer; // @synthesize identifer=_identifer;
@property(nonatomic) _Bool userCache; // @synthesize userCache=_userCache;
@property(nonatomic) int detectLinkType; // @synthesize detectLinkType=_detectLinkType;
@property(nonatomic) _Bool autoDetectLinks; // @synthesize autoDetectLinks=_autoDetectLinks;
@property(retain, nonatomic) UIColor *underLineColor; // @synthesize underLineColor=_underLineColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) _Bool detectEmotionEmoji; // @synthesize detectEmotionEmoji=_detectEmotionEmoji;
@property(nonatomic) _Bool closeBaseEmojiDetect; // @synthesize closeBaseEmojiDetect=_closeBaseEmojiDetect;
@property(nonatomic) int detectHtmlEmotion; // @synthesize detectHtmlEmotion=_detectHtmlEmotion;
@property(readonly, nonatomic) NSString *plainText; // @synthesize plainText=_plainText;
@property(nonatomic) double ctparagraphSpacing; // @synthesize ctparagraphSpacing=_ctparagraphSpacing;
@property(nonatomic) double ctlineSpacing; // @synthesize ctlineSpacing=_ctlineSpacing;
@property(nonatomic) double ctfirstLineHeadIndent; // @synthesize ctfirstLineHeadIndent=_ctfirstLineHeadIndent;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <MFAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)linePositionForPosition:(id)arg1;
- (unsigned long long)textPositionForPoint:(struct CGPoint)arg1 lineIndex:(unsigned long long)arg2;
- (unsigned long long)closestLineIndexForPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)positionForPoint:(struct CGPoint)arg1 oldPosition:(id)arg2 otherPosition:(id)arg3;
- (void)updateTextRangeByTrackingGrabber;
- (double)getOriginYOfIndex:(unsigned long long)arg1;
- (struct __CTRun *)runForLine:(struct __CTLine *)arg1 position:(id)arg2;
- (double)offsetForTextPosition:(unsigned long long)arg1 lineIndex:(unsigned long long)arg2;
- (unsigned long long)lineIndexForPosition:(id)arg1;
- (id)correctedRangeWithEdge:(id)arg1;
- (id)selectionRectsForRange:(id)arg1;
- (id)defaultTintColor;
- (id)selectingText;
- (_Bool)isSelectingAllRange;
- (void)selectAllRange;
- (double)getMagnifierRangedOffset;
- (void)hideMagnifier;
- (void)showMagnifierRanged;
- (void)showMagnifierCaret;
- (void)updateSelectionView;
- (void)stopEdit;
- (void)startEdit;
- (void)setEmoji:(id)arg1 src:(id)arg2 range:(struct _NSRange)arg3 maxSize:(struct CGSize)arg4 margin:(struct UIEdgeInsets)arg5 alignment:(int)arg6 backString:(id)arg7;
- (void)addBlodFont:(struct _NSRange)arg1;
- (id)sizeKey:(struct CGSize)arg1;
- (id)coreFormatRefKey:(struct CGSize)arg1;
- (id)attributedStrKey;
- (id)attachmentsKey;
- (id)autoLinksKey;
- (id)localElementKey;
- (id)defultKey;
- (void)prepareViewData;
- (float)getScreenScale;
- (id)colorWithColor:(id)arg1;
- (id)fontWithFont:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPressEvent;
- (void)handleDoubleClickEvent;
- (void)handleSingleFingerEvent;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addAutoDetectedLink:(id)arg1;
- (void)computeLinks:(id)arg1;
- (void)computeLink:(id)arg1 sync:(_Bool)arg2;
- (void)recomputeLinksIfNeeded;
- (_Bool)onLabelLinkLongPress:(id)arg1;
- (_Bool)onLabelClick:(struct CGPoint)arg1;
- (void)drawAttachments:(id)arg1;
- (void)drawText:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (double)lineHeight;
- (void)drawHighlightWithRect:(struct CGRect)arg1;
- (void)prepareTextFrame:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 isDrawFrame:(_Bool)arg2;
- (void)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2 linkColor:(id)arg3 underLine:(_Bool)arg4;
- (void)addColorForRange:(struct _NSRange)arg1 url:(id)arg2 font:(id)arg3 linkColor:(id)arg4 underLine:(_Bool)arg5;
- (void)appendImage:(id)arg1 maxSize:(struct CGSize)arg2 margin:(struct UIEdgeInsets)arg3 alignment:(int)arg4;
- (void)appendAttributedText:(id)arg1;
- (void)appendText:(id)arg1;
- (void)setCtAttributedText:(id)arg1;
- (void)setCtText:(id)arg1;
- (void)appendAttachment:(id)arg1;
- (struct CGRect)rectForRange:(struct _NSRange)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3 index:(long long)arg4;
- (id)linkAtIndex:(long long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2 index:(int)arg3;
- (struct CGAffineTransform)transformForCoreText;
- (id)linkDataForPoint:(struct CGPoint)arg1;
- (id)urlForPoint:(struct CGPoint)arg1;
- (id)attributedStringForDraw;
- (long long)numberOfDisplayedLines;
- (id)attributedString:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetFont;
- (void)resetTextFrame;
- (void)cleanAll;
- (void)cleanNormal;
- (void)refreshFont;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)setCTText:(id)arg1 emojiMap:(id)arg2;

@end

