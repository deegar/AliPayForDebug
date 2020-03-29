//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OSEARCHToString.h"

@class NSArray, NSDictionary, NSString;

@interface O2OSEARCHSuggestInfo : O2OSEARCHToString
{
    NSString *_suggestId;
    NSString *_word;
    NSString *_desc;
    NSString *_subTitle;
    NSString *_icon;
    NSString *_type;
    NSString *_target;
    NSString *_tplId;
    NSArray *_pluginInfos;
    NSArray *_pluginImages;
    NSArray *_labelList;
    NSDictionary *_objExt;
    NSDictionary *_tempExt;
}

+ (Class)tempExtElementClass;
+ (Class)objExtElementClass;
+ (Class)labelListElementClass;
+ (Class)pluginImagesElementClass;
+ (Class)pluginInfosElementClass;
@property(retain, nonatomic) NSDictionary *tempExt; // @synthesize tempExt=_tempExt;
@property(retain, nonatomic) NSDictionary *objExt; // @synthesize objExt=_objExt;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) NSArray *pluginImages; // @synthesize pluginImages=_pluginImages;
@property(retain, nonatomic) NSArray *pluginInfos; // @synthesize pluginInfos=_pluginInfos;
@property(retain, nonatomic) NSString *tplId; // @synthesize tplId=_tplId;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) NSString *suggestId; // @synthesize suggestId=_suggestId;
- (void).cxx_destruct;

@end

