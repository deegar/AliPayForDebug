//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface IgnoreRecommendReq : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasPublicId;
    _Bool _hasMsgBizType;
    _Bool _hasMsgBizTypeExt;
    NSString *_publicId;
    NSString *_msgBizType;
    NSString *_msgBizTypeExt;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *msgBizTypeExt; // @synthesize msgBizTypeExt=_msgBizTypeExt;
@property(retain, nonatomic) NSString *msgBizType; // @synthesize msgBizType=_msgBizType;
@property(retain, nonatomic) NSString *publicId; // @synthesize publicId=_publicId;
@property(readonly) _Bool hasMsgBizTypeExt; // @synthesize hasMsgBizTypeExt=_hasMsgBizTypeExt;
@property(readonly) _Bool hasMsgBizType; // @synthesize hasMsgBizType=_hasMsgBizType;
@property(readonly) _Bool hasPublicId; // @synthesize hasPublicId=_hasPublicId;
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

