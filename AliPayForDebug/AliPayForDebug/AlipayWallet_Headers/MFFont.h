//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIFont;

@interface MFFont : NSObject
{
    _Bool _showLine;
    NSArray *_contents;
    UIColor *_color;
    UIFont *_font;
    NSString *_url;
}

@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (void).cxx_destruct;

@end

