//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WHAppModel.h"

@class BSBadgeInfo, NSString;

@interface WHAssetsAppModel : WHAppModel
{
    NSString *_subTitleRichText;
    NSString *_subTitleColorHexString;
    BSBadgeInfo *_badgeInfo;
}

@property(retain, nonatomic) BSBadgeInfo *badgeInfo; // @synthesize badgeInfo=_badgeInfo;
@property(copy, nonatomic) NSString *subTitleColorHexString; // @synthesize subTitleColorHexString=_subTitleColorHexString;
@property(copy, nonatomic) NSString *subTitleRichText; // @synthesize subTitleRichText=_subTitleRichText;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;

@end

