//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface BEEMenuListModel : NSObject
{
    NSString *_title;
    UIColor *_titleSelectedColor;
    NSString *_accesoryURL;
    NSDictionary *_extendDic;
    struct CGSize _accesorySize;
}

@property(retain, nonatomic) NSDictionary *extendDic; // @synthesize extendDic=_extendDic;
@property(nonatomic) struct CGSize accesorySize; // @synthesize accesorySize=_accesorySize;
@property(retain, nonatomic) NSString *accesoryURL; // @synthesize accesoryURL=_accesoryURL;
@property(retain, nonatomic) UIColor *titleSelectedColor; // @synthesize titleSelectedColor=_titleSelectedColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

