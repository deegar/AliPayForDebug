//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PP_BEEPhotoGallerySubtitleData : NSObject
{
    _Bool _isShowBorder;
    NSString *_text;
    NSString *_colorValue;
}

@property(nonatomic) _Bool isShowBorder; // @synthesize isShowBorder=_isShowBorder;
@property(retain, nonatomic) NSString *colorValue; // @synthesize colorValue=_colorValue;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)compareString:(id)arg1 toString:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

