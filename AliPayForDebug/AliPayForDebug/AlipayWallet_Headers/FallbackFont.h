//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FallbackFont : NSObject
{
    _Bool _bold;
    _Bool _italic;
    float _size;
    struct __CTFont *_fontRef;
}

@property _Bool italic; // @synthesize italic=_italic;
@property _Bool bold; // @synthesize bold=_bold;
@property float size; // @synthesize size=_size;
@property struct __CTFont *fontRef; // @synthesize fontRef=_fontRef;
- (void)clear;
- (id)initWithFontRef:(struct __CTFont *)arg1 Size:(float)arg2 Bold:(_Bool)arg3 Italic:(_Bool)arg4;

@end

