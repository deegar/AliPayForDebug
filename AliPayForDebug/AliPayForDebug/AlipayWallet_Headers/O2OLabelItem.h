//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface O2OLabelItem : NSObject
{
    NSString *_labelId;
    NSString *_name;
    NSString *_desc;
    unsigned long long _index;
    NSString *_icon;
    NSString *_iconSelected;
}

@property(retain, nonatomic) NSString *iconSelected; // @synthesize iconSelected=_iconSelected;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *labelId; // @synthesize labelId=_labelId;
- (void).cxx_destruct;

@end

