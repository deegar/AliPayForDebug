//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface ProtoBizSyncInfo : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasBizType;
    _Bool _hasSyncKey;
    _Bool _hasPf;
    _Bool _hasBizName;
    _Bool _hasDispatchStatus;
    int _bizType;
    int _pf;
    int _dispatchStatus;
    long long _syncKey;
    NSString *_bizName;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic) int dispatchStatus; // @synthesize dispatchStatus=_dispatchStatus;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(nonatomic) int pf; // @synthesize pf=_pf;
@property(nonatomic) long long syncKey; // @synthesize syncKey=_syncKey;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(readonly) _Bool hasDispatchStatus; // @synthesize hasDispatchStatus=_hasDispatchStatus;
@property(readonly) _Bool hasBizName; // @synthesize hasBizName=_hasBizName;
@property(readonly) _Bool hasPf; // @synthesize hasPf=_hasPf;
@property(readonly) _Bool hasSyncKey; // @synthesize hasSyncKey=_hasSyncKey;
@property(readonly) _Bool hasBizType; // @synthesize hasBizType=_hasBizType;
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

