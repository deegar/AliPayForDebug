//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AOFStorageModelProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface AOLifeStyleRelationModel : NSObject <NSCopying, AOFStorageModelProtocol>
{
    NSString *_relId;
    NSString *_relType;
    NSString *_appId;
    NSString *_updateScene;
    double _timeInterval;
}

@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) NSString *updateScene; // @synthesize updateScene=_updateScene;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *relType; // @synthesize relType=_relType;
@property(copy, nonatomic) NSString *relId; // @synthesize relId=_relId;
- (void).cxx_destruct;
- (_Bool)forceSyncUpdate;
- (_Bool)isExpired;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)uniqueIdentier;
- (id)toDictionary;
- (id)initWithDict:(id)arg1;
- (id)initWithPB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
