//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EMJStickerItem, NSString;

@interface EMJStickerMaker : NSObject
{
    EMJStickerItem *_sticker;
    NSString *_faceImagePath;
    NSString *_outFolder;
}

@property(retain, nonatomic) NSString *outFolder; // @synthesize outFolder=_outFolder;
@property(retain, nonatomic) NSString *faceImagePath; // @synthesize faceImagePath=_faceImagePath;
@property(retain, nonatomic) EMJStickerItem *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)makeAnimationImageArray;

@end

