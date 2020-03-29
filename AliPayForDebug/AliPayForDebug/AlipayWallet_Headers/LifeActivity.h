//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString;

@interface LifeActivity : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasActivityType;
    _Bool _hasActivityLabel;
    _Bool _hasActivityActionName;
    _Bool _hasActivityId;
    NSString *_activityType;
    NSString *_activityLabel;
    NSString *_activityActionName;
    NSString *_activityId;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *activityActionName; // @synthesize activityActionName=_activityActionName;
@property(retain, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(readonly) _Bool hasActivityId; // @synthesize hasActivityId=_hasActivityId;
@property(readonly) _Bool hasActivityActionName; // @synthesize hasActivityActionName=_hasActivityActionName;
@property(readonly) _Bool hasActivityLabel; // @synthesize hasActivityLabel=_hasActivityLabel;
@property(readonly) _Bool hasActivityType; // @synthesize hasActivityType=_hasActivityType;
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

