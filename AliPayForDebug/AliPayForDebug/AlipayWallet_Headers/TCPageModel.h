//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TCWindowModel.h"

@class NSDictionary, NSString;

@interface TCPageModel : TCWindowModel
{
    _Bool _disableScroll;
    NSString *_pagePath;
    NSString *_spaceCode;
    NSDictionary *_optionMenu;
}

+ (id)parseConfig:(id)arg1 pagePath:(id)arg2 inheritWindowConfig:(id)arg3;
@property(retain, nonatomic) NSDictionary *optionMenu; // @synthesize optionMenu=_optionMenu;
@property(copy, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) _Bool disableScroll; // @synthesize disableScroll=_disableScroll;
@property(copy, nonatomic) NSString *pagePath; // @synthesize pagePath=_pagePath;
- (void).cxx_destruct;

@end

