//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableDictionary, NSString;

@interface FMLModelEventInfo : NSObject
{
    unsigned long long _event;
    id _model;
    unsigned long long _networkStatus;
    NSError *_error;
    NSString *_objectId;
    NSDictionary *_networkParams;
    NSMutableDictionary *_userInfo;
    NSString *_eventString;
    NSString *_networkStatusString;
}

+ (id)networkStatusStringWithNetworkStatus:(unsigned long long)arg1;
+ (id)eventStringWithEvent:(unsigned long long)arg1;
+ (id)networkSkippedEventWithObjectId:(id)arg1 networkParams:(id)arg2;
+ (id)networkStartEventWithObjectId:(id)arg1 networkParams:(id)arg2;
+ (id)networkFinishEventWithStatus:(unsigned long long)arg1 objectId:(id)arg2 networkParams:(id)arg3 error:(id)arg4;
+ (id)dataChangeEventWithModel:(id)arg1 objectId:(id)arg2 networkParams:(id)arg3;
@property(retain, nonatomic) NSString *networkStatusString; // @synthesize networkStatusString=_networkStatusString;
@property(retain, nonatomic) NSString *eventString; // @synthesize eventString=_eventString;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDictionary *networkParams; // @synthesize networkParams=_networkParams;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(nonatomic) unsigned long long event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)init;

@end
