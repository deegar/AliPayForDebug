//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListItem.h"

@class NSArray, NSString, ObviousInfo;

@interface ALPCardHeadV2Item : VZListItem
{
    NSString *_logo;
    NSString *_name;
    NSArray *_tags;
    NSString *_backgroupImage;
    NSString *_backgroundColor;
    ObviousInfo *_obviousInfo;
}

@property(retain, nonatomic) ObviousInfo *obviousInfo; // @synthesize obviousInfo=_obviousInfo;
@property(retain, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *backgroupImage; // @synthesize backgroupImage=_backgroupImage;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (id)initWithPrimaryDTO:(id)arg1;

@end

