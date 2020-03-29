//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class BSBadgeInfo, NSString;

@interface FHAssetsHeaderMarkModel : NSObject <NSCopying>
{
    long long _reportType;
    NSString *_markTag;
    NSString *_markType;
    NSString *_markValue;
    NSString *_tabValue;
    long long _priority;
    NSString *_assetType;
    long long _endDateTime;
    long long _type;
    long long _sourceType;
    NSString *_spaceCode;
    NSString *_objectId;
    BSBadgeInfo *_badgeInfo;
    NSString *_groupTag;
    NSString *_tabInterval;
    long long _level;
    NSString *_bizId;
    NSString *_promotionType;
    double _timestampToCompare;
    NSString *_cardTypeId;
    NSString *_markParams;
}

+ (id)createFromToolSpaceCode:(id)arg1;
+ (id)createWithAssetType:(id)arg1 fromDictionary:(id)arg2;
+ (id)createWithAssetType:(id)arg1 badgeSDKSpaceCode:(id)arg2 object:(id)arg3;
+ (id)createWithAssetType:(id)arg1 fromCDP:(id)arg2 object:(id)arg3;
@property(copy, nonatomic) NSString *markParams; // @synthesize markParams=_markParams;
@property(copy, nonatomic) NSString *cardTypeId; // @synthesize cardTypeId=_cardTypeId;
@property(nonatomic) double timestampToCompare; // @synthesize timestampToCompare=_timestampToCompare;
@property(retain, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(retain, nonatomic) NSString *bizId; // @synthesize bizId=_bizId;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *tabInterval; // @synthesize tabInterval=_tabInterval;
@property(retain, nonatomic) NSString *groupTag; // @synthesize groupTag=_groupTag;
@property(retain, nonatomic) BSBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *spaceCode; // @synthesize spaceCode=_spaceCode;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long endDateTime; // @synthesize endDateTime=_endDateTime;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSString *tabValue; // @synthesize tabValue=_tabValue;
@property(retain, nonatomic) NSString *markValue; // @synthesize markValue=_markValue;
@property(retain, nonatomic) NSString *markType; // @synthesize markType=_markType;
@property(retain, nonatomic) NSString *markTag; // @synthesize markTag=_markTag;
@property(nonatomic) long long reportType; // @synthesize reportType=_reportType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValidTabInterval;
- (id)markIdentity;
- (id)markTabKey;
- (id)markItemKey;
- (id)markModelKey;

@end

