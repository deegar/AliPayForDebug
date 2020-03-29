//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SPProfileSettingSectionItem : NSObject
{
    int _flag;
    NSString *_sectionHeaderTitle;
    NSString *_sectionFooterTitle;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    NSMutableArray *_items;
}

@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property(nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property(retain, nonatomic) NSString *sectionFooterTitle; // @synthesize sectionFooterTitle=_sectionFooterTitle;
@property(retain, nonatomic) NSString *sectionHeaderTitle; // @synthesize sectionHeaderTitle=_sectionHeaderTitle;
- (void).cxx_destruct;
- (void)clearAll;
- (void)addItem:(id)arg1;

@end

