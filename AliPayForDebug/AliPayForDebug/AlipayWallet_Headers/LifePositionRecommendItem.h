//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface LifePositionRecommendItem : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasExpireDate;
    long long _expireDate;
    NSMutableArray *_positions;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *positions; // @synthesize positions=_positions;
@property(nonatomic) long long expireDate; // @synthesize expireDate=_expireDate;
@property(readonly) _Bool hasExpireDate; // @synthesize hasExpireDate=_hasExpireDate;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (void)addPositions:(id)arg1;
- (void)setPositionsArray:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

