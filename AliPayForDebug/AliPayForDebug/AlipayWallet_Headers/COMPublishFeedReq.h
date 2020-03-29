//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class COMAppInfo, COMCOMLocationInfo, COMPhrase, NSArray, NSString;

@interface COMPublishFeedReq : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(retain, nonatomic) COMAppInfo *appInfo; // @dynamic appInfo;
@property(retain, nonatomic) NSString *clientFeedId; // @dynamic clientFeedId;
@property(retain, nonatomic) NSString *communityId; // @dynamic communityId;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *extend; // @dynamic extend;
@property(readonly) _Bool hasAppInfo; // @dynamic hasAppInfo;
@property(readonly) _Bool hasClientFeedId; // @dynamic hasClientFeedId;
@property(readonly) _Bool hasCommunityId; // @dynamic hasCommunityId;
@property(readonly) _Bool hasContent; // @dynamic hasContent;
@property(readonly) _Bool hasExtend; // @dynamic hasExtend;
@property(readonly) _Bool hasLocationInfo; // @dynamic hasLocationInfo;
@property(readonly) _Bool hasLocationName; // @dynamic hasLocationName;
@property(readonly) _Bool hasLocationScheme; // @dynamic hasLocationScheme;
@property(readonly) _Bool hasMediaList; // @dynamic hasMediaList;
@property(readonly) _Bool hasPhrase; // @dynamic hasPhrase;
@property(readonly) _Bool hasRealLocation; // @dynamic hasRealLocation;
@property(readonly) _Bool hasTopicId; // @dynamic hasTopicId;
@property(readonly) _Bool hasType; // @dynamic hasType;
@property(readonly) _Bool hasVisible; // @dynamic hasVisible;
@property(retain, nonatomic) COMCOMLocationInfo *locationInfo; // @dynamic locationInfo;
@property(retain, nonatomic) NSString *locationName; // @dynamic locationName;
@property(retain, nonatomic) NSString *locationScheme; // @dynamic locationScheme;
@property(retain, nonatomic) NSString *mediaList; // @dynamic mediaList;
@property(retain, nonatomic) COMPhrase *phrase; // @dynamic phrase;
@property(retain, nonatomic) COMCOMLocationInfo *realLocation; // @dynamic realLocation;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(retain, nonatomic) NSArray *topicIds; // @dynamic topicIds;
@property(retain, nonatomic) NSString *type; // @dynamic type;
@property(nonatomic) int visible; // @dynamic visible;
@property(retain, nonatomic) NSArray *visibleRange; // @dynamic visibleRange;

@end

