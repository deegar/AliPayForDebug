//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ACAppCategory : NSObject
{
    _Bool _needHide;
    NSString *_stageCode;
    NSString *_stageName;
    NSArray *_appList;
    NSArray *_shades;
}

@property(nonatomic) _Bool needHide; // @synthesize needHide=_needHide;
@property(retain, nonatomic) NSArray *shades; // @synthesize shades=_shades;
@property(retain, nonatomic) NSArray *appList; // @synthesize appList=_appList;
@property(copy, nonatomic) NSString *stageName; // @synthesize stageName=_stageName;
@property(copy, nonatomic) NSString *stageCode; // @synthesize stageCode=_stageCode;
- (void).cxx_destruct;
- (_Bool)isEqualToACAppCategory:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

