//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSGMToString.h"

@class NSArray, NSString;

@interface MSGMMenuGroup : MSGMToString
{
    NSString *_code;
    NSString *_name;
    NSArray *_menuInfos;
    NSString *_style;
}

+ (Class)menuInfosElementClass;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *menuInfos; // @synthesize menuInfos=_menuInfos;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

