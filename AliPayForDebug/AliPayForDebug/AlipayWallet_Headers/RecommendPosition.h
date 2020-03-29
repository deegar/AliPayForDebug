//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface RecommendPosition : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasIndex;
    _Bool _hasTemplateId;
    _Bool _hasItemData;
    _Bool _hasBTime;
    int _index;
    NSString *_templateId;
    NSString *_itemData;
    long long _bTime;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) long long bTime; // @synthesize bTime=_bTime;
@property(retain, nonatomic) NSString *itemData; // @synthesize itemData=_itemData;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(nonatomic) int index; // @synthesize index=_index;
@property(readonly) _Bool hasBTime; // @synthesize hasBTime=_hasBTime;
@property(readonly) _Bool hasItemData; // @synthesize hasItemData=_hasItemData;
@property(readonly) _Bool hasTemplateId; // @synthesize hasTemplateId=_hasTemplateId;
@property(readonly) _Bool hasIndex; // @synthesize hasIndex=_hasIndex;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

