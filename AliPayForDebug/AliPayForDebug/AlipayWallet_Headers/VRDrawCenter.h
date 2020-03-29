//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VRDrawCenter : NSObject
{
}

+ (long long)maxLineNumber;
+ (float)getScreenScale;
+ (struct CGRect)rectForRange:(struct _NSRange)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3 index:(long long)arg4 rect:(struct CGRect)arg5 lineHeight:(double)arg6 maxFont:(id)arg7 isCancelled:(CDUnknownBlockType)arg8;
+ (void)drawHighlightWithLines:(struct __CFArray *)arg1 lineOrigins:(struct CGPoint *)arg2 context:(struct CGContext *)arg3 link:(id)arg4 highlightColor:(id)arg5 numberOffLines:(long long)arg6 rect:(struct CGRect)arg7 lineHeight:(double)arg8 maxFont:(id)arg9 isCancelled:(CDUnknownBlockType)arg10;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 drawString:(id)arg2 numberOflines:(long long)arg3 maxFont:(id)arg4 lineHeight:(double)arg5 lineSpacing:(double)arg6 framesetter:(struct __CTFramesetter *)arg7 getDrawItems:(CDUnknownBlockType)arg8;
+ (double)adjustSizeWidth:(struct CGSize)arg1 newSize:(struct CGSize)arg2 lineCount:(long long)arg3 framesetter:(struct __CTFramesetter *)arg4;
+ (id)drawAttachments:(id)arg1 attachments:(id)arg2 lines:(struct __CFArray *)arg3 lineOrigins:(struct CGPoint *)arg4 numberOffLines:(long long)arg5 rect:(struct CGRect)arg6 font:(id)arg7 maxFont:(id)arg8 lineHeight:(double)arg9 ctlineSpacing:(long long)arg10 lineBreak:(unsigned char)arg11 tailIndex:(long long)arg12 isCancelled:(CDUnknownBlockType)arg13;
+ (struct __CTFrame *)prepareTextFrame:(struct __CTFramesetter *)arg1 rect:(struct CGRect)arg2 isCancelled:(CDUnknownBlockType)arg3;
+ (long long)drawText:(struct __CFArray *)arg1 lineOrigins:(struct CGPoint *)arg2 context:(struct CGContext *)arg3 rect:(struct CGRect)arg4 attributedString:(id)arg5 maxFont:(id)arg6 lineBreak:(unsigned char)arg7 lineHeight:(double)arg8 numberOffLines:(long long)arg9 tailIndex:(long long *)arg10 lineThrough:(_Bool)arg11 isCancelled:(CDUnknownBlockType)arg12;
+ (unsigned long long)drawTextLines:(struct CGSize)arg1 lineHeight:(double)arg2 maxFont:(id)arg3 numberOffLines:(long long)arg4;

@end

